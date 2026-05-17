/*
 * XREFs of ProviderHandleRemove @ 0x1800A3AC8
 * Callers:
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx

  v4 = a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18017AC98, a2, a3, a4);
  if ( (v4 & 1) == 0
    || ((v4 >> 1) & 7) >= (unsigned __int8)byte_18017AC94
    || (v5 = (v4 >> 1) & 7, v4 >> 4 >= dword_18013CD00[v5])
    || (v6 = qword_18017AC50[v5], v7 = (unsigned __int64)v4 >> 4, (*(_BYTE *)(v6 + 8 * v7) & 1) != 0) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = _InterlockedExchange64((volatile __int64 *)(v6 + 8 * v7), (unsigned int)dword_18017AC90);
    dword_18017AC90 = v4;
  }
  RtlReleaseSRWLockExclusive(&qword_18017AC98);
  return v8;
}
