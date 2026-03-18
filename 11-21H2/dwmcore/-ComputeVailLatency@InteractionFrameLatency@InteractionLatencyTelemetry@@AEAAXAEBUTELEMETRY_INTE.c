/*
 * XREFs of ?ComputeVailLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@AEAAXAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E2450
 * Callers:
 *     ?ComputeLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAXAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E2370 (-ComputeLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAXAEBUTELEMETRY_INTERACT.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18026C340 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionFrameLatency::ComputeVailLatency(
        InteractionLatencyTelemetry::InteractionFrameLatency *this,
        const struct TELEMETRY_INTERACTION_FRAME_TIMES *a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // r10
  __int64 v9; // r11
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx

  if ( !*((_QWORD *)a2 + 17) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  v4 = qword_1803D32C0;
  v5 = qword_1803D32C0 / 0xF4240uLL;
  *((_DWORD *)this + 13) = (*((_QWORD *)a2 + 9) - *((_QWORD *)a2 + 8)) / (qword_1803D32C0 / 0xF4240uLL);
  v6 = *((_QWORD *)a2 + 10);
  if ( !v6 )
    v6 = *((_QWORD *)a2 + 11);
  *((_DWORD *)this + 14) = (v6 - *((_QWORD *)a2 + 9)) / v5;
  if ( *((_QWORD *)a2 + 10) )
    *((_DWORD *)this + 15) = (*((_QWORD *)a2 + 11) - *((_QWORD *)a2 + 10)) / v5;
  *((_DWORD *)this + 16) = (*((_QWORD *)a2 + 12) - *((_QWORD *)a2 + 11)) / v5;
  v7 = *((_QWORD *)a2 + 14);
  if ( !v7 )
    v7 = *((_QWORD *)a2 + 15);
  *((_DWORD *)this + 17) = (v7 - *((_QWORD *)a2 + 12)) / v5;
  if ( *((_QWORD *)a2 + 14) )
    *((_DWORD *)this + 18) = (*((_QWORD *)a2 + 15) - *((_QWORD *)a2 + 14)) / v5;
  v8 = (_DWORD *)((char *)this + 84);
  v9 = 4LL;
  *((_DWORD *)this + 19) = (*((_QWORD *)a2 + 16) - *((_QWORD *)a2 + 15)) / v5;
  v10 = (_QWORD *)((char *)a2 + 144);
  *((_DWORD *)this + 20) = (*((_QWORD *)a2 + 18) - *((_QWORD *)a2 + 16)) / v5;
  do
  {
    v11 = (v10[1] - *v10) / v5;
    ++v10;
    *v8++ = v11;
    --v9;
  }
  while ( v9 );
  v12 = *((_QWORD *)a2 + 24);
  if ( v12 )
  {
    *((_DWORD *)this + 25) = (*((_QWORD *)a2 + 25) - v12) / v5;
    *((_DWORD *)this + 26) = (*((_QWORD *)a2 + 20) - *((_QWORD *)a2 + 25)) / v5;
  }
  *((_DWORD *)this + 27) = (*((_QWORD *)a2 + 22) - *((_QWORD *)a2 + 18)) / (v4 / 0x3E8);
}
