/*
 * XREFs of _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$114 @ 0x1800576F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009CD5C (--1-$vector@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 */

__int64 __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor_114(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~4u;
    return std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::~vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>(a2 + 104);
  }
  return result;
}
