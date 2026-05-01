/*
 * XREFs of ?BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ @ 0x18000FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationCoordinator@3456@XZ @ 0x18000FA50 (-get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Com.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TaskViewFrame::BeginInvokeAnimation(TaskViewFrame *this, __int64 a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax

  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7), a2);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7), 0LL);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  v5 = __abi_winrt_cast_to(
         0LL,
         *((_QWORD *)this + 16),
         &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v6 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::InvokeAnimationCoordinator::get(v5);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0LL);
  if ( v7 < 0 )
  {
    __abi_WinRTraiseException(v7);
  }
  else
  {
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
