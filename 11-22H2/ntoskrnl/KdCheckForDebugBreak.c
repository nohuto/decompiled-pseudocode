/*
 * XREFs of KdCheckForDebugBreak @ 0x140331CD4
 * Callers:
 *     KeAccumulateTicks @ 0x1402C7AE0 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14038B628 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x1405513A0 (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140AA2F14 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x140331D10 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x140428770 (DbgBreakPointWithStatus.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
