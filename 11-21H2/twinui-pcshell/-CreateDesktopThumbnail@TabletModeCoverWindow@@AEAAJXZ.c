/*
 * XREFs of ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x180520BF0
 * Callers:
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180069380 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180520F50 (-DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180521808 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1804C2140 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModeCoverWindow::CreateDesktopThumbnail(TabletModeCoverWindow *this)
{
  char v2; // r14
  LPVOID *ppv; // rdi
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  DCompThumbnailHelpers **v7; // r15
  __int64 v8; // rax
  LPVOID v9; // rdi
  __int64 (__fastcall *v10)(LPVOID, _QWORD, __int64, char *); // rbx
  _QWORD *v11; // r12
  int DesktopBackgroundThumbnail; // eax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  DCompThumbnailHelpers *v16; // rdi
  __int64 (__fastcall *v17)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, char *); // rbx
  DWORD SysColor; // eax
  __int64 v19; // rdx
  __int64 v21[2]; // [rsp+40h] [rbp-40h] BYREF
  char v22; // [rsp+50h] [rbp-30h]
  __int64 v23[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v24[4]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v21[1] = (__int64)this;
  v2 = 1;
  v22 = 1;
  ppv = (LPVOID *)((char *)this + 168);
  if ( !*((_QWORD *)this + 21) )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
    Instance = CoCreateInstance(
                 &CLSID_SwitchThumbnailDeviceManager,
                 0LL,
                 1u,
                 &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                 ppv);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v6 = 300LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_23;
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)*ppv + 176LL))(*ppv);
  }
  v7 = (DCompThumbnailHelpers **)((char *)this + 160);
  v8 = *((_QWORD *)this + 20);
  if ( !v8 )
  {
    v9 = *ppv;
    v10 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, char *))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 20);
    Instance = v10(v9, *((_QWORD *)this + 13), 1LL, (char *)this + 160);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v6 = 308LL;
      goto LABEL_8;
    }
    v8 = *((_QWORD *)this + 20);
  }
  v21[0] = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v23, v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
  v11 = (_QWORD *)((char *)this + 128);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 15);
  DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                 *v7,
                                 0LL,
                                 (TabletModeCoverWindow *)((char *)this + 204),
                                 0LL,
                                 (const struct tagSIZE *)this + 15);
  v5 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail >= 0 )
  {
    v14 = *((_DWORD *)this + 54) - *((_DWORD *)this + 52);
    v15 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
    v24[0] = 0;
    v24[1] = 0;
    v24[2] = v15;
    v24[3] = v14;
    DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(**((_QWORD **)this + 15)
                                                                                             + 24LL))(
                                   *((_QWORD *)this + 15),
                                   v24,
                                   0LL,
                                   0LL);
    v5 = DesktopBackgroundThumbnail;
    if ( DesktopBackgroundThumbnail >= 0 )
    {
      v16 = *v7;
      v17 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)*v7 + 112LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 16);
      v21[0] = 0x100000001LL;
      SysColor = GetSysColor(8);
      DesktopBackgroundThumbnail = v17(
                                     v16,
                                     0LL,
                                     SysColor,
                                     v21[0],
                                     &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                                     (char *)this + 128);
      v5 = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail >= 0 )
      {
        IsPPIEdition();
        DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v11 + 32LL))(
                                       *v11,
                                       v19,
                                       0LL,
                                       0LL);
        v5 = DesktopBackgroundThumbnail;
        if ( DesktopBackgroundThumbnail >= 0 )
        {
          DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(
                                         *v11,
                                         v24,
                                         0LL,
                                         0LL);
          v5 = DesktopBackgroundThumbnail;
          if ( DesktopBackgroundThumbnail >= 0 )
          {
            v2 = 0;
            v5 = 0;
            goto LABEL_22;
          }
          v13 = 326LL;
        }
        else
        {
          v13 = 325LL;
        }
      }
      else
      {
        v13 = 323LL;
      }
    }
    else
    {
      v13 = 319LL;
    }
  }
  else
  {
    v13 = 317LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)DesktopBackgroundThumbnail);
LABEL_22:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v23);
LABEL_23:
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 16);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 15);
  }
  return v5;
}
