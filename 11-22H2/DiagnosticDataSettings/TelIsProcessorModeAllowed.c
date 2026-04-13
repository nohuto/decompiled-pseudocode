/*
 * XREFs of TelIsProcessorModeAllowed @ 0x180002BE0
 * Callers:
 *     TelIsOsInProcessorMode @ 0x180002C30 (TelIsOsInProcessorMode.c)
 * Callees:
 *     <none>
 */

_BOOL8 TelIsProcessorModeAllowed()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 4;
  NtQueryLicenseValue(asc_180009000, 0LL, &v1, 4LL, &v2);
  return v1 == 1;
}
