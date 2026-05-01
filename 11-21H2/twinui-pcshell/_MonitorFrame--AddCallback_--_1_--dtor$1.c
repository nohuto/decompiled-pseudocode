/*
 * XREFs of _MonitorFrame::AddCallback_::_1_::dtor$1 @ 0x1804311B1
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall MonitorFrame::AddCallback_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 112), (void *)0x130);
}
