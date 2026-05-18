/*
 * XREFs of sub_180071CAC @ 0x180071CAC
 * Callers:
 *     sub_180071014 @ 0x180071014 (sub_180071014.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180071C44 @ 0x180071C44 (sub_180071C44.c)
 */

_QWORD *__fastcall sub_180071CAC(_QWORD *a1, _QWORD *a2, _QWORD *a3)
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
    sub_180071C44(&v10, v6);
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
