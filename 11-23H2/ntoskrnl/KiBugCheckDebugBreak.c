/*
 * XREFs of KiBugCheckDebugBreak @ 0x140569E20
 * Callers:
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140569A30 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x14057A91C (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403773F0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1404291C0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x14056AD60 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
