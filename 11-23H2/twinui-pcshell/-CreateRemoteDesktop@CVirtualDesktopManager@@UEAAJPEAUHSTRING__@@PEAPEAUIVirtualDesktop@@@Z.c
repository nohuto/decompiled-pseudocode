/*
 * XREFs of ?CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180600F20
 * Callers:
 *     ?CreateRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1802A87D0 (-CreateRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E1A74 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAgileCallback@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@PEAVCVirtualDesktopManager@@P84@EAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@3@@Z@wil@@YA?AV?$ComPtr@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVCVirtualDesktopManager@@$$QEAP84@EAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Z@Z @ 0x1805FCDE0 (--$MakeAgileCallback@U-$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@ZPEAU786@@details@wil@@YA?AV?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@1@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@Z1@Z @ 0x1805FE858 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@I.c)
 *     ??$swap_wil@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@0@Z @ 0x1805FFD28 (--$swap_wil@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV-$com_p.c)
 *     ?reset@?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180607E34 (-reset@-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::CreateRemoteDesktop(
        CVirtualDesktopManager *this,
        HSTRING a2,
        struct IVirtualDesktop **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, HSTRING, struct IVirtualDesktop **); // rbx
  int v13; // eax
  struct IVirtualDesktop *v14; // rax
  __int64 *v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char v25; // [rsp+A0h] [rbp+30h] BYREF
  struct IVirtualDesktop *v26; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), v22);
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 49) )
  {
    v6 = -2147019873;
    v7 = 2147947423LL;
    v8 = 277LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v7);
    goto LABEL_20;
  }
  v25 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 27) + 56LL))(*((_QWORD *)this + 27), &v25);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 283LL;
    goto LABEL_7;
  }
  LOBYTE(v10) = v25 != 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 128LL))(*((_QWORD *)this + 12), v10);
  v26 = 0LL;
  v11 = *((_QWORD *)this + 12);
  v12 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IVirtualDesktop **))(*(_QWORD *)v11 + 120LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
  v13 = v12(v11, a2, &v26);
  v6 = v13;
  if ( v13 >= 0 )
  {
    if ( a3 )
    {
      v14 = v26;
      v26 = 0LL;
      *a3 = v14;
    }
    v15 = (__int64 *)((char *)this + 272);
    if ( !*((_QWORD *)this + 34) && !v25 )
    {
      *(_QWORD *)&v21 = CVirtualDesktopManager::OnRemoteDesktopConnected;
      DWORD2(v21) = 0;
      v23[0] = v21;
      *(_QWORD *)&v21 = (char *)this - 8;
      wil::MakeAgileCallback<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>,CVirtualDesktopManager *,long (CVirtualDesktopManager::*)(IInspectable *,Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *)>(
        &v27,
        (__int64 *)&v21,
        v23);
      v16 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::IRemoteSessionWindowManager,long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *>(
              v23,
              *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27));
      if ( v15 != v16 )
      {
        wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::reset((char *)this + 272);
        v17 = *v15;
        *v15 = *v16;
        *v16 = v17;
        wistd::swap_wil<wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>>((__int64 *)this + 35, v16 + 1);
        v18 = *((_QWORD *)this + 36);
        *((_QWORD *)this + 36) = v16[2];
        v16[2] = v18;
      }
      wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::reset(v23);
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)v23 + 1);
      v19 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
  }
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v26);
LABEL_20:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v22);
  return v6;
}
