/*
 * XREFs of NtWaitForMultipleObjects @ 0x1800A4BC0
 * Callers:
 *     TpTrimPools @ 0x18006AC30 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     WerpWaitForCrashReporting @ 0x1800E9100 (WerpWaitForCrashReporting.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010B4F4 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
