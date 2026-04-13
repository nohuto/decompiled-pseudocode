/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x180052C94
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18005DDE0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x1800535F4 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005EED8 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005F0BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     _anonymous_namespace_::StartsWith @ 0x180065AE4 (_anonymous_namespace_--StartsWith.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18006C3DC (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_(_WORD *Src)
{
  __int64 v2; // rbx
  CreativeFramework::Health::details::BaseScenarioEvents *v3[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v4[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp-18h]

  v2 = -1LL;
  if ( CompareStringOrdinal(Src, -1, L"LockScreen", -1, 1) == 2
    || CompareStringOrdinal(Src, -1, L"LockScreenOverlay", -1, 1) == 2
    || CompareStringOrdinal(Src, -1, L"StartMenu", -1, 1) == 2 )
  {
    std::to_wstring(v4);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(v3, v4);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(v3[0]);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v3);
  }
  else
  {
    if ( !(unsigned __int8)anonymous_namespace_::StartsWith(Src) )
      return;
    v5 = 7LL;
    v4[2] = 0LL;
    LOWORD(v4[0]) = 0;
    if ( *Src )
    {
      do
        ++v2;
      while ( Src[v2] );
    }
    std::wstring::assign(v4, Src);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(v3, v4);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(v3[0]);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v3);
  }
  if ( v5 >= 8 )
    operator delete(v4[0]);
}
