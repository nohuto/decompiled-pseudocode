/*
 * XREFs of sub_18002B4A0 @ 0x18002B4A0
 * Callers:
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002B4A0(__int64 *a1, unsigned int a2)
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
    if ( *(_DWORD *)(v5 + 28) >= a2 )
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
  if ( *(_BYTE *)(v6 + 25) || a2 < *(_DWORD *)(v6 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001F56C();
    v14 = v4;
    v7 = sub_180011088(0x28uLL);
    *(_DWORD *)(v7 + 28) = a2;
    *(_BYTE *)(v7 + 32) = 0;
    sub_18001DE7C((__int64 *)v7, &v14);
    sub_18001DE7C((__int64 *)(v8 + 8), &v14);
    sub_18001DE7C((__int64 *)(v9 + 16), &v14);
    *(_WORD *)(v10 + 24) = 0;
    v12 = v13;
    v6 = sub_18001F31C(a1, (__int64)&v12, v10);
  }
  return v6 + 32;
}
