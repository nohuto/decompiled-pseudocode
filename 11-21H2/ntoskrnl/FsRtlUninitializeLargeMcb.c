/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x1402554A0
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14092E110 (FsRtlUninitializeMcb.c)
 * Callees:
 *     FsRtlUninitializeBaseMcb @ 0x140203D00 (FsRtlUninitializeBaseMcb.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 */

void __stdcall FsRtlUninitializeLargeMcb(PLARGE_MCB Mcb)
{
  __int64 v1; // r8

  if ( Mcb->GuardedMutex )
  {
    sub_140203D88((__int64)&stru_140CE2580, (_SLIST_ENTRY *)Mcb->GuardedMutex, v1);
    Mcb->GuardedMutex = 0LL;
    FsRtlUninitializeBaseMcb(&Mcb->BaseMcb);
  }
}
