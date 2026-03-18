/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C001F574
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C0010F6C (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeGetTemperatureThreshold(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(a1 + 228) = -1;
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)(a1 + 1040) + 4096LL, 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 952);
    Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
    WaitForCommandCompleteWithCustomTimeout(a1);
  }
}
