/*
 * XREFs of ??$emplace_back@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAA?A_TAEBM@Z @ 0x1800A0158
 * Callers:
 *     ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0 (-RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<float>::emplace_back<float const &>(__int64 a1, _DWORD *a2)
{
  char *result; // rax

  result = *(char **)(a1 + 8);
  if ( result == *(char **)(a1 + 16) )
    return std::vector<float>::_Emplace_reallocate<float const &>((void **)a1, *(_QWORD *)(a1 + 8), a2);
  *(_DWORD *)result = *a2;
  *(_QWORD *)(a1 + 8) = result + 4;
  return result;
}
