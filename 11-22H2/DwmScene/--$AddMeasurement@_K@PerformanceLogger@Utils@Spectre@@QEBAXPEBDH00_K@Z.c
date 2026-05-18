/*
 * XREFs of ??$AddMeasurement@_K@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_K@Z @ 0x18002A78C
 * Callers:
 *     ?LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ @ 0x18002C56C (-LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ.c)
 *     ?UpdateStatistics@Engine@1Spectre@@IEAAXXZ @ 0x180037D40 (-UpdateStatistics@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?GetMeasurementTraceValue@PerformanceLogger@Utils@Spectre@@CA?B_K_K@Z @ 0x180020328 (-GetMeasurementTraceValue@PerformanceLogger@Utils@Spectre@@CA-B_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Utils::PerformanceLogger::AddMeasurement<unsigned __int64>(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, unsigned __int64, __int64, __int64, int); // rbx
  unsigned __int64 MeasurementTraceValue; // rax
  __int64 v14; // r8
  char v15; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v11 = *a1;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64, __int64, __int64, int))(*(_QWORD *)*a1 + 32LL);
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)a1[2] + 8LL))(a1[2], &v15);
    MeasurementTraceValue = Spectre::Utils::PerformanceLogger::GetMeasurementTraceValue(a6);
    return v12(v11, a5, v14, MeasurementTraceValue, a4, a2, a3);
  }
  return result;
}
