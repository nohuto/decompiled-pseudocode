/*
 * XREFs of sub_18004B4F0 @ 0x18004B4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18004AC38 @ 0x18004AC38 (sub_18004AC38.c)
 *     sub_18004B580 @ 0x18004B580 (sub_18004B580.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18004B4F0(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF

  sub_18004AC38(v11, a4);
  v8 = sub_180011DA0(v12, v11);
  sub_18004B580(a1, v8, a3);
  *a2 = v11[0];
  a2[1] = v11[1];
  v9 = a4[1];
  if ( v9 )
    sub_180010530(v9);
  return a2;
}
