/*
 * XREFs of ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x18007065C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180070E64 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180071740 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18005DBC0 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 */

// Hidden C++ exception states: #wind=4
struct _FILETIME __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
        CreativeFramework::SubscribedContentStore *this,
        const unsigned __int16 *a2)
{
  int v2; // eax
  const unsigned __int16 *v3; // r8
  void *v4; // rbx
  int FileTimeSetting; // eax
  LPVOID pv[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  memset(pv, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         this);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      54LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStoreShared.h",
      (const char *)(unsigned int)v2,
      (int)pv[0]);
  v4 = pv[0];
  LOBYTE(v3) = 1;
  FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                      (const WCHAR *)pv[0],
                      L"LastUpdated",
                      v3,
                      &v9);
  if ( FileTimeSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      141LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      (const char *)(unsigned int)FileTimeSetting,
      (int)pv[0]);
  if ( v4 )
    CoTaskMemFree(v4);
  return (struct _FILETIME)v9;
}
