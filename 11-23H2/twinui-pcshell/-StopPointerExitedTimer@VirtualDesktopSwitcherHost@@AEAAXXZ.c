/*
 * XREFs of ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776A30
 * Callers:
 *     _lambda_070e192e9fba98d43315428c14debf7b_::operator() @ 0x180772380 (_lambda_070e192e9fba98d43315428c14debf7b_--operator().c)
 *     _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x180772438 (_lambda_28e2deb1c60008eafa8d487ea9ad6bb5_--operator().c)
 *     _lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator() @ 0x180772688 (_lambda_72e1dcf1d191a1fe628d31ef24d41038_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

void __fastcall VirtualDesktopSwitcherHost::StopPointerExitedTimer(VirtualDesktopSwitcherHost *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (VirtualDesktopSwitcherHost *)((char *)this + 400);
  if ( *((_QWORD *)this + 50) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)this + 50);
    v2 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v1, (winrt::Windows::Foundation::IUnknown *)&v2);
    if ( v2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v2);
  }
}
