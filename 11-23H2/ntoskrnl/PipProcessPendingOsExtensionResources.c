/*
 * XREFs of PipProcessPendingOsExtensionResources @ 0x140B3FF50
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x140812A90 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x140876B54 (_PnpCtxRegCloseKey.c)
 *     PipProcessPendingObjects @ 0x140B95120 (PipProcessPendingObjects.c)
 */

__int64 PipProcessPendingOsExtensionResources()
{
  __int64 v0; // rcx
  int CachedContextBaseKey; // ebx
  int v2; // eax
  __int64 v3; // r8
  void *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v6);
  if ( CachedContextBaseKey >= 0 )
  {
    v2 = PnpCtxRegOpenKey(
           *(__int64 *)&PiPnpRtlCtx,
           v6,
           (__int64)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
           0,
           0x2001Fu,
           (__int64)&v5);
    CachedContextBaseKey = v2;
    if ( v2 == -1073741772 || v2 == -1073741444 )
    {
      CachedContextBaseKey = 0;
    }
    else if ( v2 >= 0 )
    {
      CachedContextBaseKey = PipProcessPendingObjects(v5, 0LL, v3, PipCommitPendingOsExtensionResource);
    }
  }
  if ( v5 )
    PnpCtxRegCloseKey(v0, v5);
  return (unsigned int)CachedContextBaseKey;
}
