/*
 * XREFs of sub_1800B2D54 @ 0x1800B2D54
 * Callers:
 *     sub_1800B2E50 @ 0x1800B2E50 (sub_1800B2E50.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B33A4 @ 0x1800B33A4 (sub_1800B33A4.c)
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800B2D54(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char v6; // di
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_18002C84C((__int64)a1);
  sub_1800B33A4(a1, v11, a3);
  v6 = 0;
  if ( LOBYTE(v11[0]) || (v7 = a1[5]) == 0 )
  {
    j_LanguageEnumProc((__int64)a1);
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1[2] + 8 * ((a1[4] >> 1) & (a1[3] - 1LL))) + 8 * (a1[4] & 1LL));
    a1[5] = v7 - 1;
    if ( v7 == 1 )
      a1[4] = 0LL;
    else
      ++a1[4];
    a1[v8 + 18] = a3;
    v9 = a1[2 * v8 + 8];
    v11[0] = *a2;
    v11[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_1800B4E58(v9, a3, v11);
    j_LanguageEnumProc((__int64)a1);
    v6 = 1;
  }
  sub_180010910((__int64)a2);
  return v6;
}
