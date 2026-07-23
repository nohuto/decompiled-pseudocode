/*
 * XREFs of sub_1406BED60 @ 0x1406BED60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F5120 @ 0x1402F5120 (sub_1402F5120.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407000F8 @ 0x1407000F8 (sub_1407000F8.c)
 *     sub_1407A8280 @ 0x1407A8280 (sub_1407A8280.c)
 *     sub_1407B81B0 @ 0x1407B81B0 (sub_1407B81B0.c)
 */

__int64 __fastcall sub_1406BED60(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _BYTE v6[432]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (*(_DWORD *)(a1 + 1120) & 2) == 0 )
  {
    sub_1407B81B0(a1, a2);
    sub_1407000F8(a2 + 104, a2);
    *(_DWORD *)(a2 + 248) += *(_DWORD *)(a1 + 1668);
    v4 = *(_QWORD **)(a1 + 2232);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 208) += *v4;
      *(_QWORD *)(a2 + 216) += v4[1];
      *(_QWORD *)(a2 + 224) += v4[2];
      *(_QWORD *)(a2 + 232) += v4[3];
      *(_QWORD *)(a2 + 240) += v4[4];
    }
    if ( (unsigned __int8)PoEnergyEstimationEnabled() )
    {
      sub_1407A8280(a1, v6);
      sub_1402F5120(a2 + 256, (__int64)v6);
    }
  }
  return 0LL;
}
