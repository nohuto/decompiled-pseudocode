/*
 * XREFs of ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180553110
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180072060 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x1801AF950 (-_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ.c)
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x1801BD164 (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___ @ 0x180552CB8 (MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewHotKeyHandler::_OnAltTab(__int64 a1, int a2)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64 *); // rbx
  HWND WindowW; // rax
  HWND v8; // r14
  HWND WindowLongPtrW; // rbx
  HWND ForegroundWindow; // rdi
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, HWND, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, GUID *, int *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  int v21[2]; // [rsp+38h] [rbp-28h] BYREF
  int v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  if ( !CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab((CMultitaskingViewHotKeyHandler *)a1) )
  {
    CMultitaskingViewHotKeyHandler::_UnregisterHotKeys((CMultitaskingViewHotKeyHandler *)a1);
    return 0LL;
  }
  v26 = 0LL;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 72LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
  v6(v5, &v26);
  if ( !v26 )
  {
    WindowW = FindWindowW(L"Shell_CortanaProxy", 0LL);
    v8 = WindowW;
    if ( WindowW )
    {
      WindowLongPtrW = (HWND)GetWindowLongPtrW(WindowW, 0);
      ForegroundWindow = GetForegroundWindow();
      if ( ForegroundWindow == WindowLongPtrW || ForegroundWindow == GetLastActivePopup(WindowLongPtrW) )
      {
        v27 = 0LL;
        v11 = *(_QWORD *)(a1 + 56);
        v12 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v11 + 48LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
        v13 = v12(v11, v8, &v27);
        if ( v13 >= 0 )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v26, &v27);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAB,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
            (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
      }
    }
  }
  *(_QWORD *)v21 = 0LL;
  v14 = *(_QWORD *)(a1 + 40);
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v14 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v21);
  v16 = v15(v14, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v21);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v22 = a2;
    v23 = *(_QWORD *)v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
    v24[0] = v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v24);
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764 = MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_(
                                                                              &v20,
                                                                              (__int64)&v22);
    v17 = MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764;
    if ( MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764 >= 0 )
    {
      MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(
                                                                                *(_QWORD *)(a1 + 48),
                                                                                v20,
                                                                                1LL);
      v17 = MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764;
      if ( MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764 >= 0 )
      {
LABEL_18:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v24);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
        goto LABEL_19;
      }
      v19 = 222LL;
    }
    else
    {
      v19 = 219LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB8,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v16);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v21);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
  return v17;
}
