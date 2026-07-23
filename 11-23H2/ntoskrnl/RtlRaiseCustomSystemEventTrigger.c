/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1405B1510
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14041DEB0 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x14041DED0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 *     RtlpCtAllocateMemory @ 0x1409C2298 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x1409C22BC (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1409C2318 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x1409C23E0 (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x1409C24A0 (RtlpCtQueueWorkItem.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  signed int updated; // ebx
  _DWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+40h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+44h] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+48h] [rbp-1h] BYREF
  PVOID P; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+1Fh]
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  InfoBuffer = 0;
  ChangeStamp = 0;
  P = 0LL;
  StateName = (WNF_STATE_NAME)WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v9 = 0LL;
  DestinationString = 0LL;
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
    Buffer = (_DWORD *)RtlpCtAllocateMemory(4096LL);
    if ( Buffer )
    {
      updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
      if ( updated >= 0 )
      {
        updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
        if ( updated >= 0 )
        {
          if ( InfoBuffer )
          {
            updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
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
                  updated = RtlpCtContextInit(&P, ChangeStamp);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&StateName, Buffer, BufferSize + 8, 0LL, 0LL, ChangeStamp, 1u);
                    if ( updated >= 0 )
                    {
                      RtlpCtQueueWorkItem(*(_QWORD *)P);
                      goto LABEL_23;
                    }
                  }
                  if ( P )
                    RtlpCtContextFree(P);
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
    RtlpCtFreeMemory(Buffer);
    return updated;
  }
  return -1073741811;
}
