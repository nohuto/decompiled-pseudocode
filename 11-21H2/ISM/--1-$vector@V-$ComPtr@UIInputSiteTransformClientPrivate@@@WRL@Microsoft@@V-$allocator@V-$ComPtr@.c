/*
 * XREFs of ??1?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009CD5C
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$3 @ 0x1800555BF (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$11 @ 0x180055687 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$11.c)
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$114 @ 0x1800576F0 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$114.c)
 *     _std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x180057D70 (_std--_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAG.c)
 *     _InputSite::GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__::_1_::dtor$0 @ 0x180057D90 (_InputSite--GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__--_1_--dtor$0.c)
 *     _InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor$0 @ 0x18019F1E6 (_InputSite--GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$2 @ 0x18019F972 (_TestCommands--RequestHitTest_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x18009C7C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::~vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(
      v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
