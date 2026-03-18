/*
 * XREFs of ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002D8C0
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0009EC0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A430 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C003B2A4 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002D918 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AddPendingTermination(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  KIRQL v4; // bl

  v4 = KfRaiseIrql(2u);
  VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(this, a2);
  KeLowerIrql(v4);
}
