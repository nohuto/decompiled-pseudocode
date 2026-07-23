/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x180121708
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x180121618 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180121708 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x180121698 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180121708 (RtlpHpLfhOwnerLockUnlock.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned int a2)
{
  _RTL_SRWLOCK *v2; // rbx
  int v5; // ebp
  __int64 v6; // rcx
  _RTL_SRWLOCK *v7; // rcx

  v2 = (_RTL_SRWLOCK *)(a1 + 16);
  v5 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  RtlpHpLfhOwnerListLockUnlock(a1, (_QWORD **)(a1 + 24), a2);
  RtlpHpLfhOwnerListLockUnlock(v6, (_QWORD **)(a1 + 40), a2);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v7 = (_RTL_SRWLOCK *)(a1 + 80);
    if ( v5 )
    {
      if ( (a2 & 2) != 0 )
        v7->Value = 1LL;
      RtlReleaseSRWLockExclusive(v7);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v7);
    }
    RtlpHpLfhOwnerLockUnlock(**(_QWORD **)(a1 + 96), a2);
  }
  if ( v5 )
  {
    if ( (a2 & 2) != 0 )
      v2->Value = 1LL;
    RtlReleaseSRWLockExclusive(v2);
  }
}
