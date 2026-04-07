/*
 * XREFs of ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z @ 0x180044F90
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18004502C (--0-$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::PutTransitionVisual(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CTopLevelWindow3D *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  winrt::Windows::Foundation::IUnknown *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         48LL);
  v8 = v4;
  if ( v4 )
    v5 = winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(
           v4,
           a2);
  else
    v5 = 0LL;
  v6 = (winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 96);
  v7 = (v5 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64);
  v8 = v7;
  if ( v6 == (winrt::Windows::Foundation::IUnknown *)&v8 )
  {
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  else
  {
    if ( *(_QWORD *)v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v6);
    *(_QWORD *)v6 = v7;
  }
}
