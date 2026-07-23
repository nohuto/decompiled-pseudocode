/*
 * XREFs of PspDereferenceSyscallProvider @ 0x1405A513C
 * Callers:
 *     PsUnregisterSyscallProvider @ 0x1409B4A50 (PsUnregisterSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x1409B4CE8 (PspDetachProcessFromSyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1409B4EE4 (PspInsertSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x1409B50CC (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x1409B4BD0 (PspDestroySyscallProvider.c)
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
