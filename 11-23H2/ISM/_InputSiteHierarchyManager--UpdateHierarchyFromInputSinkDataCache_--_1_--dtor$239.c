/*
 * XREFs of _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$239 @ 0x18006D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800B42D0 (--1-$vector@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 */

__int64 __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor_239(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 0x10;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~0x10u;
    return std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::~vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>(a2 + 96);
  }
  return result;
}
