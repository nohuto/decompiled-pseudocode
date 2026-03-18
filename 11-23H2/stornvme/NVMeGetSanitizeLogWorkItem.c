/*
 * XREFs of NVMeGetSanitizeLogWorkItem @ 0x1C0016830
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     NVMeRequestComplete @ 0x1C00037DC (NVMeRequestComplete.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010FA4 (BuildGetLogPageCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetSanitizeLogWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r8d
  __int64 SrbExtension; // rax
  __int64 v8; // rdx
  void *v10; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+48h]

  LocalCommandReuse(a1, a1 + 944);
  v10 = 0LL;
  v11 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( v10 )
  {
    memset(v10, 0, 0x200uLL);
    v5 = *(_QWORD *)(a1 + 1040);
    LOBYTE(v6) = -127;
    *(_BYTE *)(v5 + 4253) |= 3u;
    *(_WORD *)(v5 + 4244) = 0;
    BuildGetLogPageCommand(a1, v5, v6, 0x200u, v11, 0, 0LL, 0);
    *(_BYTE *)(v5 + 4253) |= 4u;
    *(_QWORD *)(v5 + 4224) = NVMeSanitizeRecoverCompletionRoutine;
    *(_QWORD *)(v5 + 4200) = v10;
    *(_QWORD *)(v5 + 4208) = v11;
    *(_DWORD *)(v5 + 4240) = 512;
    ProcessCommand(a1, a1 + 952);
    Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
    WaitForCommandCompleteWithCustomTimeout(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 955) = 38;
  }
  if ( *(_BYTE *)(a1 + 955) != 1 )
  {
    if ( *(_QWORD *)(a1 + 4336) )
    {
      SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4336));
      *(_BYTE *)(SrbExtension + 4253) |= 8u;
      *(_BYTE *)(v8 + 3) = 4;
      NVMeRequestComplete(a1);
      *(_QWORD *)(a1 + 4336) = 0LL;
    }
    *(_DWORD *)(a1 + 4344) &= ~1u;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL);
  }
  if ( v10 )
    NVMeFreeDmaBuffer(a1, 512LL, (__int64 *)&v10, v11);
  return StorPortExtendedFunction(31LL, a1, a3);
}
