/*
 * XREFs of ??$AddMeasurement@_J@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00_J@Z @ 0x18002DCB4
 * Callers:
 *     ?LogInstanceCounts@Engine@1Spectre@@AEBAXXZ @ 0x180034F18 (-LogInstanceCounts@Engine@1Spectre@@AEBAXXZ.c)
 * Callees:
 *     ??$GetMeasurementTraceValue@_J@PerformanceLogger@Utils@Spectre@@CAN_J@Z @ 0x18002E018 (--$GetMeasurementTraceValue@_J@PerformanceLogger@Utils@Spectre@@CAN_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 Spectre::Utils::PerformanceLogger::AddMeasurement<__int64>(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rbx
  _QWORD *MeasurementTrace; // rax
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+70h] [rbp+28h]
  __int64 v11; // [rsp+78h] [rbp+30h]
  va_list va1; // [rsp+80h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a1 + 48LL);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[2] + 8LL))(a1[2], (__int64 *)va);
    MeasurementTrace = (_QWORD *)Spectre::Utils::PerformanceLogger::GetMeasurementTraceValue<__int64>(v11);
    return v6(v5, v10, *MeasurementTrace);
  }
  return result;
}
