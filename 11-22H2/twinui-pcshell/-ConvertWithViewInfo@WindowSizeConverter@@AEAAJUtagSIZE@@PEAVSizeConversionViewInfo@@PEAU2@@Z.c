/*
 * XREFs of ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180074160
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180074880 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x180074970 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1805A1A00 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18007439C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180074498 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z @ 0x1800744F4 (-ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowSizeConverter::ConvertWithViewInfo(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct SizeConversionViewInfo *a3,
        struct tagSIZE *a4)
{
  struct IImmersiveMonitor *v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  int FrameForMonitor; // eax
  __int64 v12; // rbx
  int v13; // eax
  struct IApplicationFrame *v14; // rbx
  __int64 (__fastcall *v15)(struct IApplicationFrame *, __int64 *); // rsi
  int v16; // eax
  WindowSizeConverter *v17; // rcx
  struct tagRECT v18; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-49h]
  struct IApplicationFrame *v23; // [rsp+30h] [rbp-39h] BYREF
  __int64 v24; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-25h] BYREF
  __int64 v27; // [rsp+48h] [rbp-21h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+50h] [rbp-19h] BYREF
  HWND v29; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT v30; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v31; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v28 = (struct IImmersiveMonitor *)*((_QWORD *)a3 + 2);
  v8 = v28;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
  v9 = WindowSizeConverter::EnsureEntry(this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9,
      v22);
    goto LABEL_16;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
  FrameForMonitor = WindowSizeConverter::GetFrameForMonitor(this, v8, &v23);
  v10 = FrameForMonitor;
  if ( FrameForMonitor < 0 )
  {
    v20 = 596LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)FrameForMonitor,
      v22);
    goto LABEL_15;
  }
  FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v23 + 112LL))(
                      v23,
                      255LL,
                      *((_DWORD *)a3 + 6) & 1);
  v10 = FrameForMonitor;
  if ( FrameForMonitor < 0 )
  {
    v20 = 597LL;
    goto LABEL_20;
  }
  v27 = *((_QWORD *)a3 + 4);
  v12 = v27;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v12 + 48LL))(v12, &v26, &v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v13,
      v22);
    goto LABEL_14;
  }
  v24 = 0LL;
  v14 = v23;
  v15 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v23 + 144LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v16 = v15(v14, &v24);
  v10 = v16;
  if ( v16 < 0 )
  {
    v21 = 606LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v16,
      v22);
    goto LABEL_13;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 48LL))(v24, v26, v25);
  v10 = v16;
  if ( v16 < 0 )
  {
    v21 = 607LL;
    goto LABEL_27;
  }
  v16 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &v29);
  v10 = v16;
  if ( v16 < 0 )
  {
    v21 = 610LL;
    goto LABEL_27;
  }
  v18 = 0LL;
  v31 = 0LL;
  if ( (*((_BYTE *)a3 + 24) & 2) != 0 )
    goto LABEL_11;
  v16 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, struct tagRECT *))(*(_QWORD *)v23 + 120LL))(v23, &v31);
  v10 = v16;
  if ( v16 < 0 )
  {
    v21 = 615LL;
    goto LABEL_27;
  }
  v18 = v31;
LABEL_11:
  v30 = v18;
  v16 = WindowSizeConverter::ConvertWithWindow(v17, a2, *((_DWORD *)a3 + 10), v29, &v30, a4);
  v10 = v16;
  if ( v16 < 0 )
  {
    v21 = 617LL;
    goto LABEL_27;
  }
  v10 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
LABEL_15:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  return v10;
}
