/*
 * XREFs of sub_180066CA0 @ 0x180066CA0
 * Callers:
 *     sub_18006B8F4 @ 0x18006B8F4 (sub_18006B8F4.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18003BFF8 @ 0x18003BFF8 (sub_18003BFF8.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180066CA0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v4; // r8
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  _QWORD v12[5]; // [rsp+48h] [rbp-28h] BYREF

  if ( !sub_180011DE0(a3) )
  {
LABEL_12:
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v5 = *v4;
  v6 = sub_180012440(v12, (__int64)&unk_1801D4028);
  sub_1800410C0(v5, &v10, (__int64)v6);
  if ( !sub_180011DE0(&v10) )
  {
LABEL_10:
    if ( v11 )
      sub_180010530(v11);
    goto LABEL_12;
  }
  sub_180041410(v10, &v8);
  if ( !sub_180011DE0(&v8) )
  {
    if ( v9 )
      sub_180010530(v9);
    goto LABEL_10;
  }
  sub_18003BFF8(v8, v12);
  *a2 = v12[0];
  a2[1] = v12[1];
  if ( v9 )
    sub_180010530(v9);
  if ( v11 )
    sub_180010530(v11);
  return a2;
}
