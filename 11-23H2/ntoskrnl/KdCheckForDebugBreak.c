/*
 * XREFs of KdCheckForDebugBreak @ 0x140331E74
 * Callers:
 *     KeAccumulateTicks @ 0x1402C7B10 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14038DB38 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x140551300 (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140AA2E54 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x140331EB0 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x140428E30 (DbgBreakPointWithStatus.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
