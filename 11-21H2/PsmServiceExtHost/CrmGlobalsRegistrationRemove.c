/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x18003D5CC
 * Callers:
 *     CrmRegistrationCleanup @ 0x18003D540 (CrmRegistrationCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  RtlAcquireSRWLockExclusive(&unk_1800DD180);
  dword_1800DD188 = GetCurrentThreadId();
  RtlRbRemoveNode(&xmmword_1800DD190, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800DD188 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800DD180);
}
