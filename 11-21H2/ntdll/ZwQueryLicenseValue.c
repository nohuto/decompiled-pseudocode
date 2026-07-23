/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A6BC0
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000ED04 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetVersion @ 0x18004ED20 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x180051CD0 (SwitchedRtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180072370 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180080830 (RtlGetProductInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180111F70 (RtlpMuiRegLoadLicInformation.c)
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

  result = 347;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
