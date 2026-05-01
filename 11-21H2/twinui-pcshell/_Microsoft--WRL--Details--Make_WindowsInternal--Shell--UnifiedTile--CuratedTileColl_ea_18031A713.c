/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser__::_1_::dtor$2 @ 0x18031A713
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 104), *(void **)(a2 + 96));
}
