/*
 * XREFs of sub_180044F48 @ 0x180044F48
 * Callers:
 *     sub_1800309BC @ 0x1800309BC (sub_1800309BC.c)
 *     sub_180034540 @ 0x180034540 (sub_180034540.c)
 *     sub_1800345D0 @ 0x1800345D0 (sub_1800345D0.c)
 *     sub_18006C8B4 @ 0x18006C8B4 (sub_18006C8B4.c)
 *     sub_180103D90 @ 0x180103D90 (sub_180103D90.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180044F48(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
