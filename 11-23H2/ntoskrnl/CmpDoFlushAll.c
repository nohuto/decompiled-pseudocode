/*
 * XREFs of CmpDoFlushAll @ 0x1402F6BDC
 * Callers:
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     CmpForceFlushWorker @ 0x140A11DB0 (CmpForceFlushWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x140A13528 (CmReconcileAndValidateAllHives.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpGetNextHive @ 0x14076A140 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x14076AA84 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1407D8E44 (CmpGetLastHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = (void *)v3 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v3 = (ULONG_PTR)NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection_0(NextHive + 205) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 1640));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpDereferenceHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
