/*
 * XREFs of sub_1405B239C @ 0x1405B239C
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_1402DB07C @ 0x1402DB07C (sub_1402DB07C.c)
 *     sub_1406F3800 @ 0x1406F3800 (sub_1406F3800.c)
 */

_BOOL8 __fastcall sub_1405B239C(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // edi

  v4 = a2;
  return (a3 & 1) != 0
      || (a3 & 0xA) != 0 && (unsigned int)sub_1406F3800(a1, a2, 1LL)
      || (a3 & 0x10) != 0 && sub_1402DB07C(a1, v4);
}
