/*
 * XREFs of HalInitializeOnResume @ 0x1405065E0
 * Callers:
 *     PopHiberCheckResume @ 0x140AA2EA0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x14050D800 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
