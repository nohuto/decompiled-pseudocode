/*
 * XREFs of RtlLockMemoryZone @ 0x1800523B0
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180052330 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpRegisterLockedMemoryZone @ 0x18005245C (RtlpRegisterLockedMemoryZone.c)
 *     NtLockVirtualMemory @ 0x1800A1080 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A2940 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlLockMemoryZone(__int64 a1)
{
  volatile signed __int64 *v1; // r14
  int locked; // esi
  _QWORD *i; // rdi
  _QWORD *j; // rbx
  _QWORD *k; // rbx
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+38h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 32);
  locked = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_7:
    ++*(_DWORD *)(a1 + 40);
  }
  else
  {
    for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
    {
      v9 = i;
      v8 = i[1];
      locked = NtLockVirtualMemory(-1LL, &v9, &v8, 1LL);
      if ( locked < 0 )
      {
        for ( j = *(_QWORD **)(a1 + 48); j != i; j = (_QWORD *)*j )
        {
          v9 = j;
          v8 = j[1];
          ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
        }
        goto LABEL_8;
      }
    }
    locked = RtlpRegisterLockedMemoryZone();
    if ( locked >= 0 )
      goto LABEL_7;
    for ( k = *(_QWORD **)(a1 + 48); k; k = (_QWORD *)*k )
    {
      v9 = k;
      v8 = k[1];
      ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(v1);
  return (unsigned int)locked;
}
