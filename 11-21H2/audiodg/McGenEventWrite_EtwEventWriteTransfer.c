/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x14001B5B8
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004CBC (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x140019D50 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     McTemplateU0pit_EtwEventWriteTransfer @ 0x14002C4A8 (McTemplateU0pit_EtwEventWriteTransfer.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x14002DF88 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x14002E02C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x14002E134 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1400517EC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x14005C844 (wil--details--lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___--_lambda_call__lambda_c4ca.c)
 *     McTemplateU0jjt_EtwEventWriteTransfer @ 0x140066C90 (McTemplateU0jjt_EtwEventWriteTransfer.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x14006BBCC (McTemplateU0pi_EtwEventWriteTransfer.c)
 *     McTemplateU0pii_EtwEventWriteTransfer @ 0x14006BC44 (McTemplateU0pii_EtwEventWriteTransfer.c)
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x14006BCD0 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 *     McTemplateU0pqx_EtwEventWriteTransfer @ 0x14006BD54 (McTemplateU0pqx_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_1400C0058;
  v6 = 0;
  if ( qword_1400C0058 )
  {
    *(_QWORD *)a5 = qword_1400C0058;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, a4, a5);
}
