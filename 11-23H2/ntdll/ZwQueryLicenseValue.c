/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A3A60
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C574 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetVersion @ 0x18002F620 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x18004A218 (SwitchedRtlGetVersion.c)
 *     RtlGetProductInfo @ 0x180078240 (RtlGetProductInfo.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180078700 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x18009FFA4 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpMuiRegLoadLicInformation @ 0x18011388C (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryLicenseValue()
{
  __int64 result; // rax

  result = 350LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
