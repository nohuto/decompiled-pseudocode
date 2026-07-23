/*
 * XREFs of sub_1405055B8 @ 0x1405055B8
 * Callers:
 *     sub_140512C04 @ 0x140512C04 (sub_140512C04.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140503AD8 @ 0x140503AD8 (sub_140503AD8.c)
 *     sub_140518BB8 @ 0x140518BB8 (sub_140518BB8.c)
 */

__int64 __fastcall sub_1405055B8(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // r8d
  unsigned int *v3; // r9
  __int64 v4; // r10

  if ( (unsigned int)sub_14023A8D0(a1) == 2 )
    return sub_140518BB8(v1, v4);
  else
    return sub_140503AD8(v1, v4, v2, v3);
}
