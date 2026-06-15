/*
 * XREFs of wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___ @ 0x1800CE3E8
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18004B210 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$2 @ 0x18007C04E (_AudioServerInitialize_Internal_--_1_--dtor$2.c)
 *     _s_adPublishApoTelemetry_::_1_::dtor$1 @ 0x18007C6B8 (_s_adPublishApoTelemetry_--_1_--dtor$1.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CF240 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800432B0 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___(
        __int64 a1)
{
  LPCRITICAL_SECTION v1; // rbx

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    v1 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    if ( LODWORD(v1[1].DebugInfo)-- == 1 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v1);
    LeaveCriticalSection(v1);
  }
}
