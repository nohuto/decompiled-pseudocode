/*
 * XREFs of sub_180012F60 @ 0x180012F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180012F60(__int64 a1, int *a2, int *a3)
{
  int v6; // xmm2_4
  int v7; // xmm1_4
  int v8; // xmm2_4
  int v9; // xmm1_4
  int v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+24h] [rbp-3Ch]
  int v13; // [rsp+28h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF

  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    sub_18001265C(*(_QWORD *)(a1 + 16), &v16);
    sub_18002A0C4(v16 + 16, v18);
    if ( (unsigned int)(*(_DWORD *)(a1 + 48) - 2) <= 1 )
    {
      v6 = a2[2];
      v7 = a2[1];
      v11 = *a2;
      v12 = v7;
      v13 = v6;
      sub_180012ED8(*(_DWORD **)(a1 + 16), &v11);
    }
    if ( ((*(_DWORD *)(a1 + 48) - 1) & 0xFFFFFFFD) == 0 )
    {
      v8 = a3[2];
      v9 = a3[1];
      v14 = 0x3F80000000000000LL;
      v15 = 0;
      v11 = *a3;
      v12 = v9;
      v13 = v8;
      sub_18003C998(*(_QWORD *)(a1 + 16), &v11, &v14);
    }
    sub_180010F54((__int64)v18);
    if ( v17 )
      sub_180010530(v17);
  }
  return 0LL;
}
