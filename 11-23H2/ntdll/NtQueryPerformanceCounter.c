/*
 * XREFs of NtQueryPerformanceCounter @ 0x1800A14D0
 * Callers:
 *     RtlQueryPerformanceCounter @ 0x180010930 (RtlQueryPerformanceCounter.c)
 *     LdrpGenSecurityCookie @ 0x18002D17C (LdrpGenSecurityCookie.c)
 *     RtlHeapTrkInitialize @ 0x18010BE00 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x18010C620 (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x18010C6A0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
