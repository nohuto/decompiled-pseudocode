/*
 * XREFs of _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$1 @ 0x180432DCB
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 176), (void *)0xA0);
}
