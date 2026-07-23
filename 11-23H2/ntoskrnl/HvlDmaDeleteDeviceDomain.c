/*
 * XREFs of HvlDmaDeleteDeviceDomain @ 0x1405436F0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403CC390 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14045F916 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaDeleteDeviceDomain(int *a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v4 = *((_BYTE *)a1 + 4) != 0;
  v5 = *a1;
  v1 = HvcallFastExtended(65733LL, (__int64)v3, 0x18u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
