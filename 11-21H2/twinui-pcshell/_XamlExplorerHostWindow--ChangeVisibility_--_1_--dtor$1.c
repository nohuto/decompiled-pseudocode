/*
 * XREFs of _XamlExplorerHostWindow::ChangeVisibility_::_1_::dtor$1 @ 0x18042901F
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlExplorerHostWindow::ChangeVisibility_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 112), (void *)0x130);
}
