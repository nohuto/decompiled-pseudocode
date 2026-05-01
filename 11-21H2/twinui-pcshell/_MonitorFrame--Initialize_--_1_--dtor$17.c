/*
 * XREFs of _MonitorFrame::Initialize_::_1_::dtor$17 @ 0x18043521F
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall MonitorFrame::Initialize_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 48), (void *)0x130);
}
