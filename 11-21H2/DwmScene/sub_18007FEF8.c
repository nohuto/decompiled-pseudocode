/*
 * XREFs of sub_18007FEF8 @ 0x18007FEF8
 * Callers:
 *     sub_18002CC70 @ 0x18002CC70 (sub_18002CC70.c)
 *     sub_18002DB80 @ 0x18002DB80 (sub_18002DB80.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 */

void **__fastcall sub_18007FEF8(__int64 a1)
{
  char **v2; // rcx
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = *(char ***)(a1 + 8);
  if ( v2 )
  {
    sub_18002CC9C(v2, *(char ***)(a1 + 16));
    sub_180010884(*(char **)(a1 + 8), 8 * ((__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8)) >> 3));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  result = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  return result;
}
