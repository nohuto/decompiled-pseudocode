/*
 * XREFs of _wil::MakeOrThrow_AppUsageTracker_IServiceProvider___&_Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification___&_enum_Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption_&__::_1_::dtor$0 @ 0x180222889
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ @ 0x1805642F4 (--1-$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_AppUsageTracker_IServiceProvider_____Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification_____enum_Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<AppUsageTracker>::~ComPtr<AppUsageTracker>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
