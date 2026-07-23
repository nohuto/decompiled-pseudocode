/*
 * XREFs of ZwDeleteValueKey @ 0x1800A2A40
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008C2C (RtlpQueryRegistryValues.c)
 *     RtlDeleteRegistryValue @ 0x18008D830 (RtlDeleteRegistryValue.c)
 *     RtlInitializeRXact @ 0x18008E0C0 (RtlInitializeRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x1800EE2C0 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800F2180 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800FCEB0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 221;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
