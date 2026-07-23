/*
 * XREFs of sub_14068191C @ 0x14068191C
 * Callers:
 *     sub_1406831A8 @ 0x1406831A8 (sub_1406831A8.c)
 *     sub_1406836F0 @ 0x1406836F0 (sub_1406836F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406819CC @ 0x1406819CC (sub_1406819CC.c)
 *     sub_1407A8280 @ 0x1407A8280 (sub_1407A8280.c)
 */

__int64 __fastcall sub_14068191C(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-1E8h] BYREF
  int v6; // [rsp+24h] [rbp-1E4h]
  __int64 v7; // [rsp+28h] [rbp-1E0h]
  __int64 v8; // [rsp+30h] [rbp-1D8h]
  _BYTE *v9; // [rsp+38h] [rbp-1D0h]
  _BYTE v10[432]; // [rsp+40h] [rbp-1C8h] BYREF

  v1 = *(_QWORD *)(a1 + 2280);
  v6 = 0;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  ++*(_DWORD *)(v1 + 468);
  sub_1407A8280(a1, v10);
  v6 = 0;
  v8 = 0LL;
  v9 = v10;
  v5 = 3;
  v7 = a1;
  return sub_1406819CC(v3, &v5);
}
