/*
 * XREFs of sub_180035B28 @ 0x180035B28
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002F280 @ 0x18002F280 (sub_18002F280.c)
 *     sub_180038698 @ 0x180038698 (sub_180038698.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180035B28(__int64 a1)
{
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF

  sub_18002A0C4(a1 + 808, (__int64)v3);
  sub_18002F280(a1 + 888, *(char **)(a1 + 896), *(_QWORD *)(a1 + 864), *(_QWORD *)(a1 + 872));
  sub_180038698(a1 + 864);
  return sub_180010F54((__int64)v3);
}
