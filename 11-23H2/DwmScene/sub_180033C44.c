/*
 * XREFs of sub_180033C44 @ 0x180033C44
 * Callers:
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180033C44(__int64 a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A070(a1 + 8, (__int64)v3);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 8LL))(a1, v3);
  return sub_180010F54((__int64)v3);
}
