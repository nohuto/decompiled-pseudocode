/*
 * XREFs of sub_14030FBE0 @ 0x14030FBE0
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_140353858 @ 0x140353858 (sub_140353858.c)
 *     sub_140594ABC @ 0x140594ABC (sub_140594ABC.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405C5930 @ 0x1405C5930 (sub_1405C5930.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 *     sub_140980FA0 @ 0x140980FA0 (sub_140980FA0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14030FBE0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x200000) != 0 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000)
      || (v1 & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
