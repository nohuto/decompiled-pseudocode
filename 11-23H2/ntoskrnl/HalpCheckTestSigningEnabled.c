/*
 * XREFs of HalpCheckTestSigningEnabled @ 0x1409350D0
 * Callers:
 *     HaliSetSystemInformation @ 0x14085ED18 (HaliSetSystemInformation.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041B420 (ZwQuerySystemInformation.c)
 */

bool HalpCheckTestSigningEnabled()
{
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 8LL;
  return (int)ZwQuerySystemInformation(103LL, (__int64)&v1) >= 0 && (v1 & 0x200000000LL) != 0;
}
