/*
 * XREFs of _InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor$0 @ 0x18019F1E6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009CD5C (--1-$vector@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 */

void __fastcall InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::~vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>(*(_QWORD *)(a2 + 72));
  }
}
