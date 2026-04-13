/*
 * XREFs of ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x18009F998
 * Callers:
 *     ??1?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x18009B230 (--1-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$bas.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x18009CBEC (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x18009D810 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800BAF7C (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?_Reallocate@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x1800BBC34 (-_Reallocate@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$alloca.c)
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800BBF9C (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 * Callees:
 *     ??_G?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAPEAXI@Z @ 0x18009BC14 (--_G-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<std::wstring>::_Destroy(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = std::wstring::`scalar deleting destructor'(v4);
      v4 += 4;
    }
    while ( v4 != a3 );
  }
  return result;
}
