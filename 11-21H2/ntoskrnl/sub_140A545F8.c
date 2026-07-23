/*
 * XREFs of sub_140A545F8 @ 0x140A545F8
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A545F8(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ecx

  v3 = ((a1 << 6) + 56511) & 0xFFFFF000;
  *a3 = v3 + 4096;
  *a2 = v3 + 16304;
  return v3 + 28672;
}
