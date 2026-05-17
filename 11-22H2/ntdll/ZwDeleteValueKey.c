/*
 * XREFs of ZwDeleteValueKey @ 0x1800A0980
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 *     RtlDeleteRegistryValue @ 0x18008D030 (RtlDeleteRegistryValue.c)
 *     RtlInitializeRXact @ 0x18008D8C0 (RtlInitializeRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ECF20 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800F0D70 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800FBAA0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteValueKey()
{
  __int64 result; // rax

  result = 221LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
