/*
 * XREFs of sub_1800171E4 @ 0x1800171E4
 * Callers:
 *     sub_18001636C @ 0x18001636C (sub_18001636C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001717C @ 0x18001717C (sub_18001717C.c)
 */

_QWORD *__fastcall sub_1800171E4(_QWORD *a1, _QWORD *a2, _QWORD *a3)
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
    sub_18001717C(&v10, v6);
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
