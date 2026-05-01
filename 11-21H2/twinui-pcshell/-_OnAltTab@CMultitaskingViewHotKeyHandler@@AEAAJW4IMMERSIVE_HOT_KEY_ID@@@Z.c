/*
 * XREFs of ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180499AE0
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x1800433C0 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x1800FDF34 (-_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x18017FAD4 (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___ @ 0x18049968C (MakeMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewHotKeyHandler::_OnAltTab(__int64 a1, int a2)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  HWND WindowW; // rax
  HWND v9; // r14
  HWND WindowLongPtrW; // rbx
  HWND ForegroundWindow; // rdi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, HWND, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, GUID *, GUID *, int *); // rbx
  int v18; // eax
  unsigned int v19; // ebx
  int MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297; // eax
  __int64 v21; // rdx
  int v22[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  int v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  if ( !CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab((CMultitaskingViewHotKeyHandler *)a1) )
  {
    CMultitaskingViewHotKeyHandler::_UnregisterHotKeys((CMultitaskingViewHotKeyHandler *)a1);
    return 0LL;
  }
  v28 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 72LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v28);
  v6(v5, AddressOf);
  if ( !v28 )
  {
    WindowW = FindWindowW(L"Shell_CortanaProxy", 0LL);
    v9 = WindowW;
    if ( WindowW )
    {
      WindowLongPtrW = (HWND)GetWindowLongPtrW(WindowW, 0);
      ForegroundWindow = GetForegroundWindow();
      if ( ForegroundWindow == WindowLongPtrW || ForegroundWindow == GetLastActivePopup(WindowLongPtrW) )
      {
        v23 = 0LL;
        v12 = *(_QWORD *)(a1 + 64);
        v13 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v12 + 48LL);
        v14 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v23);
        v15 = v13(v12, v9, v14);
        if ( v15 >= 0 )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v28, &v23);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAF,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
            (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
      }
    }
  }
  *(_QWORD *)v22 = 0LL;
  v16 = *(_QWORD *)(a1 + 40);
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v16 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
  v18 = v17(v16, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v22);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v24 = a2;
    v25 = *(_QWORD *)v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
    v26[0] = v28;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v26);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
    MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297 = MakeMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297_(
                                                                              &v29,
                                                                              (__int64)&v24);
    v19 = MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297;
    if ( MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297 >= 0 )
    {
      MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 56) + 24LL))(
                                                                                *(_QWORD *)(a1 + 56),
                                                                                v29,
                                                                                1LL);
      v19 = MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297;
      if ( MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297 >= 0 )
      {
LABEL_18:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v26);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
        goto LABEL_19;
      }
      v21 = 226LL;
    }
    else
    {
      v21 = 223LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBC,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v18);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
  return v19;
}
