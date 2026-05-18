/*
 * XREFs of sub_1800636BC @ 0x1800636BC
 * Callers:
 *     sub_18006276C @ 0x18006276C (sub_18006276C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180063228 @ 0x180063228 (sub_180063228.c)
 */

_QWORD *__fastcall sub_1800636BC(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // rdi
  _QWORD *v6; // rbp
  bool v7; // r14
  __int64 v8; // rcx
  _QWORD *result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  for ( i = a2; i != a3; i += 2 )
  {
    v6 = sub_18001246C(v12, i);
    sub_180063228(&v10, v6);
    v7 = sub_180011DE0(&v10);
    if ( v11 )
      sub_180010530(v11);
    v8 = v6[1];
    if ( v8 )
      sub_180010530(v8);
    if ( v7 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
