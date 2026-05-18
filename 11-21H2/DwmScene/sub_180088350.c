/*
 * XREFs of sub_180088350 @ 0x180088350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180087D44 @ 0x180087D44 (sub_180087D44.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180088350(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 **v8; // r8
  __int64 *i; // rcx
  __int64 v10; // rax
  __int64 j; // rcx
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = (__int64 *)sub_180011088(0x60uLL);
  sub_18001DE8C(v13, (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v13);
  *(_WORD *)(v6 + 24) = 257;
  *a2 = v6;
  *(_QWORD *)(*a2 + 8) = sub_180087D44(a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), v6, (char)v13);
  a2[1] = *(_QWORD *)(a1 + 24);
  v7 = (_QWORD *)*a2;
  v8 = *(__int64 ***)(*a2 + 8);
  if ( *((_BYTE *)v8 + 25) )
  {
    *v7 = v7;
    *(_QWORD *)(*a2 + 16) = *a2;
  }
  else
  {
    for ( i = *v8; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v8 = (__int64 **)i;
    *v7 = v8;
    v10 = *(_QWORD *)(*a2 + 8);
    for ( j = *(_QWORD *)(v10 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      v10 = j;
    *(_QWORD *)(*a2 + 16) = v10;
  }
  return a2;
}
