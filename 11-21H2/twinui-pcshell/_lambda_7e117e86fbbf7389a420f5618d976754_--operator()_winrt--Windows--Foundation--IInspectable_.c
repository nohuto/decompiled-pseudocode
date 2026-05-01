/*
 * XREFs of _lambda_7e117e86fbbf7389a420f5618d976754_::operator()_winrt::Windows::Foundation::IInspectable_ @ 0x1801C163C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___::Invoke @ 0x1801C8DA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationM.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180348A04 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_7e117e86fbbf7389a420f5618d976754_::operator()_winrt::Windows::Foundation::IInspectable_(
        _DWORD **a1,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a2,
        __int64 a3)
{
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *v3; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  const char *v9; // r9
  int v10; // edi
  _DWORD *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = a3;
  v3 = a2;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a2 + 80LL))(*(_QWORD *)a2, &v12);
  try
  {
    winrt::check_hresult(v5);
    v13[0] = v12;
    LODWORD(v17) = 0;
    v6 = (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v17);
    winrt::check_hresult(v6);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)v13);
    v8 = DashboardManagerTelemetry::Provider(v7);
    v10 = v17;
    if ( *(_DWORD *)v8 > 5u )
    {
      v18 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (_DWORD)v8,
        (unsigned int)&unk_1806CBD73,
        0,
        (_DWORD)v9,
        (__int64)&v18);
    }
    if ( (unsigned int)(v10 - 6) <= 3 )
    {
      v11 = *a1;
      *v11 = 1;
      WakeByAddressAll(v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x190,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v9);
    v3 = a2;
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(v3);
}
