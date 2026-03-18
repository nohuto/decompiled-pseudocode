/*
 * XREFs of ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C004DBCC
 * Callers:
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00EA5C0 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C0072BA8 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertAny(PERESOURCE *this)
{
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
     || ExIsResourceAcquiredExclusiveLite(*this) != 1 && !tagDomLock::IsLockedShared((tagDomLock *)this)) )
  {
    __int2c();
  }
}
