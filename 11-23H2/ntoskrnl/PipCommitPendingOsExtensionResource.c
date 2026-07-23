/*
 * XREFs of PipCommitPendingOsExtensionResource @ 0x140B94B80
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateKey @ 0x1407980B0 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140810D2C (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegOpenKey @ 0x140812A90 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x140812ACC (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegCloseKey @ 0x140876B54 (_PnpCtxRegCloseKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14087E554 (PiDevCfgCopyDeviceKeys.c)
 *     _PnpCtxRegDeleteKey @ 0x140A60DBC (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall PipCommitPendingOsExtensionResource(__int64 a1, void *a2, void *a3)
{
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v8; // r8
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  void *v11; // [rsp+48h] [rbp-28h]
  void *v12; // [rsp+50h] [rbp-20h]
  void *v13; // [rsp+58h] [rbp-18h] BYREF
  void *v14; // [rsp+60h] [rbp-10h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v10);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( !a2 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               v10,
                               (__int64)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
                               0,
                               0x2001Fu,
                               (__int64)&v13);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a2 = v13;
    }
    if ( !a3 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, a1, 0, 0x20019u, (__int64)&v14);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a3 = v14;
    }
    CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v10);
    if ( CachedContextBaseKey >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v12);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v11, v8, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, a1);
          if ( CachedContextBaseKey >= 0 )
          {
            LODWORD(v10) = 0;
            if ( (unsigned int)PnpCtxRegEnumKey(v6, a2) == -2147483622 )
              PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, a2, 0LL);
          }
        }
      }
    }
  }
LABEL_14:
  if ( v11 )
    PnpCtxRegCloseKey(v6, v11);
  if ( v12 )
    PnpCtxRegCloseKey(v6, v12);
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  if ( v14 )
    PnpCtxRegCloseKey(v6, v14);
  return (unsigned int)CachedContextBaseKey;
}
