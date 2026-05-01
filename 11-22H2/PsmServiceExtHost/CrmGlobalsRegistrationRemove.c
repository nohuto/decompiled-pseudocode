/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x1800121FC
 * Callers:
 *     CrmRegistrationCleanup @ 0x180012170 (CrmRegistrationCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  RtlAcquireSRWLockExclusive(&unk_1800DC1B0);
  dword_1800DC1B8 = GetCurrentThreadId();
  RtlRbRemoveNode(&xmmword_1800DC1C0, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800DC1B8 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800DC1B0);
}
