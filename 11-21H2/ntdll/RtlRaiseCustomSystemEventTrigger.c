/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x18010EBE0
 * Callers:
 *     <none>
 * Callees:
 *     TpPostWork @ 0x18001B690 (TpPostWork.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x180075450 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A6DC0 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A6DE0 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A7BA0 (ZwUpdateWnfStateData.c)
 *     RtlpCtContextFree @ 0x18010EE38 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x18010EE94 (RtlpCtContextInit.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int WnfStateData; // ebx
  __int64 Heap; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  int v6; // [rsp+44h] [rbp-5h]
  unsigned int v7; // [rsp+48h] [rbp-1h]
  _PEB_LDR_DATA **v8; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v10; // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int128 v12; // [rsp+80h] [rbp+37h] BYREF

  v8 = 0LL;
  v11 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v10 = 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    WnfStateData = RtlGUIDFromString(&DestinationString.Length, (__int64)&v12);
    if ( WnfStateData < 0 )
      return (unsigned int)WnfStateData;
    if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      return (unsigned int)-1073741823;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4096LL);
    if ( Heap )
    {
      WnfStateData = ZwQueryWnfStateData();
      if ( WnfStateData >= 0 )
      {
        WnfStateData = NtQueryWnfStateNameInformation();
        if ( WnfStateData >= 0 )
        {
          if ( v6 )
          {
            WnfStateData = NtQueryWnfStateNameInformation();
            if ( WnfStateData >= 0 )
            {
              if ( Heap == -8 )
              {
                WnfStateData = -1073741811;
              }
              else
              {
                *(_OWORD *)(Heap + 8) = v10;
                *(_OWORD *)(Heap + 24) = v12;
                *(_DWORD *)(Heap + 40) = 16;
                *(_DWORD *)Heap = 0;
                *(_DWORD *)(Heap + 4) = -1;
                *(_DWORD *)Heap = 4194448;
                WnfStateData = RtlpCtContextInit(&v8, v7);
                if ( WnfStateData >= 0 )
                {
                  WnfStateData = ZwUpdateWnfStateData();
                  if ( WnfStateData >= 0 )
                  {
                    TpPostWork(*v8, v3, v4);
                    goto LABEL_21;
                  }
                }
                if ( v8 )
                  RtlpCtContextFree(v8, v3, v4);
              }
            }
          }
          else
          {
            WnfStateData = -1073741823;
          }
        }
      }
    }
    else
    {
      WnfStateData = -1073741670;
    }
    _InterlockedExchange(&RtlpCtPublishInProgress, 0);
    if ( !Heap )
      return (unsigned int)WnfStateData;
LABEL_21:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    return (unsigned int)WnfStateData;
  }
  return (unsigned int)-1073741811;
}
