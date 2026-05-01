/*
 * XREFs of CrmGlobalsRegistrationsDeleteRoutine @ 0x18006D9BC
 * Callers:
 *     CrmGlobalsRegistrationRemoveAll @ 0x18006D89C (CrmGlobalsRegistrationRemoveAll.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x18003D540 (CrmRegistrationCleanup.c)
 */

BOOLEAN __fastcall CrmGlobalsRegistrationsDeleteRoutine(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  CrmRegistrationCleanup((_QWORD *)(a1 - 32), 0);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
