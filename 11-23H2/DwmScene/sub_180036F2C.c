/*
 * XREFs of sub_180036F2C @ 0x180036F2C
 * Callers:
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_180036AD4 @ 0x180036AD4 (sub_180036AD4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180036F2C(__int64 a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A070(a1 + 8, (__int64)v3);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_180036AD4((_QWORD *)a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  return sub_180010F54((__int64)v3);
}
