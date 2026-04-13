/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180057EB4
 * Callers:
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18005A394 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18005DDE0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18005FE4C (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x180070030 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800AAB30 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800ABDC0 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800CF6AC (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800D0BFC (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 *     __anonymous_namespace_::DecodeBatchIdFromCreativeId_::_1_::dtor$1 @ 0x1800EF97C (__anonymous_namespace_--DecodeBatchIdFromCreativeId_--_1_--dtor$1.c)
 *     _ContentManagement::IsHighPriorityEvent_::_1_::dtor$3 @ 0x1800EFB71 (_ContentManagement--IsHighPriorityEvent_--_1_--dtor$3.c)
 *     _ContentManagement::IsHighPriorityEvent_::_1_::dtor$2 @ 0x1800EFCF2 (_ContentManagement--IsHighPriorityEvent_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::Details::SplitString_::_1_::dtor$0 @ 0x1800EFFEF (_CreativeFramework--SubscribedContentStore--Details--SplitString_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$3 @ 0x1800F07E7 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$7 @ 0x1800F082F (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$7.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions_::_1_::dtor$2 @ 0x1800F320B (_Windows--Services--TargetedContent--Internal--EnumerateTriggerStateTransitions_--_1_--dtor$2.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions_::_1_::dtor$4 @ 0x1800F322F (_Windows--Services--TargetedContent--Internal--EnumerateTriggerStateTransitions_--_1_--dtor$4.c)
 *     _CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative_::_1_::dtor$1 @ 0x1800F3346 (_CreativeFramework--DesktopSpotlightHelpers--DeleteDesktopSpotlightCreative_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$7 @ 0x1800F338E (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainerFromName_--_1_--dtor$7.c)
 *     _CreativeFramework::CommonHelper::StringUtils::SplitString_::_1_::dtor$0 @ 0x1800F72CE (_CreativeFramework--CommonHelper--StringUtils--SplitString_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<std::wstring>::~vector<std::wstring>(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        if ( *(_QWORD *)(v1 + 24) >= 8uLL )
          operator delete(*(void **)v1);
        *(_QWORD *)(v1 + 24) = 7LL;
        *(_QWORD *)(v1 + 16) = 0LL;
        *(_WORD *)v1 = 0;
        v1 += 32LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
