/*
 * XREFs of _TaskViewHost::Show_::_1_::dtor$11 @ 0x1802C3307
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewHost::Show_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 96), (void *)0xE8);
}
