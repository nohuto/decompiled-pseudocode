/*
 * XREFs of ?reset@?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180010DCC
 * Callers:
 *     ??4?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010CDC (--4-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 *     ??1?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180010DA4 (--1-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 * Callees:
 *     ??R_lambda_4ab2971a6023620ffb3436ab497e7dad_@@QEBAPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x180010E9C (--R_lambda_4ab2971a6023620ffb3436ab497e7dad_@@QEBAPE$AAUISwitcherViewModel@Switcher@Experiences@.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::reset(
        _QWORD *a1)
{
  void (__fastcall *v2)(_QWORD); // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (void (__fastcall *)(_QWORD))a1[3];
    if ( v2 )
    {
      v2(*a1);
    }
    else
    {
      v5 = a1;
      v3 = _lambda_4ab2971a6023620ffb3436ab497e7dad_::operator()(&v5);
      v4 = __abi_winrt_ptr_ctor(v3);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v4 )
      {
        ((void (__fastcall *)(__int64, _QWORD))a1[2])(v4, *a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    *a1 = 0LL;
    Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 1));
    a1[2] = 0LL;
    a1[3] = 0LL;
  }
}
