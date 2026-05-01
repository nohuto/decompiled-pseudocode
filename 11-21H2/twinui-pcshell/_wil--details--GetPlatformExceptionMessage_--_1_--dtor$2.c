/*
 * XREFs of _wil::details::GetPlatformExceptionMessage_::_1_::dtor$2 @ 0x180222581
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall wil::details::GetPlatformExceptionMessage_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 56), (void *)0x38);
}
