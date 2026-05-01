/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x180006870
 * Callers:
 *     RmpClientWnfCreateSubscription @ 0x180005CB0 (RmpClientWnfCreateSubscription.c)
 *     HampConnectionDestroy @ 0x180006630 (HampConnectionDestroy.c)
 *     HamIpcChannelRundown @ 0x1800067DC (HamIpcChannelRundown.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18001EA2C (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     RmSubscriptionRundown @ 0x1800068BC (RmSubscriptionRundown.c)
 */

BOOLEAN __fastcall RmpClientWnfDestroySubscription(_QWORD *a1)
{
  RmSubscriptionRundown();
  if ( a1[7] )
    TpReleaseWork();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
