/*
 * XREFs of GetJournallingQueue @ 0x1C01170F0
 * Callers:
 *     <none>
 * Callees:
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  __int64 v2; // rbx
  __int64 Valid; // rcx

  if ( (*(_DWORD *)(a1 + 488) & 0x80u) != 0 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 456) )
    return 0LL;
  LockRefactorStagingAssertAny(gDomainHookLock);
  Valid = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 56LL);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
      Valid = PhkNextValid(Valid);
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 432LL);
  }
  LockRefactorStagingAssertAny(gDomainHookLock);
  Valid = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 48LL);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
      Valid = PhkNextValid(Valid);
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 432LL);
  }
  return v2;
}
