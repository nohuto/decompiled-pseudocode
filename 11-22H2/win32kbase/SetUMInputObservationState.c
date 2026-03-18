/*
 * XREFs of SetUMInputObservationState @ 0x1C01E8FEC
 * Callers:
 *     NtMITSetInputObservationState @ 0x1C01420D0 (NtMITSetInputObservationState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C01F2AFC (-SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z.c)
 */

__int64 __fastcall SetUMInputObservationState(int a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 MouseProcessor; // rax

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2082);
  if ( a1 != 1 || a2 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v7, v6, v8, v9);
  CBaseProcessor::SetUMInputObservationState(MouseProcessor, a3);
  return 0LL;
}
