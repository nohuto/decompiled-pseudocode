/*
 * XREFs of HvlpEndPageListIteration @ 0x14054A12C
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140547114 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140547320 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140547CB8 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x14054A158 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14054A40C (HvlpStartSecurePageListIteration.c)
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
