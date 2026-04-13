/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18004D19C
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x18004C834 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$SetEventValue@$08$$V@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXXZ @ 0x18004EA60 (--$SetEventValue@$08$$V@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x180051928 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180059414 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180059550 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     _anonymous_namespace_::StartsWith @ 0x18005EC50 (_anonymous_namespace_--StartsWith.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x1800653AC (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_9_(LPCWCH lpString1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v5; // [rsp+38h] [rbp-38h]
  _BYTE v6[32]; // [rsp+40h] [rbp-30h] BYREF

  if ( CompareStringOrdinal(lpString1, -1, L"LockScreen", -1, 1) == 2 )
  {
    std::to_wstring(v6, 1LL);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v4, v6);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<9,>(v4);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    std::to_wstring(v6, 2LL);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v4, v6);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<9,>(v4);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"StartMenu", -1, 1) == 2 )
  {
    std::to_wstring(v6, 3LL);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v4, v6);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<9,>(v4);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  else
  {
    result = anonymous_namespace_::StartsWith(lpString1);
    if ( !(_BYTE)result )
      return result;
    std::wstring::wstring(v6, lpString1);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(&v4, v6);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<9,>(v4);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  LOBYTE(v2) = 1;
  return std::wstring::_Tidy(v6, v2, 0LL);
}
