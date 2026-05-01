/*
 * XREFs of ?DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18007B710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PrepareDismissAnimation@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXXZ @ 0x18007B040 (-PrepareDismissAnimation@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Composab.c)
 *     ?DismissAnimated@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x18007B0BC (-DismissAnimated@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x18007C3E4 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x18007C550 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall TaskViewFrame::DismissAnimated(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rsi
  const char *v11; // r9
  char v12[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  char v15; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v17; // [rsp+88h] [rbp+10h]
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h]

  try
  {
    v3 = __abi_winrt_ptr_ctor(a2);
    v17 = v3;
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v19,
      a1);
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v20 = (__int64)v4;
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      v12,
      v19);
    v13 = __abi_winrt_ptr_ctor(v3);
    v5 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___(
           v4,
           v12);
    v20 = v5;
    v6 = __abi_winrt_ptr_ctor(v5);
    v20 = v6;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v7 = __abi_winrt_ptr_ctor(v6);
    v8 = __abi_winrt_ptr_ctor(v7);
    v14 = v8;
    v15 = 1;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v9 = __abi_winrt_cast_to(
           0LL,
           *(_QWORD *)(a1 + 144),
           &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    _PrepareDismissAnimation__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXXZ(v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = __abi_winrt_cast_to(
            0LL,
            *(_QWORD *)(a1 + 144),
            &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    _DismissAnimated__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXPE_AAVAnimationCompletedEventHandler_2345__Z(
      v10,
      v6);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDD,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
      v11);
    v3 = v17;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
