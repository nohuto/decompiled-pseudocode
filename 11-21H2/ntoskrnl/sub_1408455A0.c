/*
 * XREFs of sub_1408455A0 @ 0x1408455A0
 * Callers:
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

NTSTATUS sub_1408455A0()
{
  return EtwRegister(&stru_1400128E8, 0LL, 0LL, &qword_140C1C820);
}
