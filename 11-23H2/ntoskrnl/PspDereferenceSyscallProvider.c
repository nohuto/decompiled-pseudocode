/*
 * XREFs of PspDereferenceSyscallProvider @ 0x1405A4BCC
 * Callers:
 *     PsUnregisterSyscallProvider @ 0x1409B4850 (PsUnregisterSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x1409B4AE8 (PspDetachProcessFromSyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1409B4CE4 (PspInsertSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x1409B4ECC (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x1409B49D0 (PspDestroySyscallProvider.c)
 */

__int64 __fastcall PspDereferenceSyscallProvider(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return PspDestroySyscallProvider((PVOID)a1);
  }
  return result;
}
