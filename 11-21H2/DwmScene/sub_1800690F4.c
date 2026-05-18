/*
 * XREFs of sub_1800690F4 @ 0x1800690F4
 * Callers:
 *     sub_18006986C @ 0x18006986C (sub_18006986C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002C858 @ 0x18002C858 (sub_18002C858.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_180066F74 @ 0x180066F74 (sub_180066F74.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800690F4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 **v9; // r8
  __int64 *i; // rcx
  __int64 v11; // rax
  __int64 j; // rcx
  __int64 *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v4 = a1 + 472;
  sub_18002C858(a1 + 472);
  *a2 = 0LL;
  a2[1] = 0LL;
  v14 = (__int64 *)sub_180011088(0x30uLL);
  sub_18001DE8C(v14, (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v6 + 16), (__int64 *)&v14);
  *(_WORD *)(v7 + 24) = 257;
  *a2 = v7;
  *(_QWORD *)(*a2 + 8) = sub_180066F74(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 8LL), v7, (char)v14);
  a2[1] = *(_QWORD *)(a1 + 488);
  v8 = (_QWORD *)*a2;
  v9 = *(__int64 ***)(*a2 + 8);
  if ( *((_BYTE *)v9 + 25) )
  {
    *v8 = v8;
    *(_QWORD *)(*a2 + 16) = *a2;
  }
  else
  {
    for ( i = *v9; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v9 = (__int64 **)i;
    *v8 = v9;
    v11 = *(_QWORD *)(*a2 + 8);
    for ( j = *(_QWORD *)(v11 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      v11 = j;
    *(_QWORD *)(*a2 + 16) = v11;
  }
  sub_18002C8E4(v4);
  return a2;
}
