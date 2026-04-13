/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x18004CFC8
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x18004C834 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CCBC (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CDC0 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_18004CDC0.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CEC4 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_18004CEC4.c)
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004EA14 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x180051928 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051B10 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180059550 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     _anonymous_namespace_::StartsWith @ 0x18005EC50 (_anonymous_namespace_--StartsWith.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___(
        LPCWCH lpString1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-29h]
  _BYTE v16[16]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+60h] [rbp-9h]
  _BYTE v19[16]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v20[16]; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v21[32]; // [rsp+88h] [rbp+1Fh] BYREF

  v17 = a2;
  if ( CompareStringOrdinal(lpString1, -1, L"LockScreen", -1, 1) == 2 )
  {
    v4 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           &v14,
           a2);
    CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(v4);
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    v5 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           &v14,
           a2);
    CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(v5);
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"StartMenu", -1, 1) == 2 )
  {
    v6 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           &v14,
           a2);
    CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(v6);
  }
  else if ( (unsigned __int8)anonymous_namespace_::StartsWith(lpString1) )
  {
    v7 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           v19,
           a2);
    v18 = v7;
    std::wstring::wstring(v21, lpString1);
    v8 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           v20,
           v7);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(&v14, v21);
    v9 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           v16,
           v8);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
      v14,
      v9);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    v11 = *(std::_Ref_count_base **)(v8 + 8);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    v12 = *(std::_Ref_count_base **)(v7 + 8);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    LOBYTE(v10) = 1;
    std::wstring::_Tidy(v21, v10, 0LL);
  }
  v13 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
