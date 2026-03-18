/*
 * XREFs of HvlpEndPageListIteration @ 0x14054D1E8
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14054A25C (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x14054A4B0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14054AE18 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x14054D214 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14054D4B8 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

char *__fastcall HvlpEndPageListIteration(int a1)
{
  char *result; // rax

  result = (char *)&HvlpIteratorCrashdump;
  if ( !a1 )
    result = (char *)&HvlpIteratorHibernate;
  *((_QWORD *)result + 1) = 0LL;
  *(_WORD *)result = 0;
  *(_WORD *)(result + 3) = 0;
  result[2] = 0;
  return result;
}
