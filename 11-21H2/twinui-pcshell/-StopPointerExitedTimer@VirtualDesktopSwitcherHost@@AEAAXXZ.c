/*
 * XREFs of ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060C20C
 * Callers:
 *     _lambda_93a01a015314866c96b4de2e509c5117_::operator() @ 0x180608308 (_lambda_93a01a015314866c96b4de2e509c5117_--operator().c)
 *     _lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f_::operator() @ 0x1806085A4 (_lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f_--operator().c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18032D85C (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

void __fastcall VirtualDesktopSwitcherHost::StopPointerExitedTimer(VirtualDesktopSwitcherHost *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (VirtualDesktopSwitcherHost *)((char *)this + 392);
  if ( *((_QWORD *)this + 49) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)this + 49);
    v2 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v1, (winrt::Windows::Foundation::IUnknown *)&v2);
    if ( v2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v2);
  }
}
