/*
 * XREFs of ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180397220
 * Callers:
 *     ?OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395800 (-OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395840 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18008C708 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1800BC9DC (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1800BCA0C (-IsCredentialReset@@YA_NXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x18012E400 (-IsFullscreenCXHRunning@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x18022CC8A (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180368518 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ??$TrayFlyoutLaunchedByWindow@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@SingleViewExperienceTelemetry@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180392B7C (--$TrayFlyoutLaunchedByWindow@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Interna.c)
 *     _lambda_62276dcc8956575ffb6d344da47e5bef_::operator() @ 0x180393560 (_lambda_62276dcc8956575ffb6d344da47e5bef_--operator().c)
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1803938EC (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  __int64 *v2; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  HWND ForegroundWindow; // rdi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, IUnknown **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned __int16 **v12; // r8
  TaskbarHelpers *v13; // rax
  HMONITOR v14; // rdx
  HWND TrayWindowForMonitor; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, void *, GUID *, IUnknown **); // rbx
  char v18; // al
  void *v19; // rdx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  IUnknown *pUnk; // [rsp+30h] [rbp-59h] BYREF
  struct HWND__ v24[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 p_pUnk; // [rsp+40h] [rbp-49h]
  __int64 v26; // [rsp+48h] [rbp-41h]
  WCHAR ClassName[56]; // [rsp+50h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 448);
  *((_QWORD *)this + 56) = 0LL;
  v3 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 1);
  }
  ForegroundWindow = GetForegroundWindow();
  if ( !GetClassNameW(ForegroundWindow, ClassName, 50)
    || CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) != 2
    && CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) != 2 )
  {
    if ( ForegroundWindow != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
                                     *((ExperienceManagerUtils **)this + 12),
                                     v5) )
      goto LABEL_30;
    LODWORD(pUnk) = 0;
    *(_QWORD *)&v24[0].unused = this;
    p_pUnk = (__int64)&pUnk;
    lambda_62276dcc8956575ffb6d344da47e5bef_::operator()(v24);
    if ( (_DWORD)pUnk )
    {
      pUnk = 0LL;
      v6 = *((_QWORD *)this + 47);
      v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, IUnknown **))(*(_QWORD *)v6 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&pUnk);
      v8 = v7(v6, &IID_IRealmActivationHistory, &GUID_67136e8b_6914_43f0_8f25_05619927d22e, &pUnk);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 935LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&pUnk);
        return v9;
      }
      v8 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[1].QueryInterface)(pUnk, 0xFFFFLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 936LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&pUnk);
LABEL_30:
      *((_QWORD *)this + 59) = 0LL;
      return 0LL;
    }
    if ( !IsUserOOBEOrCredentialReset() && !IsFullscreenCXHRunning() )
    {
      if ( IsWindow(*((HWND *)this + 59)) )
      {
        SetForegroundWindow(*((HWND *)this + 59));
        *(_QWORD *)&v24[0].unused = 0LL;
        p_pUnk = 0LL;
        v26 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v24);
        p_pUnk = -1LL;
        v26 = -1LL;
        if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(*((HWND *)this + 59), v24, v12) >= 0 )
          SingleViewExperienceTelemetry::TrayFlyoutLaunchedByWindow<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &>((__int64 *)&v24[0].unused);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v24);
      }
      else
      {
        v13 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 392), 1u);
        TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v13, v14);
        SetForegroundWindow(TrayWindowForMonitor);
      }
      goto LABEL_30;
    }
    pUnk = 0LL;
    v16 = *((_QWORD *)this + 47);
    v17 = *(__int64 (__fastcall **)(__int64, void *, GUID *, IUnknown **))(*(_QWORD *)v16 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pUnk);
    v18 = IsCredentialReset();
    v19 = &unk_1806DE320;
    if ( !v18 )
      v19 = &unk_1806DE310;
    v20 = v17(v16, v19, &GUID_8f352570_5bb7_4d72_921f_6fb3f2611c71, &pUnk);
    v21 = retaddr;
    if ( v20 >= 0 )
    {
      CoAllowSetForegroundWindow(pUnk, 0LL);
      v20 = ((__int64 (__fastcall *)(IUnknown *))pUnk->lpVtbl[1].Release)(pUnk);
      v21 = retaddr;
      if ( v20 >= 0 )
      {
LABEL_29:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pUnk);
        goto LABEL_30;
      }
      v22 = 947LL;
    }
    else
    {
      v22 = 944LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v21,
      (void *)v22,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_29;
  }
  CBaseTrayFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow((CBaseTrayFlyoutExperienceManager::DebounceDetection *)v2);
  return 0LL;
}
