/*
 * XREFs of ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180564AE8
 * Callers:
 *     ?EnumerateExistingViews@AppUsageTracker@@UEAAXXZ @ 0x180564450 (-EnumerateExistingViews@AppUsageTracker@@UEAAXXZ.c)
 *     ?OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180564870 (-OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180032720 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180036F74 (--$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRT.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1800AF200 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppUsageTracker::UpdateViewState(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        unsigned int a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // r9
  bool v9; // r14
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  void (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // [rsp+78h] [rbp+38h] BYREF
  int v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v11 = a2;
  if ( a3
    || (v12 = 0, ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), int *))(*a2)[27])(a2, &v12), v12) )
  {
    v9 = *(_DWORD *)(a1 + 104) == 1;
    wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(v10, &v11);
    if ( v10[0] )
    {
      (*(void (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, GUID *, _QWORD *), _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 80) + 24LL))(
        *(_QWORD *)(a1 + 80),
        a2,
        a3,
        *(_QWORD *)(a1 + 96),
        v9);
    }
    else
    {
      wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v13, &v11);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, GUID *, _QWORD *), _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 88) + 24LL))(
          *(_QWORD *)(a1 + 88),
          a2,
          a3,
          *(_QWORD *)(a1 + 96),
          v9);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v10);
  }
  else
  {
    v7 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                     v6,
                     _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
    if ( *v7 > 5u )
    {
      v13 = (__int64)L"Filtered out active view not in switchers";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v7,
        (int)&dword_1806C73B1,
        0,
        v8,
        (const WCHAR **)&v13);
    }
  }
}
