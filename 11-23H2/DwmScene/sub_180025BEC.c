/*
 * XREFs of sub_180025BEC @ 0x180025BEC
 * Callers:
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_180025EB0 @ 0x180025EB0 (sub_180025EB0.c)
 * Callees:
 *     sub_180025A18 @ 0x180025A18 (sub_180025A18.c)
 *     sub_1800E0DB0 @ 0x1800E0DB0 (sub_1800E0DB0.c)
 */

void **__fastcall sub_180025BEC(__int64 a1)
{
  void **result; // rax

  sub_180025A18((void **)(a1 + 24));
  sub_1800E0DB0(a1 + 8);
  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
