/*
 * XREFs of sub_1800733F4 @ 0x1800733F4
 * Callers:
 *     sub_180059FD0 @ 0x180059FD0 (sub_180059FD0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_180073B4C @ 0x180073B4C (sub_180073B4C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180024944 @ 0x180024944 (sub_180024944.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_180073330 @ 0x180073330 (sub_180073330.c)
 *     sub_180073370 @ 0x180073370 (sub_180073370.c)
 */

_QWORD *__fastcall sub_1800733F4(__int64 a1, _QWORD *a2, int a3)
{
  __int64 **v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  float v13; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+10h] BYREF

  v14 = a2;
  v6 = (__int64 **)(a1 + 16 * (a3 + 11LL));
  if ( !*v6 )
  {
    v7 = sub_180026618(*(_QWORD *)(a1 + 32));
    v8 = sub_180024944(v7, &v11);
    sub_180011020(v6, v8);
    if ( v12 )
      sub_180010530(v12);
    v9 = (__int64 *)sub_180073330(a1, &v13, a3);
    sub_180073370((int *)&v14, *v9);
    sub_18006F6C0(*v6, (unsigned int)v14, HIDWORD(v14), 1u, 0, *(_QWORD *)(a1 + 32));
  }
  sub_18001246C(a2, v6);
  return a2;
}
