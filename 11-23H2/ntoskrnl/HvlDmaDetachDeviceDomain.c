/*
 * XREFs of HvlDmaDetachDeviceDomain @ 0x1405430C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403CC1B0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x14045F516 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaDetachDeviceDomain(__int64 a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1 & 0x3FFFFFFFFFFFFFFFLL;
  v1 = HvcallFastExtended(65732LL, (__int64)v3, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
