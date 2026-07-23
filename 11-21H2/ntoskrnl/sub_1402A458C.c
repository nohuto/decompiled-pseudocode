/*
 * XREFs of sub_1402A458C @ 0x1402A458C
 * Callers:
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A458C(_DWORD *a1, int a2)
{
  return (a2 & 0xFDFFFFFF) != (a2 & 0xFDFFFFFF & *a1) ? 0xC0000022 : 0;
}
