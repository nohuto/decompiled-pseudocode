/*
 * XREFs of sub_1800271C8 @ 0x1800271C8
 * Callers:
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800271C8(_BYTE *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A0C4(a1 + 24, v3);
  if ( !a1[3977] )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3977] = 1;
  }
  return sub_180010F54((__int64)v3);
}
