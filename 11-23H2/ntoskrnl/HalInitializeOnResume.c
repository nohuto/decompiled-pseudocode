/*
 * XREFs of HalInitializeOnResume @ 0x140506B30
 * Callers:
 *     PopHiberCheckResume @ 0x140AA2D10 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x14050DD50 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
