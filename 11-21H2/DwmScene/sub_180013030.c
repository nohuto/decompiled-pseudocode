/*
 * XREFs of sub_180013030 @ 0x180013030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180042C3C @ 0x180042C3C (sub_180042C3C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180013030(__int64 a1, _OWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  char v20; // [rsp+38h] [rbp-48h]
  _OWORD v21[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
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
        v18 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  sub_18002C460(v18 + 16, &v19);
  sub_180010910((__int64)&v18);
  v8 = a2[1];
  v9 = a2[2];
  v10 = a2[3];
  v21[0] = *a2;
  v21[1] = v8;
  v21[2] = v9;
  v21[3] = v10;
  if ( (unsigned __int8)sub_180042C3C(*(_QWORD *)(a1 + 16), v21) )
  {
    if ( v20 )
      j_LanguageEnumProc(v19, v11, v12, v13);
    return 0LL;
  }
  else
  {
    sub_18000F364(
      retaddr,
      232LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrelightnode.cpp",
      2147942487LL);
    if ( v20 )
      j_LanguageEnumProc(v19, v14, v15, v16);
    return 2147942487LL;
  }
}
