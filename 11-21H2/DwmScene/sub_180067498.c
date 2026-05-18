/*
 * XREFs of sub_180067498 @ 0x180067498
 * Callers:
 *     sub_1800680DC @ 0x1800680DC (sub_1800680DC.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180066E78 @ 0x180066E78 (sub_180066E78.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180067498(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 **v8; // r8
  __int64 *i; // rcx
  __int64 v10; // rax
  __int64 j; // rcx
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  v13 = (__int64 *)sub_180011088(0x40uLL);
  sub_18001DE8C(v13, (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v13);
  *(_WORD *)(v6 + 24) = 257;
  *a1 = v6;
  *(_QWORD *)(*a1 + 8) = sub_180066E78(a1, *(_QWORD *)(*a2 + 8LL), v6, (char)v13);
  a1[1] = a2[1];
  v7 = (_QWORD *)*a1;
  v8 = *(__int64 ***)(*a1 + 8);
  if ( *((_BYTE *)v8 + 25) )
  {
    *v7 = v7;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    for ( i = *v8; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v8 = (__int64 **)i;
    *v7 = v8;
    v10 = *(_QWORD *)(*a1 + 8);
    for ( j = *(_QWORD *)(v10 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      v10 = j;
    *(_QWORD *)(*a1 + 16) = v10;
  }
  return a1;
}
