/*
 * XREFs of ?StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180656F78
 * Callers:
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x18021F780 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180220060 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 *     _lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&_ @ 0x180656348 (_lambda_e0b0b8eaa13602b9fabc447bd0975459_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

void __fastcall TouchEdgeGripperHost::StopDismissTimer(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IUnknown *v2; // rbx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 64) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)(a1 + 64));
    v3 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v3);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  }
}
