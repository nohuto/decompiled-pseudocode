/*
 * XREFs of _XamlAllUpViewHost::Show_::_1_::dtor$6 @ 0x1804389B6
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAllUpViewHost::Show_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 88), (void *)0xE8);
}
