/*
 * XREFs of _XamlExplorerHostShellComponent::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180216F02
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlExplorerHostShellComponent::RuntimeClassInitialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 32), (void *)0x88);
}
