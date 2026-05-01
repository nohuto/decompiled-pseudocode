/*
 * XREFs of BindCtx_SetMode @ 0x180752A80
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180753208 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18075CF74 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18075D048 (-_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIBindCtx@@@@YAXPEAPEAUIBindCtx@@@Z @ 0x180750EF0 (--$SafeRelease@UIBindCtx@@@@YAXPEAPEAUIBindCtx@@@Z.c)
 */

__int64 __fastcall BindCtx_SetMode(__int64 a1, __int64 a2, LPBC *a3)
{
  HRESULT BindCtx; // edi
  LPBC v5; // rcx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0LL;
  BindCtx = CreateBindCtx(0, a3);
  if ( BindCtx >= 0 )
  {
    v5 = *a3;
    v7[1] = 0;
    v7[3] = 0;
    v7[0] = 16;
    v7[2] = 4096;
    BindCtx = ((__int64 (__fastcall *)(LPBC, _DWORD *))v5->lpVtbl->SetBindOptions)(v5, v7);
    if ( BindCtx < 0 )
      SafeRelease<IBindCtx>((__int64 *)a3);
  }
  return (unsigned int)BindCtx;
}
