/*
 * XREFs of sub_14057A5A8 @ 0x14057A5A8
 * Callers:
 *     sub_1402595B0 @ 0x1402595B0 (sub_1402595B0.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_140579CD4 @ 0x140579CD4 (sub_140579CD4.c)
 *     sub_140579E04 @ 0x140579E04 (sub_140579E04.c)
 *     sub_14057A0A0 @ 0x14057A0A0 (sub_14057A0A0.c)
 *     sub_14057A1B0 @ 0x14057A1B0 (sub_14057A1B0.c)
 *     sub_14057A428 @ 0x14057A428 (sub_14057A428.c)
 * Callees:
 *     sub_1405D0C70 @ 0x1405D0C70 (sub_1405D0C70.c)
 */

__int64 __fastcall sub_14057A5A8(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = dword_140C2B994;
  dword_140C2B994 = a1;
  sub_1405D0C70(v1, a1);
  return v1;
}
