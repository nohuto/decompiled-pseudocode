/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x1C0024004
 * Callers:
 *     NVMePowerInitialize @ 0x1C000FE54 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v4; // rcx
  int v5; // eax

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v4 = *(_QWORD *)(a1 + 1040);
    v5 = (*(_DWORD *)(v4 + 4140) ^ v2) & 1;
    *(_BYTE *)(v4 + 4096) = 9;
    *(_DWORD *)(v4 + 4140) ^= v5;
    *(_BYTE *)(v4 + 4136) = 12;
    ProcessCommand(a1, a1 + 952);
    Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
    WaitForCommandCompleteWithCustomTimeout(a1);
  }
}
