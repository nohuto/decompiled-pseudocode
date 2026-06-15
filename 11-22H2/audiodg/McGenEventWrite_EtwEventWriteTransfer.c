/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x140037F7C
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x140039050 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pii_EtwEventWriteTransfer @ 0x1400390B2 (McTemplateU0pii_EtwEventWriteTransfer.c)
 *     McTemplateU0pit_EtwEventWriteTransfer @ 0x14003913C (McTemplateU0pit_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1400391BC (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x140039230 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 *     McTemplateU0pxxxixqxxx_EtwEventWriteTransfer @ 0x1400392B2 (McTemplateU0pxxxixqxxx_EtwEventWriteTransfer.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14005277C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x140060880 (wil--details--lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___--_lambda_call__lambda_c4ca.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x140061298 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     McTemplateU0jjt_EtwEventWriteTransfer @ 0x14006E548 (McTemplateU0jjt_EtwEventWriteTransfer.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x140074170 (McTemplateU0pi_EtwEventWriteTransfer.c)
 *     McTemplateU0pqx_EtwEventWriteTransfer @ 0x1400741E8 (McTemplateU0pqx_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_1400CE048;
  v6 = 0;
  if ( qword_1400CE048 )
  {
    *(_QWORD *)a5 = qword_1400CE048;
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
  return EtwEventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2);
}
