/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0144930
 * Callers:
 *     <none>
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C006EB70 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

PVOID *__fastcall GetObjTypeDomainLockRef(_DWORD *a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    return &gDomainDummyLock;
  if ( !gbInDestroyHandleTableObjects
    && !UserIsUserCritSecInExclusive()
    && (!IS_USERCRIT_OWNED_SHARED()
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  if ( *((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1 + 24) == 1 )
    return (PVOID *)GetDomainLockRef(10LL, a2, a3);
  else
    return &gDomainDummyLock;
}
