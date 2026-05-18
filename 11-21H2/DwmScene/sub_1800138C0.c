/*
 * XREFs of sub_1800138C0 @ 0x1800138C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800138C0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // xmm2_4
  int v15; // xmm1_4
  int v16; // xmm2_4
  int v17; // xmm1_4
  _DWORD v19[4]; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v20[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  int v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  char v25; // [rsp+68h] [rbp-8h]

  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v23 = 0LL;
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
        if ( v9 == v8 )
        {
          v23 = *(_OWORD *)(v6 + 72);
          break;
        }
      }
    }
    sub_18002C460(v23 + 16, &v24);
    v13 = *(_DWORD *)(a1 + 48);
    if ( v13 == 2 || v13 == 3 )
    {
      v14 = a2[2];
      v15 = a2[1];
      v19[0] = *a2;
      v19[1] = v15;
      v19[2] = v14;
      sub_18001380C(*(_QWORD *)(a1 + 16), v19);
      v13 = *(_DWORD *)(a1 + 48);
    }
    if ( ((v13 - 1) & 0xFFFFFFFD) == 0 )
    {
      v16 = a3[2];
      v17 = a3[1];
      v21 = 0x3F80000000000000LL;
      v22 = 0;
      v20[0] = *a3;
      v20[1] = v17;
      v20[2] = v16;
      sub_1800417D8(*(_QWORD *)(a1 + 16), v20, &v21);
    }
    if ( v25 )
      j_LanguageEnumProc(v24, v10, v11, v12);
    sub_180010910((__int64)&v23);
  }
  return 0LL;
}
