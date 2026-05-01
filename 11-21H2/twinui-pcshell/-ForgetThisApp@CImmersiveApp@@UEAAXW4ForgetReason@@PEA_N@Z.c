/*
 * XREFs of ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1801575B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180021344 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18002E340 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___ @ 0x18003B2A4 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::ForgetThisApp(__int64 a1, int a2, _BYTE *a3)
{
  bool v6; // zf
  struct IApplicationPresentationLayer *v7; // rdx
  LPCWSTR *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-60h] BYREF
  int v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int128 i; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]

  v16 = 0LL;
  v18 = 0LL;
  *a3 = 0;
  v6 = (*(_BYTE *)(a1 + 464) & 1) == 0;
  v15 = 12;
  v17 = 6;
  *(_BYTE *)(a1 + 616) = 1;
  if ( !v6 )
  {
    v7 = *(struct IApplicationPresentationLayer **)(a1 + 328);
    v8 = (LPCWSTR *)(a1 + 512);
    *(_DWORD *)v8 |= 1u;
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v8, v7);
    CImmersiveApp::_HideApplication(a1 - 112);
    CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___(a1 + 176);
    *a3 = 1;
  }
  v9 = (_QWORD *)(a1 + 608);
  v10 = *(_QWORD *)(a1 + 608);
  if ( v10 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 24LL))(v10, &v14) >= 0 )
  {
    v11 = 0;
    v20 = 0LL;
    for ( i = 0LL; v11 < v14; ++v11 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v9 + 32LL))(*v9, v11, &v21) >= 0 )
      {
        if ( v23 != 5 )
          goto LABEL_8;
        v13 = v21 - *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1;
        if ( v21 == *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1 )
          v13 = v22 - *(_QWORD *)PKEY_AppUserModel_ID.fmtid.Data4;
        if ( v13 )
LABEL_8:
          (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(*(_QWORD *)*v9 + 48LL))(*v9, &v21, &i);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 608));
  }
  CImmersiveApp::_ScheduleApplicationNotifications(
    (CImmersiveApp *)(a1 - 112),
    (const struct APP_CHANGE_INFO *const)&v15,
    (*a3 != 0) + 1LL);
  if ( a2 == 1 )
  {
    v22 = 0LL;
    LODWORD(v21) = 16;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)(a1 - 112),
      (const struct APP_CHANGE_INFO *const)&v21,
      1uLL);
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 288LL))(*(_QWORD *)(a1 + 328));
}
