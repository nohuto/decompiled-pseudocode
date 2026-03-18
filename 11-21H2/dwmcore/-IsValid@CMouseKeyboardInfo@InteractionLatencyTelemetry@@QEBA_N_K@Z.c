/*
 * XREFs of ?IsValid@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABCC
 * Callers:
 *     ?IsStartInertia@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001A1DC (-IsStartInertia@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABA0 (-IsNewInteraction@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     <none>
 */

char __fastcall InteractionLatencyTelemetry::CMouseKeyboardInfo::IsValid(
        InteractionLatencyTelemetry::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  char v3; // r8
  unsigned int v4; // ecx

  v3 = 1;
  if ( a2 < *((_QWORD *)this + 2) || ((*(_DWORD *)this - 522) & 0xFFFFFFFB) != 0 || a2 - *((_QWORD *)this + 2) > 4 )
  {
    v4 = *(_DWORD *)this;
    if ( (v4 < 0x100 || v4 > 0x101 && v4 - 513 > 1) && ((v4 - 522) & 0xFFFFFFFB) != 0 )
      return 0;
    if ( a2 - *((_QWORD *)this + 2) > 0xA )
      return 0;
  }
  return v3;
}
