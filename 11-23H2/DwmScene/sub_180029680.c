/*
 * XREFs of sub_180029680 @ 0x180029680
 * Callers:
 *     sub_180028240 @ 0x180028240 (sub_180028240.c)
 *     sub_180048C84 @ 0x180048C84 (sub_180048C84.c)
 *     sub_180088970 @ 0x180088970 (sub_180088970.c)
 * Callees:
 *     sub_180029004 @ 0x180029004 (sub_180029004.c)
 */

char __fastcall sub_180029680(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r11d
  char v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)(a1 + 80);
  v10 = a2;
  sub_180029004((__int64 *)(a1 + 80), (__int64)v8, &v10);
  v4 = 0;
  if ( !*(_BYTE *)(v9 + 25) && v3 >= *(_DWORD *)(v9 + 28) && v9 != *v2 )
  {
    v10 = v3;
    sub_180029004(v2, (__int64)v8, &v10);
    v6 = v9;
    if ( *(_BYTE *)(v9 + 25) != v4 || v5 < *(_DWORD *)(v9 + 28) )
      v6 = *v2;
    if ( *(_BYTE *)(v6 + 32) != v4 )
      return 1;
  }
  return v4;
}
