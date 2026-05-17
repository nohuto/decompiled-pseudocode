/*
 * XREFs of NtWaitForMultipleObjects @ 0x1800A1A00
 * Callers:
 *     TpTrimPools @ 0x180069400 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     WerpWaitForCrashReporting @ 0x1800E92C0 (WerpWaitForCrashReporting.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010CB64 (RtlpHeapTrkSyncWithDiagnoser.c)
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
