/*
 * XREFs of sub_180060F7C @ 0x180060F7C
 * Callers:
 *     sub_1800445E8 @ 0x1800445E8 (sub_1800445E8.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180029E78 @ 0x180029E78 (sub_180029E78.c)
 *     sub_1800615A8 @ 0x1800615A8 (sub_1800615A8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180060F7C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180029E78((__int64)v6, a1 + 472);
  sub_1800615A8(a1 + 480, a2);
  result = sub_180010F54((__int64)v6);
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
    return sub_180010574(v5);
  return result;
}
