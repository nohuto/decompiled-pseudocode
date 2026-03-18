/*
 * XREFs of NVMeGetControllerIoCommandSetIdentify @ 0x1C001E558
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D910 (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1C0015040 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetControllerIoCommandSetIdentify(__int64 a1)
{
  __int64 v1; // rdi
  int i; // ecx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1936);
  LocalCommandReuse(a1, a1 + 944);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v4 = *(_QWORD *)(a1 + 1944);
  v5 = *(_QWORD *)(a1 + 1040) + 4096LL;
  *(_BYTE *)v5 = 6;
  *(_DWORD *)(v5 + 4) = -1;
  *(_QWORD *)(v5 + 24) = v4;
  *(_BYTE *)(v5 + 40) = 6;
  *(_DWORD *)(v5 + 42) = 0;
  *(_BYTE *)(v5 + 47) = 0;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  result = WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    *(_BYTE *)(a1 + 4352) = *(_BYTE *)v1;
    *(_BYTE *)(a1 + 4353) = *(_BYTE *)(v1 + 1);
    *(_BYTE *)(a1 + 4354) = *(_BYTE *)(v1 + 2);
    *(_BYTE *)(a1 + 4355) = *(_BYTE *)(v1 + 3);
    *(_DWORD *)(a1 + 4356) = *(_DWORD *)(v1 + 4);
    result = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(a1 + 4360) = result;
  }
  return result;
}
