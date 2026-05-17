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
