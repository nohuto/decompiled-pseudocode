/*
 * XREFs of KiBugCheckDebugBreak @ 0x140569760
 * Callers:
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140569370 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x14057A42C (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     HeadlessDispatch @ 0x140377250 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140428E30 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x14056A6A0 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
