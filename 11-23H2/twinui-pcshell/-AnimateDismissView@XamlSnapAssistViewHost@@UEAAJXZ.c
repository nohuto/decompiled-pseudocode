/*
 * XREFs of ?AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18076AC60
 * Callers:
 *     ?AnimateDismissView@XamlSnapAssistViewHost@@WBA@EAAJXZ @ 0x1802AE5A0 (-AnimateDismissView@XamlSnapAssistViewHost@@WBA@EAAJXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a___ @ 0x180768B08 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_180768B08.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlSnapAssistViewHost::AnimateDismissView(
        XamlSnapAssistViewHost *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 WeakReference; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h]
  _QWORD *v16; // [rsp+58h] [rbp+20h]

  try
  {
    if ( !*((_BYTE *)this + 168) )
    {
      v5 = __abi_winrt_cast_to(
             0,
             *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 19),
             (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
      WeakReference = v5;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 336LL))(v5);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v7 = __abi_winrt_cast_to(
             0,
             *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 19),
             (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
      v15 = v7;
      v8 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v16 = v8;
      WeakReference = Platform::Details::GetWeakReference(*((_QWORD *)this + 13));
      v14 = 0LL;
      v9 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a___(
             v8,
             (Platform::WeakReference *)&WeakReference);
      v16 = v9;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 344LL))(v7, v9);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      if ( v9 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v14);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *((_BYTE *)this + 168) = 1;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AE,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           a4);
  }
  return result;
}
