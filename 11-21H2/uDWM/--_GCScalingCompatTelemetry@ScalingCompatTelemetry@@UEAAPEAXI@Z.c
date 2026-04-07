/*
 * XREFs of ??_GCScalingCompatTelemetry@ScalingCompatTelemetry@@UEAAPEAXI@Z @ 0x180109CA0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CAXXZ @ 0x180109A30 (-_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180093F8C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ScalingCompatTelemetry::CScalingCompatTelemetry *__fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::`scalar deleting destructor'(
        ScalingCompatTelemetry::CScalingCompatTelemetry *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  wil::TraceLoggingProvider::~TraceLoggingProvider(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, ScalingCompatTelemetry::CScalingCompatTelemetry *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
