/*
 * XREFs of sub_1800D048C @ 0x1800D048C
 * Callers:
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800C91A0 @ 0x1800C91A0 (sub_1800C91A0.c)
 *     sub_1800D0260 @ 0x1800D0260 (sub_1800D0260.c)
 *     sub_1800D7D00 @ 0x1800D7D00 (sub_1800D7D00.c)
 *     sub_1800D7EA0 @ 0x1800D7EA0 (sub_1800D7EA0.c)
 *     sub_1800D7F90 @ 0x1800D7F90 (sub_1800D7F90.c)
 *     sub_1800D81B0 @ 0x1800D81B0 (sub_1800D81B0.c)
 *     sub_1800D9000 @ 0x1800D9000 (sub_1800D9000.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D048C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_180011C50(a1 + 72, &v6);
  sub_18002A404(v6 + 24);
  if ( v7 )
    sub_180010530(v7);
  v4 = *(_QWORD *)(a1 + 144);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
