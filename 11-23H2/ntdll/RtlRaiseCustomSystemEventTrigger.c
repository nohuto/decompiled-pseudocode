/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x180110290
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     TpPostWork @ 0x180034C20 (TpPostWork.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlGUIDFromString @ 0x18006EBB0 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A3C60 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A3C80 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A4A60 (ZwUpdateWnfStateData.c)
 *     RtlpCtContextFree @ 0x1801104E8 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x180110544 (RtlpCtContextInit.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  NTSTATUS updated; // ebx
  _DWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+40h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+44h] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+48h] [rbp-1h] BYREF
  PTP_WORK *v7; // [rsp+50h] [rbp+7h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+1Fh]
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  v7 = 0LL;
  StateName = (WNF_STATE_NAME)WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v9 = 0LL;
  Guid = 0LL;
  if ( TriggerConfig )
  {
    RtlInitUnicodeString(&DestinationString, TriggerConfig->TriggerId);
    updated = RtlGUIDFromString(&DestinationString, &Guid);
    if ( updated < 0 )
      return updated;
    if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      return -1073741823;
    BufferSize = 4096;
    Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
    if ( Buffer )
    {
      updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
      if ( updated >= 0 )
      {
        updated = NtQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
        if ( updated >= 0 )
        {
          if ( InfoBuffer )
          {
            updated = NtQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
            if ( updated >= 0 )
            {
              if ( InfoBuffer )
              {
                BufferSize = 4096;
                if ( Buffer == (_DWORD *)-8LL )
                {
                  updated = -1073741811;
                }
                else
                {
                  *(_OWORD *)(Buffer + 2) = v9;
                  *(GUID *)(Buffer + 6) = Guid;
                  Buffer[10] = 16;
                  BufferSize = 36;
                  *Buffer = 0;
                  Buffer[1] = -1;
                  *Buffer = 4 * (BufferSize & 0xFFF | 0x100000);
                  updated = RtlpCtContextInit(&v7, ChangeStamp);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&StateName, Buffer, BufferSize + 8, 0LL, 0LL, ChangeStamp, 1u);
                    if ( updated >= 0 )
                    {
                      TpPostWork(*v7);
                      goto LABEL_23;
                    }
                  }
                  if ( v7 )
                    RtlpCtContextFree();
                }
              }
              else
              {
                updated = -1073741653;
              }
            }
          }
          else
          {
            updated = -1073741823;
          }
        }
      }
    }
    else
    {
      updated = -1073741670;
    }
    _InterlockedExchange(&RtlpCtPublishInProgress, 0);
    if ( !Buffer )
      return updated;
LABEL_23:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    return updated;
  }
  return -1073741811;
}
