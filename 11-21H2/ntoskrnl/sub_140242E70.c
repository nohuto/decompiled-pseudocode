/*
 * XREFs of sub_140242E70 @ 0x140242E70
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 * Callees:
 *     sub_140291A50 @ 0x140291A50 (sub_140291A50.c)
 */

char __fastcall sub_140242E70(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !(unsigned __int8)sub_140291A50(a2, a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
