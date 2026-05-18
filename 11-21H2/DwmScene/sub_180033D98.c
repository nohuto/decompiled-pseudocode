/*
 * XREFs of sub_180033D98 @ 0x180033D98
 * Callers:
 *     sub_18003AFE8 @ 0x18003AFE8 (sub_18003AFE8.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_180032A98 @ 0x180032A98 (sub_180032A98.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180033D98(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h]

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)&v12 = v5;
  DWORD2(v12) = 0;
  v6 = v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      *(_QWORD *)&v12 = v5;
      if ( *(_QWORD *)(v5 + 32) >= v7 )
      {
        DWORD2(v12) = 1;
        v6 = v5;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        DWORD2(v12) = 0;
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a2 < *(_QWORD *)(v6 + 32) )
  {
    if ( a1[1] == 0x2AAAAAAAAAAAAAALL )
      sub_18001F56C();
    v13 = v4;
    *(_QWORD *)&v11 = a1;
    v8 = sub_180011088(0x60uLL);
    *((_QWORD *)&v11 + 1) = v8;
    *(_QWORD *)(v8 + 32) = *a2;
    *(_OWORD *)(v8 + 40) = 0LL;
    *(_OWORD *)(v8 + 56) = 0LL;
    *(_OWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 88) = 0LL;
    v14 = v8 + 40;
    *(_DWORD *)(v8 + 40) = -8388609;
    *(_DWORD *)(v8 + 44) = 2139095039;
    *(_DWORD *)(v8 + 48) = 0;
    *(_QWORD *)(v8 + 56) = 0LL;
    sub_18001FB6C((__int64 *)(v8 + 64), &word_1801289A4, v9);
    sub_18001DE7C((__int64 *)v8, &v13);
    sub_18001DE7C((__int64 *)(v8 + 8), &v13);
    sub_18001DE7C((__int64 *)(v8 + 16), &v13);
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180032A98((__int64)&v11);
    v11 = v12;
    v6 = sub_18001F31C(a1, (__int64)&v11, v8);
  }
  return v6 + 40;
}
