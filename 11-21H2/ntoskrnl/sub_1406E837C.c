/*
 * XREFs of sub_1406E837C @ 0x1406E837C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_1406E837C()
{
  return (((unsigned __int64)xmmword_140D06DE8 >> 36) & 0xF) == 6;
}
