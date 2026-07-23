/*
 * XREFs of sub_1406015A4 @ 0x1406015A4
 * Callers:
 *     sub_1406015D4 @ 0x1406015D4 (sub_1406015D4.c)
 *     sub_140601734 @ 0x140601734 (sub_140601734.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402169E0 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL sub_1406015A4()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&dword_140C1A938);
  if ( result )
    qword_140C1A930 = (__int64)KeGetCurrentThread();
  return result;
}
