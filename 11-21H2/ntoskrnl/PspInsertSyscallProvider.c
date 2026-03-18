/*
 * XREFs of PspInsertSyscallProvider @ 0x14065994C
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140659230 (PsRegisterSyscallProvider.c)
 * Callees:
 *     PspAcquireSyscallProviderRegistrationLockExclusive @ 0x140419D3C (PspAcquireSyscallProviderRegistrationLockExclusive.c)
 *     PspDereferenceSyscallProvider @ 0x140419D6C (PspDereferenceSyscallProvider.c)
 *     PspReleaseSyscallProviderRegistrationLockExclusive @ 0x140419ED8 (PspReleaseSyscallProviderRegistrationLockExclusive.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x1406599CC (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspInsertSyscallProvider(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  volatile signed __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  PspAcquireSyscallProviderRegistrationLockExclusive();
  if ( (unsigned int)PspLookupSyscallProviderByIdNoLock(a1 + 16, &v5) == -1073741275 )
  {
    v2 = off_140D3B2E8;
    if ( *off_140D3B2E8 != (_UNKNOWN *)&PspSyscallProviders )
      __fastfail(3u);
    *(_QWORD *)a1 = &PspSyscallProviders;
    *(_QWORD *)(a1 + 8) = v2;
    *v2 = a1;
    off_140D3B2E8 = (_UNKNOWN **)a1;
    v3 = 0;
  }
  else
  {
    v3 = -1073741771;
  }
  PspReleaseSyscallProviderRegistrationLockExclusive();
  if ( v5 )
    PspDereferenceSyscallProvider(v5);
  return v3;
}
