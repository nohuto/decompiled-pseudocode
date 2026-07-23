/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A19A0
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C778 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetVersion @ 0x18002F7F0 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x18004A378 (SwitchedRtlGetVersion.c)
 *     RtlGetProductInfo @ 0x180077BD0 (RtlGetProductInfo.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180078090 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1801123DC (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  NTSTATUS result; // eax

  result = 350;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
