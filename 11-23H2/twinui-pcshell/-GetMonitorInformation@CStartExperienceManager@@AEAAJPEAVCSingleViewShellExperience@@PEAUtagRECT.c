/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800D4F14
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18002BEC0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800623D0 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5A04 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1804454E0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180445C20 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18001A3A8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005C310 (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?DisplayArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006F618 (-DisplayArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@Win.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::GetMonitorInformation(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4,
        bool *a5,
        HMONITOR *a6)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  HRESULT v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v16; // eax
  HWND WindowW; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  _QWORD *DisplayMonitorInfoForMonitor; // rax
  __int64 v22; // r9
  LANGID ThreadUILanguage; // ax
  int v25; // [rsp+20h] [rbp-99h]
  __int64 v26; // [rsp+30h] [rbp-89h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-81h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-79h] BYREF
  __int64 v29; // [rsp+48h] [rbp-71h] BYREF
  int v30; // [rsp+50h] [rbp-69h] BYREF
  HMONITOR hMonitor; // [rsp+58h] [rbp-61h] BYREF
  HMONITOR v32; // [rsp+60h] [rbp-59h] BYREF
  __int128 v33; // [rsp+68h] [rbp-51h] BYREF
  __int128 v34; // [rsp+78h] [rbp-41h] BYREF
  struct tagRECT v35; // [rsp+88h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+98h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *a3 = 0LL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v29 = 0LL;
  v9 = *((_QWORD *)this + 66);
  v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
  v11 = v10(v9, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v29);
  v12 = v11;
  if ( v11 >= 0 )
  {
    punk = 0LL;
    v13 = v29;
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 88LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&punk);
    v12 = v14(v13, AddressOf);
    if ( v12 < 0 )
      goto LABEL_33;
    v32 = 0LL;
    if ( a6 )
    {
      v12 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &v32);
      if ( v12 < 0 )
        goto LABEL_33;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    v12 = IUnknown_QueryService(
            punk,
            (const GUID *const)&SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            &ppvOut);
    if ( v12 < 0 )
    {
LABEL_32:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&ppvOut);
LABEL_33:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&punk);
      goto LABEL_34;
    }
    v16 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v30);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C8,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v16,
        v25);
      goto LABEL_32;
    }
    v35 = 0LL;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    v26 = 0LL;
    hMonitor = 0LL;
    v18 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &hMonitor);
    v12 = v18;
    if ( v18 < 0 )
    {
      v19 = 976LL;
LABEL_25:
      v22 = (unsigned int)v18;
      goto LABEL_26;
    }
    if ( (unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool((char *)this + 800) )
    {
      DisplayMonitorInfoForMonitor = winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
                                       v20,
                                       &v33,
                                       (__int64)hMonitor);
      winrt::Windows::Foundation::IUnknown::operator=(&v26, DisplayMonitorInfoForMonitor);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v33);
      if ( (unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v26) )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
          &v26,
          &v34);
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
          &v26,
          &v33);
        v35.left = (int)*(float *)&v33;
        v35.top = (int)*((float *)&v34 + 1);
        v35.right = (int)(float)(*((float *)&v33 + 2) + *(float *)&v33);
        v35.bottom = (int)(float)(*((float *)&v34 + 3) + *((float *)&v34 + 1));
      }
    }
    if ( !(unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v26) )
    {
      mi.cbSize = 40;
      memset(&mi.rcMonitor, 0, 36);
      if ( !GetMonitorInfoW(hMonitor, &mi) )
      {
        v12 = -2147418113;
        v22 = 2147549183LL;
        v19 = 1001LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)v22,
          v25);
LABEL_31:
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v26);
        goto LABEL_32;
      }
      if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
      {
        v18 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v35);
        v12 = v18;
        if ( v18 < 0 )
        {
          v19 = 1004LL;
          goto LABEL_25;
        }
      }
      else
      {
        v18 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v35);
        v12 = v18;
        if ( v18 < 0 )
        {
          v19 = 1008LL;
          goto LABEL_25;
        }
      }
      v35.left = mi.rcMonitor.left;
      v35.right = mi.rcMonitor.right;
    }
    *a3 = v35;
    *(_DWORD *)a4 = v30;
    ThreadUILanguage = GetThreadUILanguage();
    *a5 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
    if ( a6 )
      *a6 = v32;
    v12 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B7,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v11,
    v25);
LABEL_34:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v29);
  return (unsigned int)v12;
}
