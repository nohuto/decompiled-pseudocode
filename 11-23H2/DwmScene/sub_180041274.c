/*
 * XREFs of sub_180041274 @ 0x180041274
 * Callers:
 *     sub_180066A60 @ 0x180066A60 (sub_180066A60.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004109C @ 0x18004109C (sub_18004109C.c)
 *     sub_180041190 @ 0x180041190 (sub_180041190.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180041274(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v5 = sub_18001246C(&v10, a3);
  v7 = sub_180041190(v6, &v11, v5);
  sub_18004109C(*v7, a2);
  if ( v12 )
    sub_180010530(v12);
  v8 = a3[1];
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
