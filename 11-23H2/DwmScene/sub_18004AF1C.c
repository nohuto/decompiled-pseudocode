/*
 * XREFs of sub_18004AF1C @ 0x18004AF1C
 * Callers:
 *     sub_18004B110 @ 0x18004B110 (sub_18004B110.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18004AF1C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  return result;
}
