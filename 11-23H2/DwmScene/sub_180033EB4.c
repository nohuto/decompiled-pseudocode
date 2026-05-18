/*
 * XREFs of sub_180033EB4 @ 0x180033EB4
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180064E40 @ 0x180064E40 (sub_180064E40.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_180069750 @ 0x180069750 (sub_180069750.c)
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 *     sub_18006B29C @ 0x18006B29C (sub_18006B29C.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18002EB5C @ 0x18002EB5C (sub_18002EB5C.c)
 *     sub_180034118 @ 0x180034118 (sub_180034118.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180033EB4(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 *v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-18h]

  if ( !*a4 )
  {
    v7 = (__int64 *)sub_180034118(a1, &v13);
    sub_180011020(a4, v7);
    if ( v14 )
      sub_180010530((__int64)v14);
  }
  v8 = (_QWORD *)(a1 + 728);
  sub_180015604(&v13, a4);
  v9 = sub_18002EB5C(a1 + 728, (__int64)&v13);
  if ( v14 )
    sub_180010574(v14);
  if ( v9 == *v8 || (v10 = *(_QWORD **)(v9 + 48), !((__int64)(*(_QWORD *)(v9 + 56) - (_QWORD)v10) >> 4)) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001246C(a2, v10);
  }
  v11 = a4[1];
  if ( v11 )
    sub_180010530(v11);
  return a2;
}
