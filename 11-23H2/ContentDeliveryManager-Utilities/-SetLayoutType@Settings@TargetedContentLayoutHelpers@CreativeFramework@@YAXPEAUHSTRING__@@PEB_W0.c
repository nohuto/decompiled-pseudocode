/*
 * XREFs of ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800CC0AC
 * Callers:
 *     ?SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800CC05C (-SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@.c)
 *     ?SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800CC084 (-SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180045458 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800C85A8 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z @ 0x1800C9830 (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800CC174 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800CC218 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType(
        CreativeFramework::Policy *string,
        const WCHAR *a2,
        wchar_t *a3,
        HSTRING a4)
{
  bool ShouldUseInternal; // di
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  CreativeFramework::SubscribedContentStore::Details *AdUnitIdFromSubscriptionId; // rbx
  wchar_t **v13; // r8
  PCWSTR v14; // rax
  const wchar_t *v15; // r9
  int v16; // eax
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CreativeFramework::ContentDeliveryManagerSettings *v19; // [rsp+48h] [rbp+20h] BYREF

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(string);
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)string, 0LL);
  LOBYTE(v9) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = (CreativeFramework::SubscribedContentStore::Details *)CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(
                                                                                       StringRawBuffer,
                                                                                       v9,
                                                                                       v10,
                                                                                       v11);
  v19 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v19,
    0LL);
  CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(
    AdUnitIdFromSubscriptionId,
    (wchar_t *)&v19,
    v13);
  v14 = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
  v16 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(v19, a2, v14, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v16,
      v17);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v19);
}
