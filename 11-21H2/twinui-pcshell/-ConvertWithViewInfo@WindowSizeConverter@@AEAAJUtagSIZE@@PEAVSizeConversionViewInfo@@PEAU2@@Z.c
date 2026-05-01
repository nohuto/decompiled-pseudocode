/*
 * XREFs of ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x18012CDC8
 * Callers:
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x180057150 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x18012CAC0 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1804E9670 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___ @ 0x18012D04C (wil--ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___.c)
 *     ?ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z @ 0x18012D06C (-ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D208 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowSizeConverter::ConvertWithViewInfo(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct SizeConversionViewInfo *a3,
        struct tagSIZE *a4)
{
  struct IImmersiveMonitor *v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rsi
  int v17; // eax
  WindowSizeConverter *v18; // rcx
  struct tagRECT v19; // xmm0
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-59h] BYREF
  __int64 v25; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-45h] BYREF
  __int64 *v28; // [rsp+48h] [rbp-41h] BYREF
  struct tagRECT v29; // [rsp+50h] [rbp-39h] BYREF
  HWND v30; // [rsp+60h] [rbp-29h] BYREF
  struct IImmersiveMonitor *v31; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v32[4]; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v33; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v8 = (struct IImmersiveMonitor *)*((_QWORD *)a3 + 2);
  v31 = v8;
  if ( v8 )
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = WindowSizeConverter::EnsureEntry(this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_20;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  *(_QWORD *)&v29.left = v8;
  v28 = &v24;
  v32[0] = this;
  v32[1] = &v29;
  v32[2] = &v28;
  v11 = wil::ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___(v32);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v11);
    v21 = v10;
    v22 = 596LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)v21);
    goto LABEL_19;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 112LL))(
          v24,
          255LL,
          *((_DWORD *)a3 + 6) & 1);
  v10 = v12;
  if ( v12 < 0 )
  {
    v21 = (unsigned int)v12;
    v22 = 597LL;
    goto LABEL_24;
  }
  v13 = *((_QWORD *)a3 + 4);
  v28 = (__int64 *)v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v27, &v26);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25B,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_18;
  }
  v25 = 0LL;
  v15 = v24;
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 144LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  v17 = v16(v15, &v25);
  v10 = v17;
  if ( v17 < 0 )
  {
    v23 = 606LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_17;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 48LL))(v25, v27, v26);
  v10 = v17;
  if ( v17 < 0 )
  {
    v23 = 607LL;
    goto LABEL_31;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v24 + 24LL))(v24, &v30);
  v10 = v17;
  if ( v17 < 0 )
  {
    v23 = 610LL;
    goto LABEL_31;
  }
  v19 = 0LL;
  v33 = 0LL;
  if ( (*((_BYTE *)a3 + 24) & 2) != 0 )
    goto LABEL_15;
  v17 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v24 + 120LL))(v24, &v33);
  v10 = v17;
  if ( v17 < 0 )
  {
    v23 = 615LL;
    goto LABEL_31;
  }
  v19 = v33;
LABEL_15:
  v29 = v19;
  v17 = WindowSizeConverter::ConvertWithWindow(v18, a2, *((_DWORD *)a3 + 10), v30, &v29, a4);
  v10 = v17;
  if ( v17 < 0 )
  {
    v23 = 617LL;
    goto LABEL_31;
  }
  v10 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
LABEL_19:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  return v10;
}
