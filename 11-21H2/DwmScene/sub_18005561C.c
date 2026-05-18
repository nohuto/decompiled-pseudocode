/*
 * XREFs of sub_18005561C @ 0x18005561C
 * Callers:
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180055120 @ 0x180055120 (sub_180055120.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005561C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  *(_QWORD *)&v10 = v5;
  DWORD2(v10) = 0;
  v6 = v4;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    *(_QWORD *)&v10 = v5;
    if ( (unsigned __int8)sub_18001DE04((_QWORD *)(v5 + 32), a2) )
    {
      DWORD2(v10) = 0;
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      DWORD2(v10) = 1;
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  if ( *(_BYTE *)(v6 + 25) || (unsigned __int8)sub_18001DE04(a2, (_QWORD *)(v6 + 32)) )
  {
    if ( a1[1] == 0x333333333333333LL )
      sub_18001F56C();
    v11 = v4;
    *(_QWORD *)&v9 = a1;
    v7 = sub_180011088(0x50uLL);
    sub_18001875C((__int64 *)(v7 + 32), (__int64)a2);
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_QWORD *)(v7 + 72) = 0LL;
    sub_18001DE7C((__int64 *)v7, &v11);
    sub_18001DE7C((__int64 *)(v7 + 8), &v11);
    sub_18001DE7C((__int64 *)(v7 + 16), &v11);
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    sub_180055120((__int64)&v9);
    v9 = v10;
    v6 = sub_18001F31C(a1, (__int64)&v9, v7);
  }
  return v6 + 64;
}
