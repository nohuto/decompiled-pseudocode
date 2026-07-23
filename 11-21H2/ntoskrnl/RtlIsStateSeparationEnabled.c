/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140699680
 * Callers:
 *     sub_1403A6B24 @ 0x1403A6B24 (sub_1403A6B24.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B034C0 @ 0x140B034C0 (sub_140B034C0.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 *     sub_140B1C49C @ 0x140B1C49C (sub_140B1C49C.c)
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return sub_1402201F8();
}
