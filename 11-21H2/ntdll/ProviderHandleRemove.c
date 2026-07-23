/*
 * XREFs of ProviderHandleRemove @ 0x1800A3AC8
 * Callers:
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx

  RtlAcquireSRWLockExclusive(&stru_18017AC98);
  if ( (a2 & 1) == 0
    || ((a2 >> 1) & 7) >= (unsigned __int8)byte_18017AC94
    || (v3 = (a2 >> 1) & 7, a2 >> 4 >= dword_18013CD00[v3])
    || (v4 = qword_18017AC50[v3], v5 = (unsigned __int64)a2 >> 4, (*(_BYTE *)(v4 + 8 * v5) & 1) != 0) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v5), (unsigned int)dword_18017AC90);
    dword_18017AC90 = a2;
  }
  RtlReleaseSRWLockExclusive(&stru_18017AC98);
  return v6;
}
