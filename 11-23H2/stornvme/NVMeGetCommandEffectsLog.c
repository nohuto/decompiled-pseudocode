/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C001DD10
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010FA4 (BuildGetLogPageCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeGetCommandEffectsLog(__int64 a1)
{
  __int64 v1; // rbp
  void **v3; // rdi
  void *v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 1040);
  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) && (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 261LL) & 2) != 0 )
  {
    v3 = (void **)(a1 + 3992);
    v4 = *(void **)(a1 + 3992);
    if ( v4 )
    {
      v6 = *(_QWORD *)(a1 + 4224);
      if ( !v6 )
        return;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, 0x1000u);
      v4 = *v3;
      if ( !*v3 )
        return;
      *(_QWORD *)(a1 + 4224) = 0LL;
    }
    memset(v4, 0, 0x1000uLL);
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(v1 + 4253) |= 3u;
    *(_WORD *)(v1 + 4244) = 0;
    LOBYTE(v5) = 5;
    BuildGetLogPageCommand(a1, v1, v5, 0x1000u, v6, -1, 0LL, 0);
    *(_BYTE *)(v1 + 4253) |= 4u;
    *(_QWORD *)(v1 + 4200) = *v3;
    *(_QWORD *)(v1 + 4208) = v6;
    *(_DWORD *)(v1 + 4240) = 4096;
    ProcessCommand(a1, a1 + 952);
    Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
    WaitForCommandCompleteWithCustomTimeout(a1);
  }
}
