/*
 * XREFs of _XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor$10 @ 0x180601EFD
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 256), 0LL);
}
