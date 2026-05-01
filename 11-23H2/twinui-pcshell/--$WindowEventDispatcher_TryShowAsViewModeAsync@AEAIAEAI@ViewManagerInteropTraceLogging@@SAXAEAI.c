/*
 * XREFs of ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1804BA3E8
 * Callers:
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804CAB28 (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1804CB310 (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804D2330 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@_KPEAUIAsyncCallback@@@Z @ 0x1804D2944 (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
        int *a1,
        int *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  _DWORD *v6; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)v4[1];
  if ( *v6 > 5u )
  {
    v8 = *a2;
    v9 = *a1;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v6,
                    byte_18085890A,
                    0LL,
                    v5,
                    (__int64)&v9,
                    (__int64)&v8);
  }
  return (int)v4;
}
