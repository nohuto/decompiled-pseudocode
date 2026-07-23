/*
 * XREFs of sub_14026B32C @ 0x14026B32C
 * Callers:
 *     sub_14024280C @ 0x14024280C (sub_14024280C.c)
 *     sub_14024D0D4 @ 0x14024D0D4 (sub_14024D0D4.c)
 *     sub_14026A818 @ 0x14026A818 (sub_14026A818.c)
 *     sub_1403C736C @ 0x1403C736C (sub_1403C736C.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 *     sub_140B06A84 @ 0x140B06A84 (sub_140B06A84.c)
 *     sub_140B092AC @ 0x140B092AC (sub_140B092AC.c)
 * Callees:
 *     sub_14026B354 @ 0x14026B354 (sub_14026B354.c)
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 */

__int64 __fastcall sub_14026B32C(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d

  v3 = sub_14026CF08((unsigned int)a2, a2, a3, a1);
  return sub_14026B354(v3, v4);
}
