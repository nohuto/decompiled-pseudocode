/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C001C750
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeConfigAsyncEvent(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  int v4; // ecx

  v1 = *(_QWORD *)(a1 + 1840);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 1040);
    v4 = *(_DWORD *)(a1 + 68) & (*(_DWORD *)(v1 + 92) & 0x300 | ((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 4240) = v4;
    *(_DWORD *)(v3 + 4140) = v4;
    *(_BYTE *)(v3 + 4096) = 9;
    *(_BYTE *)(v3 + 4136) = 11;
    ProcessCommand(a1, a1 + 952);
    Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
    WaitForCommandCompleteWithCustomTimeout(a1);
  }
}
