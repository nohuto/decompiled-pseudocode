/*
 * XREFs of sub_180034A40 @ 0x180034A40
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180034A40(_QWORD *a1, _QWORD *a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A070((__int64)(a1 + 1), (__int64)v5);
  a1[114] = *a2;
  a1[115] = a2[1];
  (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 88LL))(a1, a2);
  return sub_180010F54((__int64)v5);
}
