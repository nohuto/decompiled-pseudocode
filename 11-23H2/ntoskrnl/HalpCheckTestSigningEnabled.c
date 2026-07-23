/*
 * XREFs of HalpCheckTestSigningEnabled @ 0x1409352D0
 * Callers:
 *     HaliSetSystemInformation @ 0x14085EF58 (HaliSetSystemInformation.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 */

bool HalpCheckTestSigningEnabled()
{
  ULONG v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 8LL;
  v1 = 0;
  return ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v2, 8u, &v1) >= 0 && (v2 & 0x200000000LL) != 0;
}
