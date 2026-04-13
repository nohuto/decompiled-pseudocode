/*
 * XREFs of ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800DE560
 * Callers:
 *     ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E07D4 (-NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedC.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800DDFF0 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800DF7F4 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800E36B4 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
CreativeFramework::Policy *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
        CreativeFramework::Policy *a1,
        HSTRING string,
        LPCWSTR lpValue)
{
  bool ShouldUseInternal; // bl
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v8; // rdx
  LPCWCH AdUnitIdFromSubscriptionId; // rax
  int v10; // eax
  const wchar_t *v11; // r8
  void *v12; // r14
  unsigned __int64 v13; // rbx
  int StringSetting; // eax
  char *v15; // rdx
  void *v16; // rdi
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h]
  __int64 v20; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(a1);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  LOBYTE(v8) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(StringRawBuffer, v8);
  pv = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&pv,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          AdUnitIdFromSubscriptionId);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      54LL,
      (__int64)"onecoreuap\\internal\\Shell\\inc\\SubscribedContentStoreShared.h",
      (const char *)(unsigned int)v10,
      (int)pv);
  v12 = pv;
  v13 = -1LL;
  v19 = -1LL;
  v20 = -1LL;
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                    (CreativeFramework::ContentDeliveryManagerSettings *)pv,
                    lpValue,
                    v11,
                    (bool)&pv,
                    0LL);
  if ( StringSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      67LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)StringSetting,
      (int)pv);
  v15 = (char *)&Src;
  v16 = pv;
  if ( pv )
    v15 = (char *)pv;
  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)v15 )
  {
    do
      ++v13;
    while ( *(_WORD *)&v15[2 * v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)a1, v15, v13);
  if ( v16 )
    CoTaskMemFree(v16);
  if ( v12 )
    CoTaskMemFree(v12);
  return a1;
}
