/*
 * XREFs of RtlpCtContextInit @ 0x1409C2318
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1510 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     RtlpCtContextFree @ 0x1409C22BC (RtlpCtContextFree.c)
 *     RtlpCtInitializeNotificationEvent @ 0x1409C23FC (RtlpCtInitializeNotificationEvent.c)
 *     RtlpCtInitializeWorkItem @ 0x1409C2444 (RtlpCtInitializeWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpCtContextInit(PVOID **a1, int a2)
{
  __int64 Pool2; // rax
  PVOID *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1735672676LL);
  v5 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    v6 = RtlpCtInitializeNotificationEvent(Pool2 + 16);
    if ( v6 < 0
      || (v6 = RtlpCtInitializeWorkItem(v5, v5), v6 < 0)
      || (v6 = ExSubscribeWnfStateChange(
                 (__int64)(v5 + 1),
                 (__int64)&WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                 8,
                 a2,
                 (__int64)RtlpRtlpCtSelfSubscribeCallback,
                 (__int64)v5),
          v6 < 0) )
    {
      RtlpCtContextFree(v5);
    }
    else
    {
      *a1 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
