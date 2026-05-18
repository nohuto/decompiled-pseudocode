/*
 * XREFs of sub_1800A2214 @ 0x1800A2214
 * Callers:
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_180039428 @ 0x180039428 (sub_180039428.c)
 *     sub_1800A112C @ 0x1800A112C (sub_1800A112C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800A2214(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = sub_180039428(*a2, &v8);
  sub_18003890C((__int64)v3, &v6);
  if ( v9 )
    sub_180010574(v9);
  if ( sub_180011DE0(&v6) )
  {
    v4 = sub_1800A112C(v6, &v10);
    sub_180032160(a1, v4);
    if ( v11 )
      sub_180010574(v11);
  }
  if ( v7 )
    sub_180010530(v7);
  return a1;
}
