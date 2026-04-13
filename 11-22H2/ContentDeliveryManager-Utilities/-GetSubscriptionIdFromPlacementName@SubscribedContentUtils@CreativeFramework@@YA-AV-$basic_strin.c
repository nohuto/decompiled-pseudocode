/*
 * XREFs of ?GetSubscriptionIdFromPlacementName@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV34@@Z @ 0x1800AE3D0
 * Callers:
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800ADA88 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006497C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800B049C (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x1800B05D8 (-substr@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV12@_K0@Z.c)
 */

__int64 __fastcall CreativeFramework::SubscribedContentUtils::GetSubscriptionIdFromPlacementName(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = std::char_traits<wchar_t>::length(L"-");
  v5 = std::wstring::find(a2, L"-", 0LL, v4);
  if ( v5 == -1 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\SubscribedContentUtils.h",
      (const char *)0x80070057LL,
      v7);
  std::wstring::substr(a2, a1, v5 + 1);
  return a1;
}
