/*
 * XREFs of sub_180038040 @ 0x180038040
 * Callers:
 *     sub_18002E4C4 @ 0x18002E4C4 (sub_18002E4C4.c)
 *     sub_18007BE40 @ 0x18007BE40 (sub_18007BE40.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_180038040(__int64 a1)
{
  __int64 result; // rax

  result = 0x2AAAAAAAAAAAAAALL;
  if ( *(_QWORD *)(a1 + 8) == 0x2AAAAAAAAAAAAAALL )
    sub_18001DDFC();
  return result;
}
