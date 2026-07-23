/*
 * XREFs of sub_140B2DD5C @ 0x140B2DD5C
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_140B2DD94 @ 0x140B2DD94 (sub_140B2DD94.c)
 */

NTSTATUS sub_140B2DD5C()
{
  NTSTATUS result; // eax

  sub_140B2DD94();
  result = EtwRegister(&stru_140013390, 0LL, 0LL, &qword_140D00C18);
  if ( result < 0 )
    qword_140D00C18 = 0LL;
  return result;
}
