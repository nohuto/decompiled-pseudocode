/*
 * XREFs of sub_1800922E0 @ 0x1800922E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_180091A24 @ 0x180091A24 (sub_180091A24.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800922E0(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64, _QWORD *, __int64); // r9
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+38h] [rbp-30h] BYREF

  sub_180091A24(v12, a4);
  v8 = sub_180011DA0(v13, v12);
  v9(a1, v8, a3);
  *a2 = v12[0];
  a2[1] = v12[1];
  v10 = a4[1];
  if ( v10 )
    sub_180010530(v10);
  return a2;
}
