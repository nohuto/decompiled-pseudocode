/*
 * XREFs of ??$AddMeasurement@N@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00N@Z @ 0x18002A6C0
 * Callers:
 *     ?LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ @ 0x18002C56C (-LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??$GetMeasurementTraceValue@N@PerformanceLogger@Utils@Spectre@@CANN@Z @ 0x18002A858 (--$GetMeasurementTraceValue@N@PerformanceLogger@Utils@Spectre@@CANN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 Spectre::Utils::PerformanceLogger::AddMeasurement<double>(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rbx
  _QWORD *MeasurementTrace; // rax
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+70h] [rbp+28h]
  va_list va1; // [rsp+78h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a1 + 48LL);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[2] + 8LL))(a1[2], (__int64 *)va);
    MeasurementTrace = (_QWORD *)Spectre::Utils::PerformanceLogger::GetMeasurementTraceValue<double>();
    return v6(v5, v10, *MeasurementTrace);
  }
  return result;
}
