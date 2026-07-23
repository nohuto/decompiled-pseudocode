/*
 * XREFs of HvlpEndPageListIteration @ 0x14054A7EC
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405477D4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1405479E0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140548378 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x14054A818 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14054AACC (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall HvlpEndPageListIteration(int a1)
{
  __int16 *result; // rax

  result = &HvlpIteratorCrashdump;
  if ( !a1 )
    result = &HvlpIteratorHibernate;
  *((_QWORD *)result + 1) = 0LL;
  *result = 0;
  *(__int16 *)((char *)result + 3) = 0;
  *((_BYTE *)result + 2) = 0;
  return result;
}
