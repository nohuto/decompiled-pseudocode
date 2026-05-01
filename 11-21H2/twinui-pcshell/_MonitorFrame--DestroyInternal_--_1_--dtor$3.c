/*
 * XREFs of _MonitorFrame::DestroyInternal_::_1_::dtor$3 @ 0x1804334D4
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall MonitorFrame::DestroyInternal_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 112), (void *)0x130);
}
