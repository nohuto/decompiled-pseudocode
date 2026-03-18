/*
 * XREFs of SetUMInputObservationState @ 0x1C01E86C4
 * Callers:
 *     NtMITSetInputObservationState @ 0x1C0155B00 (NtMITSetInputObservationState.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetUMInputObservationState(int a1, int a2, __int32 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 MouseProcessor; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( a1 != 1 || a2 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  _InterlockedExchange((volatile __int32 *)(MouseProcessor + 8), a3);
  return 0LL;
}
