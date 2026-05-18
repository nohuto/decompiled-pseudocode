/*
 * XREFs of sub_1800D97D0 @ 0x1800D97D0
 * Callers:
 *     sub_1800D9000 @ 0x1800D9000 (sub_1800D9000.c)
 *     sub_1800D9280 @ 0x1800D9280 (sub_1800D9280.c)
 *     sub_1800D94E0 @ 0x1800D94E0 (sub_1800D94E0.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800D97D0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v8);
  v4 = (__int64 *)sub_180011C50(v3, &v6);
  sub_18001FC84(a2, v4);
  if ( v7 )
    sub_180010530(v7);
  if ( v9 )
    sub_180010574(v9);
  return a2;
}
