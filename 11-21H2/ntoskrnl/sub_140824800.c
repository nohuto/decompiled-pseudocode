/*
 * XREFs of sub_140824800 @ 0x140824800
 * Callers:
 *     sub_1408247DC @ 0x1408247DC (sub_1408247DC.c)
 * Callees:
 *     <none>
 */

bool sub_140824800()
{
  return qword_140C4E3E8 && (*(_DWORD *)(qword_140C4E3E8 + 224) & 0x40000) != 0;
}
