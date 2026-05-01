/*
 * XREFs of ?UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ @ 0x180144DD8
 * Callers:
 *     ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180142FE0 (-UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

void __fastcall SnapInteraction::InteractionTracker::UnsubscribeFromServices(SnapInteraction::InteractionTracker *this)
{
  __int64 *v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 56);
  if ( *((_DWORD *)this + 16) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 72LL))(*v1);
  if ( v1 != &v3 )
  {
    if ( *v1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
    *v1 = 0LL;
  }
  if ( *((_DWORD *)this + 12) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 104LL))(*((_QWORD *)this + 5));
  v3 = 0LL;
  winrt::com_ptr<ITouchSwipe>::operator=((char *)this + 40, &v3);
  if ( v3 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v3);
  if ( *((_QWORD *)this + 14) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((char *)this + 112);
    v3 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=((char *)this + 112, &v3);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  }
}
