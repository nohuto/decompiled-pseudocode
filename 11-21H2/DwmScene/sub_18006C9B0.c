/*
 * XREFs of sub_18006C9B0 @ 0x18006C9B0
 * Callers:
 *     sub_18006DFB0 @ 0x18006DFB0 (sub_18006DFB0.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

__int64 __fastcall sub_18006C9B0(__int64 *a1, int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)&v14 = v5;
  DWORD2(v14) = 0;
  v6 = v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      *(_QWORD *)&v14 = v5;
      if ( *(_DWORD *)(v5 + 32) >= v7 )
      {
        DWORD2(v14) = 1;
        v6 = v5;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        DWORD2(v14) = 0;
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a2 < *(_DWORD *)(v6 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001F56C();
    v15 = v4;
    v13 = (unsigned __int64)a1;
    v8 = sub_180011088(0x38uLL);
    *(_DWORD *)(v8 + 32) = *a2;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    sub_18001DE7C((__int64 *)v8, &v15);
    sub_18001DE7C((__int64 *)(v9 + 8), &v15);
    sub_18001DE7C((__int64 *)(v10 + 16), &v15);
    *(_WORD *)(v11 + 24) = 0;
    v13 = v14;
    v6 = sub_18001F31C(a1, (__int64)&v13, v11);
  }
  return v6 + 40;
}
