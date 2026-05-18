/*
 * XREFs of sub_180072560 @ 0x180072560
 * Callers:
 *     sub_18007264C @ 0x18007264C (sub_18007264C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180071170 @ 0x180071170 (sub_180071170.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180072560(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rbp
  _QWORD *i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  _QWORD v15[3]; // [rsp+48h] [rbp-30h] BYREF

  sub_180071170(v15, a1 + 40);
  sub_18001246C(a2, a5);
  v8 = (_QWORD *)v15[1];
  for ( i = (_QWORD *)v15[0]; i != v8; i += 2 )
  {
    v10 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64, _QWORD *))(*(_QWORD *)*i + 16LL))(
                       *i,
                       v13,
                       a3,
                       a4,
                       a2);
    sub_180011020(a2, v10);
    if ( v14 )
      sub_180010530(v14);
  }
  sub_180013300((__int64)v15);
  v11 = a5[1];
  if ( v11 )
    sub_180010530(v11);
  return a2;
}
