/*
 * XREFs of sub_1800122F0 @ 0x1800122F0
 * Callers:
 *     sub_180011ED4 @ 0x180011ED4 (sub_180011ED4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012288 @ 0x180012288 (sub_180012288.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

_QWORD *__fastcall sub_1800122F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  _QWORD *v6; // rbp
  bool v7; // r14
  __int64 v8; // rcx
  _QWORD *result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  for ( i = a2; i != a3; i += 16LL )
  {
    v6 = (_QWORD *)sub_18001246C(v12, i);
    sub_180012288(&v10, v6);
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
