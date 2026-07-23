/*
 * XREFs of ProviderHandleRemove @ 0x1800305B0
 * Callers:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx

  RtlAcquireSRWLockExclusive(&stru_180187FD8);
  if ( (a2 & 1) == 0
    || ((a2 >> 1) & 7) >= (unsigned __int8)byte_180187FD4
    || (v3 = (a2 >> 1) & 7, a2 >> 4 >= dword_1801490D0[v3])
    || (v4 = qword_180187F90[v3], v5 = (unsigned __int64)a2 >> 4, (*(_BYTE *)(v4 + 8 * v5) & 1) != 0) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v5), (unsigned int)dword_180187FD0);
    dword_180187FD0 = a2;
  }
  RtlReleaseSRWLockExclusive(&stru_180187FD8);
  return v6;
}
