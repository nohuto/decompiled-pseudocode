/*
 * XREFs of sub_180054AD8 @ 0x180054AD8
 * Callers:
 *     sub_180057794 @ 0x180057794 (sub_180057794.c)
 *     sub_1800680DC @ 0x1800680DC (sub_1800680DC.c)
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180054AD8(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  char v8; // di
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  *(_QWORD *)&v13 = v7;
  v8 = 0;
  DWORD2(v13) = 0;
  v9 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    *(_QWORD *)&v13 = v7;
    if ( (unsigned __int8)sub_18001DE04((_QWORD *)(v7 + 32), a3) )
    {
      DWORD2(v13) = 0;
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      DWORD2(v13) = 1;
      v9 = v7;
      v7 = *(_QWORD *)v7;
    }
  }
  if ( *(_BYTE *)(v9 + 25) || (unsigned __int8)sub_18001DE04(a3, (_QWORD *)(v9 + 32)) )
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      sub_18001F56C();
    v14 = v6;
    v10 = sub_180011088(0x40uLL);
    sub_18001875C((__int64 *)(v10 + 32), (__int64)a3);
    sub_18001DE7C((__int64 *)v10, &v14);
    sub_18001DE7C((__int64 *)(v10 + 8), &v14);
    sub_18001DE7C((__int64 *)(v10 + 16), &v14);
    *(_WORD *)(v10 + 24) = 0;
    v12 = v13;
    v9 = sub_18001F31C(a1, (__int64)&v12, v10);
    v8 = 1;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = v8;
  return a2;
}
