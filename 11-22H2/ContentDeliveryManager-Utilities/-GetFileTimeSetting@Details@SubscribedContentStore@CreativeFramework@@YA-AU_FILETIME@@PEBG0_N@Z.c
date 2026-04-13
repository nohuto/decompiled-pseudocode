/*
 * XREFs of ?GetFileTimeSetting@Details@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG0_N@Z @ 0x1800688D4
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180067C7C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180069024 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x180058634 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 */

struct _FILETIME __fastcall CreativeFramework::SubscribedContentStore::Details::GetFileTimeSetting(
        const WCHAR *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int FileTimeSetting; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(a3) = 1;
  FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(this, a2, a3, &v7);
  if ( FileTimeSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      (const char *)(unsigned int)FileTimeSetting,
      v5);
  return (struct _FILETIME)v7;
}
