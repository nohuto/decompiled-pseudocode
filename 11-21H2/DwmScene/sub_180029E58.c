/*
 * XREFs of sub_180029E58 @ 0x180029E58
 * Callers:
 *     sub_18002A08C @ 0x18002A08C (sub_18002A08C.c)
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_18005C490 @ 0x18005C490 (sub_18005C490.c)
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     sub_18007AC70 @ 0x18007AC70 (sub_18007AC70.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_180096500 @ 0x180096500 (sub_180096500.c)
 *     sub_180096CD8 @ 0x180096CD8 (sub_180096CD8.c)
 *     sub_180099870 @ 0x180099870 (sub_180099870.c)
 *     sub_180099D5C @ 0x180099D5C (sub_180099D5C.c)
 *     sub_18009AE94 @ 0x18009AE94 (sub_18009AE94.c)
 *     sub_1800E70E0 @ 0x1800E70E0 (sub_1800E70E0.c)
 *     sub_1800E8B70 @ 0x1800E8B70 (sub_1800E8B70.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029E58(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)&v13 = v5;
  DWORD2(v13) = 0;
  v6 = v4;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    *(_QWORD *)&v13 = v5;
    if ( *(_DWORD *)(v5 + 32) >= a2 )
    {
      DWORD2(v13) = 1;
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      DWORD2(v13) = 0;
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  if ( *(_BYTE *)(v6 + 25) || a2 < *(_DWORD *)(v6 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001F56C();
    v14 = v4;
    v7 = sub_180011088(0x38uLL);
    *(_DWORD *)(v7 + 32) = a2;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 48) = 0LL;
    sub_18001DE7C((__int64 *)v7, &v14);
    sub_18001DE7C((__int64 *)(v8 + 8), &v14);
    sub_18001DE7C((__int64 *)(v9 + 16), &v14);
    *(_WORD *)(v10 + 24) = 0;
    v12 = v13;
    v6 = sub_18001F31C(a1, (__int64)&v12, v10);
  }
  return v6 + 40;
}
