/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1800FB130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  byte_1803E5BF9 = 1;
  dword_1803E9F90 = CurrentThreadId;
  v3 = *a1;
  dword_1803E9F90 = 0;
  xmmword_1803E5C00 = v3;
  ReleaseSRWLockExclusive(&SRWLock);
}
