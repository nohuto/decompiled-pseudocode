/*
 * XREFs of _MonitorFrame::DismissAnimated_::_1_::dtor$3 @ 0x18043383E
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall MonitorFrame::DismissAnimated_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 200), (void *)0x130);
}
