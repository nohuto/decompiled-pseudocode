/*
 * XREFs of ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18036A5A8
 * Callers:
 *     ?OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803695A0 (-OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803695E0 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_7bcbf056061a51ef99db996275205d7a_::operator() @ 0x180367F84 (_lambda_7bcbf056061a51ef99db996275205d7a_--operator().c)
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1803682D4 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180368518 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss(CPeopleBarFlyoutExperienceManager *this)
{
  __int64 *v2; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  HWND ForegroundWindow; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  HWND WindowW; // rax
  __int64 v13; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-41h] BYREF
  WCHAR ClassName[56]; // [rsp+58h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 672);
  *((_QWORD *)this + 84) = 0LL;
  v3 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 85);
  if ( v3 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 1);
  }
  ForegroundWindow = GetForegroundWindow();
  if ( GetClassNameW(ForegroundWindow, ClassName, 50)
    && (CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) == 2
     || CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) == 2) )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow((CPeopleBarFlyoutExperienceManager::DebounceDetection *)v2);
    return 0LL;
  }
  if ( ForegroundWindow != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
                                   *((ExperienceManagerUtils **)this + 17),
                                   v5) )
    return 0LL;
  LODWORD(v13) = 0;
  v14[0] = this;
  v14[1] = &v13;
  lambda_7bcbf056061a51ef99db996275205d7a_::operator()(v14);
  if ( (_DWORD)v13 )
  {
    v13 = 0LL;
    v7 = *((_QWORD *)this + 41);
    v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    v9 = v8(v7, &IID_IRealmActivationHistory, &GUID_67136e8b_6914_43f0_8f25_05619927d22e, &v13);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 0xFFFFLL);
      v10 = v9;
      if ( v9 >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
        return 0LL;
      }
      v11 = 807LL;
    }
    else
    {
      v11 = 806LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( SetForegroundWindow(WindowW) )
      return 0LL;
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  return v10;
}
