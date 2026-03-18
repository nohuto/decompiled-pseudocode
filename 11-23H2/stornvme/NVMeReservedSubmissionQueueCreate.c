/*
 * XREFs of NVMeReservedSubmissionQueueCreate @ 0x1C0023954
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C0012F90 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedSubmissionQueueCreate(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v6; // si
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  int v16; // ecx
  __int64 v18; // r8

  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 64);
  else
    v8 = *(_QWORD *)(a2 + 24);
  v9 = v8 + *(unsigned int *)(v8 + 36);
  v10 = 6LL * a5;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 8 * v10 + 24) = a3;
  v11 = *(_DWORD *)(a1 + 208) * a3;
  v12 = 16LL * a6;
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 8 * v10 + 16) = (unsigned int)(2 * v11) + *(_QWORD *)(a1 + 184) + 4096LL;
  v13 = *(_QWORD *)(v8 + 16 * (a6 + 3LL) + 28);
  if ( v13 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5) = v13;
  }
  else
  {
    v16 = *(unsigned __int16 *)(v12 + v8 + 86);
    if ( (_WORD)v16 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, v16 << 6);
      return 8LL;
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 26) = *(_WORD *)(v12 + v8 + 86);
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 30) ^= (*(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 30) ^ *(_WORD *)(v12 + v8 + 88)) & 1;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 28) = a4;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 32) = *(unsigned __int8 *)(v12 + v8 + 84);
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v14 = *(_QWORD *)(a1 + 1040) + 4096LL;
  *(_BYTE *)v14 = 1;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5);
  *(_WORD *)(v14 + 40) = a3;
  *(_WORD *)(v14 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 26) - 1;
  v15 = *(_DWORD *)(v14 + 44) ^ (*(_DWORD *)(v14 + 44) ^ *(unsigned __int16 *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 30)) & 1;
  *(_DWORD *)(v14 + 44) = v15;
  *(_DWORD *)(v14 + 44) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2
                                                                        * *(_WORD *)(*(_QWORD *)(a1 + 896)
                                                                                   + 48LL * a5
                                                                                   + 32))) & 6;
  *(_WORD *)(v14 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 28);
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    ++*(_WORD *)(a1 + 888);
    v18 = 6LL * a6;
    *(_QWORD *)(v9 + 8 * v18 + 84) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5);
    *(_QWORD *)(v9 + 8 * v18 + 92) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 8);
    *(_QWORD *)(v9 + 8 * v18 + 100) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 16);
    *(_WORD *)(v9 + 8 * v18 + 108) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 24);
    *(_WORD *)(v9 + 8 * v18 + 110) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 26);
    *(_WORD *)(v9 + 8 * v18 + 114) ^= (*(_WORD *)(v9 + 48LL * a6 + 114) ^ *(_WORD *)(*(_QWORD *)(a1 + 896)
                                                                                   + 48LL * a5
                                                                                   + 30)) & 1;
    *(_WORD *)(v9 + 8 * v18 + 112) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 28);
    *(_WORD *)(v9 + 8 * v18 + 116) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 32);
    ++*(_WORD *)(v9 + 70);
  }
  else
  {
    return 9;
  }
  return v6;
}
