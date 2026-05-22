/*
 * XREFs of ??1?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800B42D0
 * Callers:
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$239 @ 0x18006D4A0 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$239.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$3 @ 0x18006F017 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$11 @ 0x18006F0DF (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$11.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x1800B3D4C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
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
