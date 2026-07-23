/*
 * XREFs of KdCheckForDebugBreak @ 0x140332104
 * Callers:
 *     KeAccumulateTicks @ 0x1402C7DA0 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14038DD18 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x1405519C0 (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140AA2CC4 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x140332140 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x1404291C0 (DbgBreakPointWithStatus.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
