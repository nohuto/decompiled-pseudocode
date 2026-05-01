/*
 * XREFs of ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18036FF80
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800941A0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x18007398C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x18036E328 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 *     ?CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z @ 0x18036EA4C (-CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x18036EBA4 (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x18037036C (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStartExperienceManager::SetBackgroundImage(CStartExperienceManager *this, void *a2)
{
  struct IDCompositionDevice **v4; // rdx
  int DCompDevice; // eax
  int MonitorInformation; // ebx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rdi
  int DesktopWallpaperHWND; // eax
  struct CSingleViewShellExperience *v10; // rdx
  __int64 v11; // rdx
  HWND *v12; // r8
  HWND v13; // r14
  char v14; // r15
  int started; // eax
  StartExperienceWallpaperBackground *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, void *, GUID *, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  StartExperienceWallpaperBackground *v22; // rcx
  bool v24[8]; // [rsp+38h] [rbp-29h] BYREF
  StartExperienceWallpaperBackground *v25; // [rsp+40h] [rbp-21h] BYREF
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+60h] [rbp-1h] BYREF
  HWND hWnd[2]; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT v31; // [rsp+78h] [rbp+17h] BYREF
  HWND v32; // [rsp+88h] [rbp+27h]
  char v33; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 81) )
    CStartExperienceManager::UnsetBackgroundImage(this);
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
  DCompDevice = DesktopWallpaperHelpers::CreateDCompDevice((DesktopWallpaperHelpers *)&v27, v4);
  MonitorInformation = DCompDevice;
  if ( DCompDevice >= 0 )
  {
    v26 = 0LL;
    v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    v8 = **v27;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
    DesktopWallpaperHWND = v8(v7, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, &v26);
    MonitorInformation = DesktopWallpaperHWND;
    if ( DesktopWallpaperHWND < 0 )
    {
      v11 = 1167LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)DesktopWallpaperHWND);
      goto LABEL_26;
    }
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           this,
                           v10,
                           &v31,
                           (enum EDGEUI_TRAYSTUCKPLACE *)hWnd,
                           v24,
                           0LL);
    if ( MonitorInformation < 0 )
    {
LABEL_26:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      goto LABEL_27;
    }
    DesktopWallpaperHWND = DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
                             (DesktopWallpaperHelpers *)&v31,
                             (const struct Geometry::CRect *)hWnd,
                             v12);
    MonitorInformation = DesktopWallpaperHWND;
    if ( DesktopWallpaperHWND < 0 )
    {
      v11 = 1181LL;
      goto LABEL_10;
    }
    v13 = hWnd[0];
    v32 = hWnd[0];
    v14 = 1;
    v33 = 1;
    v25 = 0LL;
    *(_QWORD *)&v31.left = v27;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    started = Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
                &v25,
                hWnd,
                (struct IDCompositionDevice **)&v31);
    MonitorInformation = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)started);
      goto LABEL_24;
    }
    v29 = 0LL;
    v16 = v25;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
    v17 = *((_QWORD *)v16 + 5);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v17 = *((_QWORD *)v16 + 5);
    }
    v29 = v17;
    v28 = 0LL;
    v18 = v26;
    v19 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v26 + 232LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    v20 = v19(v18, a2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, &v28);
    MonitorInformation = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 24LL))(v28, v29);
      MonitorInformation = v20;
      if ( v20 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
        MonitorInformation = v20;
        if ( v20 >= 0 )
        {
          v22 = v25;
          v25 = (StartExperienceWallpaperBackground *)*((_QWORD *)this + 81);
          *((_QWORD *)this + 81) = v22;
          *((_QWORD *)this + 82) = v13;
          v14 = 0;
          MonitorInformation = 0;
          goto LABEL_23;
        }
        v21 = 1201LL;
      }
      else
      {
        v21 = 1200LL;
      }
    }
    else
    {
      v21 = 1197LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
LABEL_23:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
LABEL_24:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    if ( v14 )
      DestroyWindow(v13);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)DCompDevice);
LABEL_27:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
  return (unsigned int)MonitorInformation;
}
