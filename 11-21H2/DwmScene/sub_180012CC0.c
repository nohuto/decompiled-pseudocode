/*
 * XREFs of sub_180012CC0 @ 0x180012CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180012CC0(__int64 a1, _OWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  char v17; // [rsp+38h] [rbp-48h]
  _OWORD v18[4]; // [rsp+40h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v15 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  sub_18002C460(v15 + 16, &v16);
  sub_180010910((__int64)&v15);
  sub_1800414A0(*(_QWORD *)(a1 + 16), v18);
  v11 = v18[1];
  v12 = v18[2];
  v13 = v18[3];
  *a2 = v18[0];
  a2[1] = v11;
  a2[2] = v12;
  a2[3] = v13;
  if ( v17 )
    j_LanguageEnumProc(v16, v8, v9, v10);
  return 0LL;
}
