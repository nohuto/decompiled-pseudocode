/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x180052330
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180052240 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x1800523B0 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180052550 (RtlUnlockMemoryZone.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(__int64 a1)
{
  int locked; // edi
  __int64 v4; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( locked < 0 )
    {
      v4 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      v4 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)locked;
}
