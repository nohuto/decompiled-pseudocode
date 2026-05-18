/*
 * XREFs of sub_180043CA4 @ 0x180043CA4
 * Callers:
 *     sub_180043BCC @ 0x180043BCC (sub_180043BCC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180043CA4(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
