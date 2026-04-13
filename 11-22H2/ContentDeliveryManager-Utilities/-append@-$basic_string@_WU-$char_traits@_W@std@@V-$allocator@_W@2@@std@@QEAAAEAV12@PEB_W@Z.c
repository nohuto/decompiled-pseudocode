/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18009FEE8
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x18009D860 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x1800A1ECC (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800ADB90 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800BA6CC (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800BF8F4 (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800C09C8 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006497C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 */

__int64 __fastcall std::wstring::append(__int64 a1, _WORD *a2)
{
  __int64 v4; // rax

  v4 = std::char_traits<wchar_t>::length(a2);
  return std::wstring::append(a1, a2, v4);
}
