/*
 * XREFs of sub_180025B9C @ 0x180025B9C
 * Callers:
 *     sub_1800E4BFD @ 0x1800E4BFD (sub_1800E4BFD.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180025B9C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
