/*
 * XREFs of _lambda_ff813731644cb9328dc438ea795a8eda_::operator() @ 0x1801C58BC
 * Callers:
 *     wistd::__function::__func__lambda_ff813731644cb9328dc438ea795a8eda__long___cdecl(void)_::operator() @ 0x1801C5A30 (wistd--__function--__func__lambda_ff813731644cb9328dc438ea795a8eda__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??C?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_data_control@U_tip_SwipeDashboard@@@1@XZ @ 0x180033F74 (--C-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA-AV-$test_data_control@U_tip_SwipeDashboard@@@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ @ 0x1801C4700 (--1-$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ff813731644cb9328dc438ea795a8eda_::operator()(__int64 *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(*a1 + 128) + 88LL))(
         *(_QWORD *)(*a1 + 128),
         _mm_unpacklo_ps(
           (__m128)COERCE_UNSIGNED_INT((float)*(int *)a1[1]),
           (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1[1] + 4))).m128_u64[0]);
  try
  {
    winrt::check_hresult(v2);
    v9 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)(*a1 + 128),
      (winrt::Windows::Foundation::IUnknown *)&v9);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
    v3 = *tip::test_watcher<_tip_SwipeDashboard>::operator->(a1[2], v7);
    v4 = v3 + 155;
    if ( !v3 )
      v4 = 11LL;
    *(_BYTE *)v4 = 1;
    tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x333,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v5);
  }
  return result;
}
