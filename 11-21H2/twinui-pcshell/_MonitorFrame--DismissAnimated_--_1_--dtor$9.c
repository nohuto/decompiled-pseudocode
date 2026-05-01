/*
 * XREFs of _MonitorFrame::DismissAnimated_::_1_::dtor$9 @ 0x1804338A7
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall MonitorFrame::DismissAnimated_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), (void *)0x130);
}
