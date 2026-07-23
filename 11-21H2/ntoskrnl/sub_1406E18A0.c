/*
 * XREFs of sub_1406E18A0 @ 0x1406E18A0
 * Callers:
 *     sub_1407DC0D0 @ 0x1407DC0D0 (sub_1407DC0D0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1406E191C @ 0x1406E191C (sub_1406E191C.c)
 */

void __fastcall sub_1406E18A0(PEX_RUNDOWN_REF RunRef, int a2)
{
  if ( a2 )
  {
    sub_1406E191C(1LL);
    sub_140347810(RunRef);
    sub_1402E2D20((unsigned __int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      sub_1406E191C(0LL);
      sub_1402AD030(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
