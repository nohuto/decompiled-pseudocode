/*
 * XREFs of ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x180069B40
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180067C2C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180045458 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z @ 0x1800690F8 (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z.c)
 *     ?SetFileTimeSettingToCurrentTime@Details@SubscribedContentStore@CreativeFramework@@YAXPEBG0@Z @ 0x18006A6BC (-SetFileTimeSettingToCurrentTime@Details@SubscribedContentStore@CreativeFramework@@YAXPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed(
        CreativeFramework::SubscribedContentStore *this,
        const unsigned __int16 *a2)
{
  unsigned __int16 **v3; // r8
  const unsigned __int16 *v4; // r8
  CreativeFramework::SubscribedContentStore::Details *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v5,
    0LL);
  CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(this, (unsigned __int16 *)&v5, v3);
  CreativeFramework::SubscribedContentStore::Details::SetFileTimeSettingToCurrentTime(v5, L"LastAccessed", v4);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v5);
}
