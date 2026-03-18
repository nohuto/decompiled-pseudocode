/*
 * XREFs of NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001E09C
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001DEA4 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C00110C8 (BuildGetLogPageCommandForTelemetryLog.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryHeader(__int64 a1, void *a2, __int64 *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  int v9; // [rsp+28h] [rbp-30h]

  memset(a2, 0, 0x200uLL);
  LocalCommandReuse(a1, a1 + 944);
  v6 = *(_QWORD *)(a1 + 1008);
  LOBYTE(v7) = 8;
  *(_BYTE *)(v6 + 4253) |= 3u;
  *(_WORD *)(v6 + 4244) = 0;
  BuildGetLogPageCommandForTelemetryLog(a1, v6, v7, 0x200u, *a3, v9, 0LL, 1, 1u);
  *(_BYTE *)(v6 + 4253) |= 4u;
  *(_QWORD *)(v6 + 4200) = a2;
  *(_QWORD *)(v6 + 4208) = *a3;
  *(_DWORD *)(v6 + 4240) = 512;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 955) != 1 ? 0xC1000001 : 0;
}
