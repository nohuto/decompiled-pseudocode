/*
 * XREFs of ??R_lambda_26f44cd4480ca991a21fc760d40b2af7_@@QEBAXXZ @ 0x180038A64
 * Callers:
 *     ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_26f44cd4480ca991a21fc760d40b2af7_@@@impl@winrt@@UEAAHXZ @ 0x180038A40 (-Invoke@-$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_26f44cd4480ca991a21fc7.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerTelemetry@@P6AXXZ@Z @ 0x180038B60 (-get@-$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerT.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E1070 (-CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_InputSwitcherShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@XZ @ 0x1805E28D0 (-ensure_data@-$tip_test@U_tip_InputSwitcherShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_26f44cd4480ca991a21fc760d40b2af7_::operator()(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)*a1 + 23) + 48LL))(*((_QWORD *)*a1 + 23), &v16);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x256,
      (unsigned int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v2,
      v12);
  if ( v16 )
  {
    v6 = *(_DWORD **)(wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
                        retaddr,
                        _lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v6 > 5u )
    {
      v17 = (__int64)L"ControlCenter Shown";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v6,
        (int)&dword_1806CD856,
        (__int64)&v17);
    }
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 96);
    EnterCriticalSection(v7);
    v17 = (__int64)v7;
    if ( *((_QWORD *)*a1 + 21) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)*a1 + 18) + 8 * (*((_QWORD *)*a1 + 20) & (*((_QWORD *)*a1 + 19) - 1LL)));
      v9 = (_QWORD *)tip::tip_test<_tip_InputSwitcherShowTest>::ensure_data(v8 + 16);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v13,
        v9);
      v10 = v13;
      tip::details::test_common_data<1>::begin_update(v13 + 8);
      v11 = v10 + 157;
      if ( !v10 )
        v11 = 13LL;
      *(_BYTE *)v11 = 1;
      if ( v10 )
      {
        tip::details::test_common_data<1>::end_update(v10 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
      }
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( !*(_DWORD *)v8 && *(_BYTE *)(v8 + 53) )
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CompleteShowAction(*a1);
    }
    return wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  }
  else
  {
    LODWORD(v17) = 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (char *)*a1 + 208,
      &v17);
    *((_BYTE *)*a1 + 280) = 0;
    result = wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
               v3,
               _lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_);
    v5 = *(_DWORD **)(result + 8);
    if ( *v5 > 5u )
    {
      v17 = (__int64)L"ControlCenter Hidden";
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
               (int)v5,
               (int)&dword_1806CD856,
               (__int64)&v17);
    }
  }
  return result;
}
