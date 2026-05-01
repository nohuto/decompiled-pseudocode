/*
 * XREFs of ?Stringify@?$consume_Windows_Data_Json_IJsonValue@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1801CB988
 * Callers:
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonObject>::Stringify(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, void *, _QWORD **); // r9
  _QWORD *v4; // rcx
  unsigned int v5; // eax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  v3 = *a1;
  v4 = 0LL;
  v9 = 0LL;
  if ( v3 )
  {
    v8 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v8);
    v4 = v8;
  }
  v7 = v4;
  v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v4 + 56LL))(v4, &v9);
  winrt::check_hresult(v5);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v7);
  *a2 = v9;
  return a2;
}
