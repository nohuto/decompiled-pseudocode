/*
 * XREFs of ?reset@?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18007E8C0
 * Callers:
 *     ??4?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007E374 (--4-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsI.c)
 *     ??1?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x18007E898 (--1-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsI.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??R_lambda_a4d0d0877f62cc01b2b88c73646041c4_@@QEBA@XZ @ 0x18007EAC8 (--R_lambda_a4d0d0877f62cc01b2b88c73646041c4_@@QEBA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline>::reset(
        _QWORD *a1)
{
  void (__fastcall *v2)(_QWORD); // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int128 v5; // [rsp+20h] [rbp-18h]
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (void (__fastcall *)(_QWORD))a1[4];
    if ( v2 )
    {
      v2(*a1);
    }
    else
    {
      v6 = a1;
      v3 = _lambda_a4d0d0877f62cc01b2b88c73646041c4_::operator()(&v6);
      v4 = __abi_winrt_ptr_ctor(v3);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v4 )
      {
        ((void (__fastcall *)(__int64, _QWORD))a1[2])(v4 + *((int *)a1 + 6), *a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    *a1 = 0LL;
    Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 1));
    *(_QWORD *)&v5 = 0LL;
    DWORD2(v5) = 0;
    *((_OWORD *)a1 + 1) = v5;
    a1[4] = 0LL;
  }
}
