/*
 * XREFs of ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x18001D160
 * Callers:
 *     <none>
 * Callees:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18001D30C (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___ @ 0x18001D3E0 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800206BC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::ForgetThisApp(__int64 a1, int a2, _BYTE *a3)
{
  CImmersiveApp *v3; // r14
  struct IApplicationPresentationLayer **v4; // rdi
  bool v6; // zf
  struct IApplicationPresentationLayer *v9; // rdx
  CImmersiveApp::CloakType *v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // rax
  unsigned int v16; // [rsp+20h] [rbp-60h] BYREF
  int v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int128 i; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+70h] [rbp-10h]

  v18 = 0LL;
  v3 = (CImmersiveApp *)(a1 - 112);
  v20 = 0LL;
  v4 = (struct IApplicationPresentationLayer **)(a1 + 328);
  *a3 = 0;
  v6 = (*(_BYTE *)(a1 + 464) & 1) == 0;
  v17 = 12;
  v19 = 6;
  *(_BYTE *)(a1 + 616) = 1;
  if ( !v6 )
  {
    v9 = *v4;
    v10 = (CImmersiveApp::CloakType *)(a1 + 512);
    *(_DWORD *)v10 |= 1u;
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v10, v9);
    CImmersiveApp::_HideApplication(v3, 0LL);
    CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___(a1 + 176);
    *a3 = 1;
  }
  v11 = (_QWORD *)(a1 + 608);
  v12 = *(_QWORD *)(a1 + 608);
  if ( v12 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 24LL))(v12, &v16) >= 0 )
  {
    v13 = 0;
    v22 = 0LL;
    for ( i = 0LL; v13 < v16; ++v13 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v11 + 32LL))(*v11, v13, &v23) >= 0 )
      {
        if ( v25 != 5 )
          goto LABEL_8;
        v15 = v23 - *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1;
        if ( v23 == *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1 )
          v15 = v24 - *(_QWORD *)PKEY_AppUserModel_ID.fmtid.Data4;
        if ( v15 )
LABEL_8:
          (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(*(_QWORD *)*v11 + 48LL))(*v11, &v23, &i);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
  }
  CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *const)&v17, (*a3 != 0) + 1LL);
  if ( a2 == 1 )
  {
    v24 = 0LL;
    LODWORD(v23) = 16;
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *const)&v23, 1uLL);
  }
  return (*(__int64 (__fastcall **)(struct IApplicationPresentationLayer *))(*(_QWORD *)*v4 + 288LL))(*v4);
}
