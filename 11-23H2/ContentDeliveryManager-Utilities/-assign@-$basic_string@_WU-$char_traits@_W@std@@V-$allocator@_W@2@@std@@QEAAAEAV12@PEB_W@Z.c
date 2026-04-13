/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180096D2C
 * Callers:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W_N11100000@Z @ 0x1800A9CCC (--0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W_N11100000@Z.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800B6CC8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800C0B48 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ResolveAltRatings@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800C0E20 (-ResolveAltRatings@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800C0F60 (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CAB98 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006492C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 */

__int64 __fastcall std::wstring::assign(__int64 a1, _WORD *a2)
{
  std::char_traits<wchar_t>::length(a2);
  return std::wstring::assign(a1);
}
