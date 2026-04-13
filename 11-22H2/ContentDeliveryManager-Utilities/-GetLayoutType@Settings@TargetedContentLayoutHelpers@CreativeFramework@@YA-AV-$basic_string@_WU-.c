/*
 * XREFs of ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800C89A0
 * Callers:
 *     ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CA5A0 (-NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedC.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042CB4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800454A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800C85F8 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800C965C (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z @ 0x1800C9880 (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800CC268 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
CreativeFramework::Policy *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
        CreativeFramework::Policy *a1,
        HSTRING a2,
        const WCHAR *a3)
{
  bool ShouldUseInternal; // bl
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  CreativeFramework::SubscribedContentStore::Details *AdUnitIdFromSubscriptionId; // rbx
  wchar_t **v12; // r8
  const wchar_t *v13; // r8
  int StringSetting; // eax
  wchar_t **v16; // [rsp+20h] [rbp-20h]
  int v17; // [rsp+20h] [rbp-20h]
  bool v18[8]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CreativeFramework::ContentDeliveryManagerSettings *v22; // [rsp+78h] [rbp+38h] BYREF

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(a1);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  LOBYTE(v8) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = (CreativeFramework::SubscribedContentStore::Details *)CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(
                                                                                       StringRawBuffer,
                                                                                       v8,
                                                                                       v9,
                                                                                       v10);
  v22 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v22,
    0LL);
  CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(
    AdUnitIdFromSubscriptionId,
    (const wchar_t *)&v22,
    v12);
  *(_QWORD *)v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
  v19 = -1LL;
  v20 = -1LL;
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(v22, a3, v13, (bool)v18, v16);
  if ( StringSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)StringSetting,
      v17);
  std::wstring::wstring((__int64)a1);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v22);
  return a1;
}
