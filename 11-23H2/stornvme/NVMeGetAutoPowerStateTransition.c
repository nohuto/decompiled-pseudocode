/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C001D8E0
 * Callers:
 *     NVMePowerInitialize @ 0x1C000FE54 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

_UNKNOWN **__fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  result = &retaddr;
  v5 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    result = (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 0x100u);
    if ( v5 )
    {
      NVMeZeroMemory(v5, 0x100u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4200LL) = v5;
      *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4208LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4240LL) = 256;
      v3 = *(_QWORD *)(a1 + 1040);
      *(_QWORD *)(v3 + 4120) = 0LL;
      *(_BYTE *)(v3 + 4096) = 10;
      *(_BYTE *)(v3 + 4136) = 12;
      *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeGetAutoPowerStateTransitionCompletion;
      ProcessCommand(a1, a1 + 952);
      Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
      WaitForCommandCompleteWithCustomTimeout(a1);
      return (_UNKNOWN **)NVMeFreeDmaBuffer(a1, 256LL, (__int64 *)&v5, 0LL);
    }
  }
  return result;
}
