/*
 * XREFs of sub_14029E72C @ 0x14029E72C
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14029E72C(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&dword_140D010C0, 0x1Fu)) == 0;
}
