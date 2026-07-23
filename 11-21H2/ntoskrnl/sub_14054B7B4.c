/*
 * XREFs of sub_14054B7B4 @ 0x14054B7B4
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 */

NTSTATUS sub_14054B7B4()
{
  EtwRegister(&stru_14003AE98, 0LL, 0LL, &qword_140C4E8C8);
  return EtwSetInformation(qword_140C4E8C8, (EVENT_INFO_CLASS)2, &word_1400128C0, 0x16u);
}
