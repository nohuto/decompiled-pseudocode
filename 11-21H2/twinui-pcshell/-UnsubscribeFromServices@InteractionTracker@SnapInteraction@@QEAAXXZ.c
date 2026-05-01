/*
 * XREFs of ?UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ @ 0x180175330
 * Callers:
 *     ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800AA420 (-UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18032D85C (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

void __fastcall SnapInteraction::InteractionTracker::UnsubscribeFromServices(SnapInteraction::InteractionTracker *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 16) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 80LL))(*((_QWORD *)this + 7));
  v2 = (_QWORD *)((char *)this + 56);
  if ( (__int64 *)((char *)this + 56) != &v4 )
  {
    if ( *v2 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
    *v2 = 0LL;
  }
  if ( *((_DWORD *)this + 12) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 104LL))(*((_QWORD *)this + 5));
  v3 = (_QWORD *)((char *)this + 40);
  if ( (__int64 *)((char *)this + 40) != &v4 )
  {
    if ( *v3 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 5);
    *v3 = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((char *)this + 112);
    v4 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(
      (SnapInteraction::InteractionTracker *)((char *)this + 112),
      (winrt::Windows::Foundation::IUnknown *)&v4);
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  }
}
