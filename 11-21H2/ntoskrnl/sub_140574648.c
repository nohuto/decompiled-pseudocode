/*
 * XREFs of sub_140574648 @ 0x140574648
 * Callers:
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_140573DBC @ 0x140573DBC (sub_140573DBC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140574648(_DWORD *a1)
{
  return (dword_140D068EC & 0x4000) != 0 && !a1[1] && a1[2] == 1 && (unsigned int)(a1[3] - 1) <= 1;
}
