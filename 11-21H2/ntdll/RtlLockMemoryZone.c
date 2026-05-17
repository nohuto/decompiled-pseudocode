/*
 * XREFs of RtlLockMemoryZone @ 0x18007CBB0
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x18007CB30 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpRegisterLockedMemoryZone @ 0x18007CC5C (RtlpRegisterLockedMemoryZone.c)
 *     NtLockVirtualMemory @ 0x1800A62E0 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A7B40 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlLockMemoryZone(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v4; // r14
  int locked; // esi
  _QWORD *i; // rdi
  _QWORD *j; // rbx
  _QWORD *k; // rbx
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+38h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 32);
  locked = 0;
  RtlAcquireSRWLockExclusive(a1 + 32, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_7:
    ++*(_DWORD *)(a1 + 40);
  }
  else
  {
    for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
    {
      v12 = i;
      v11 = i[1];
      locked = NtLockVirtualMemory(-1LL, &v12, &v11, 1LL);
      if ( locked < 0 )
      {
        for ( j = *(_QWORD **)(a1 + 48); j != i; j = (_QWORD *)*j )
        {
          v12 = j;
          v11 = j[1];
          ZwUnlockVirtualMemory(-1LL, &v12, &v11, 1LL);
        }
        goto LABEL_8;
      }
    }
    locked = RtlpRegisterLockedMemoryZone();
    if ( locked >= 0 )
      goto LABEL_7;
    for ( k = *(_QWORD **)(a1 + 48); k; k = (_QWORD *)*k )
    {
      v12 = k;
      v11 = k[1];
      ZwUnlockVirtualMemory(-1LL, &v12, &v11, 1LL);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(v4);
  return (unsigned int)locked;
}
