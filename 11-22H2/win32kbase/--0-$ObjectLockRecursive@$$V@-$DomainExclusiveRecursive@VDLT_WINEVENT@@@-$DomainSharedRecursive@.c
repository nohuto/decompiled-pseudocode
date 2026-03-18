/*
 * XREFs of ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C005CC48
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C005CBC0 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(
        __int64 a1)
{
  __int64 v2; // rbx
  int v3; // esi
  tagDomLock *v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(9);
  v2 = a1;
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = &gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  v3 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v4 = *(tagDomLock **)v2;
    if ( !*(_QWORD *)v2 )
      goto LABEL_6;
    if ( *(_BYTE *)(v2 + 8) )
    {
      if ( !tagDomLock::IsLockedExclusive(v4) )
      {
        tagDomLock::LockExclusive(*(tagDomLock **)v2);
        goto LABEL_6;
      }
LABEL_8:
      *(_QWORD *)v2 = 0LL;
      goto LABEL_6;
    }
    if ( tagDomLock::IsLockedExclusive(v4) || tagDomLock::IsLockedShared(*(tagDomLock **)v2) )
      goto LABEL_8;
    ExEnterCriticalRegionAndAcquireResourceShared(**(PERESOURCE **)v2);
LABEL_6:
    ++v3;
    v2 += 16LL;
  }
  while ( !v3 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
