/*
 * XREFs of ??R_lambda_44f2a899e44ce20919ad94180e8373fc_@@QEBAXXZ @ 0x18042F5E4
 * Callers:
 *     ?Invoke@?$__abi_FunctorCapture@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@X$$V@Details@Platform@@UEAAXXZ @ 0x1804357C0 (-Invoke@-$__abi_FunctorCapture@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@X$$V@Details@Platform.c)
 * Callees:
 *     ?get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationCoordinator@3456@XZ @ 0x18000FA50 (-get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Com.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1800F4710 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1800F5EA8 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x180432230 (-Cloak@MonitorFrame@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall _lambda_44f2a899e44ce20919ad94180e8373fc_::operator()(MonitorFrame **a1, bool a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD, __int64, __int64 *); // rsi
  __int64 v9; // r14
  __int64 (__fastcall ***v10)(_QWORD, __int64, __int64 *); // rdi
  __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // eax
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  MonitorFrame::Cloak(*a1, a2);
  v6 = Windows::UI::Xaml::Window::Current::get(v3, v2, v4, v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v8 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::IWindow::Content::get(v7);
  v9 = __abi_winrt_cast_to(
         0,
         v8,
         (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v10 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v9);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v8)[2])(v8);
  try
  {
    v11 = __abi_winrt_cast_to(
            0,
            v10,
            (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v12 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::InvokeAnimationCoordinator::get(v11);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 64LL))(v12, 0LL);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x48,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
      v14);
  }
  if ( v10 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v10)[2])(v10);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
