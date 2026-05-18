/*
 * XREFs of sub_180015C60 @ 0x180015C60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180042C3C @ 0x180042C3C (sub_180042C3C.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180015C60(__int64 a1, __int128 *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+20h] [rbp-89h] BYREF
  __int128 v21; // [rsp+30h] [rbp-79h] BYREF
  __int64 v22; // [rsp+40h] [rbp-69h] BYREF
  char v23; // [rsp+48h] [rbp-61h]
  _OWORD v24[4]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v25[4]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v26; // [rsp+B0h] [rbp+7h]
  __int128 v27; // [rsp+C0h] [rbp+17h]
  __int128 v28; // [rsp+D0h] [rbp+27h]
  __int128 v29; // [rsp+E0h] [rbp+37h]
  __int64 retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = *(_QWORD *)(a1 + 32);
  v20 = 0LL;
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
        v20 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  sub_18002C460(v20 + 16, &v22);
  sub_180010910((__int64)&v20);
  v26 = *a2;
  v27 = a2[1];
  v28 = a2[2];
  v29 = a2[3];
  v24[0] = v26;
  v24[1] = v27;
  v24[2] = v28;
  v24[3] = v29;
  if ( (unsigned __int8)sub_180042C3C(*(_QWORD *)(a1 + 32), v24) )
  {
    v12 = *(_QWORD *)(a1 + 32);
    v21 = 0LL;
    v13 = *(_QWORD *)(v12 + 80);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      while ( v14 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
        if ( v15 == v14 )
        {
          v21 = *(_OWORD *)(v12 + 72);
          break;
        }
      }
    }
    v16 = sub_1800129F4(v25, (__int64)&qword_1801F7FD8);
    sub_180046AE0(v21, v16);
    sub_180010910((__int64)&v21);
    if ( v23 )
      j_LanguageEnumProc(v22, v17, v18, v19);
    return 0LL;
  }
  else
  {
    sub_18000F364(
      retaddr,
      122LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      2147942487LL);
    if ( v23 )
      j_LanguageEnumProc(v22, v8, v9, v10);
    return 2147942487LL;
  }
}
