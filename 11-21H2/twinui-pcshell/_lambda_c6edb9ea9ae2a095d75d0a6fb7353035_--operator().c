/*
 * XREFs of _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1800A7290
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___::_lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___ @ 0x1803C24F0 (wil--details--lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___--_lambda_call__lambda_c6ed.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A74D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf@@@details@wil@@Q.c)
 *     ?TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z @ 0x1800A77D4 (-TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 */

void __fastcall lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()(int **a1)
{
  int *v2; // r10
  LARGE_INTEGER v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rbp
  int *v6; // rsi
  __int64 v7; // r9
  int *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int *v12; // rax
  const __int64 *v13; // rdi
  unsigned __int16 *v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rcx
  wil::TraceLoggingProvider *v17; // rax
  __int64 v18; // rcx
  TaskFlowDataEngineTelemetry *v19; // rcx
  LARGE_INTEGER v20; // [rsp+40h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&v20);
  v2 = a1[1];
  v3 = v20;
  v4 = **a1;
  v5 = 1000000LL * (*(_QWORD *)&v2[2 * v4] - *(_QWORD *)v2) / v20.QuadPart;
  if ( v4 > 0 )
  {
    v6 = a1[2];
    v7 = 0LL;
    v8 = a1[3];
    while ( 1 )
    {
      v9 = *(_QWORD *)&v2[2 * v7 + 2] - *(_QWORD *)&v2[2 * v7];
      ++v7;
      v10 = 1000000 * v9;
      v11 = *(unsigned __int16 *)v8;
      v8 = (int *)((char *)v8 + 2);
      *(_QWORD *)&v6[2 * v11] = v10 / v3.QuadPart;
      if ( v7 >= v4 )
        break;
      v3 = v20;
    }
  }
  LOBYTE(v3.LowPart) = 3;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::FeatureImpl<__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf>::ReportUsage)(
    &`wil::Feature<__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf>::GetImpl'::`2'::impl,
    0LL,
    (LARGE_INTEGER)v3.QuadPart);
  v12 = a1[5];
  v13 = (const __int64 *)a1[2];
  v14 = (unsigned __int16 *)a1[4];
  v15 = *v12;
  v17 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                                       v16,
                                       _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v17, 0) )
  {
    wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
      v18,
      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupPerf_(v19, v5, *v14, v15, v13, 0);
  }
}
