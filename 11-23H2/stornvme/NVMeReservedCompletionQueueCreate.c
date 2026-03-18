/*
 * XREFs of NVMeReservedCompletionQueueCreate @ 0x1C00235A4
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C0012F90 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     GetFreeReservedQueueIndex @ 0x1C0012C24 (GetFreeReservedQueueIndex.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedCompletionQueueCreate(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  int v4; // r13d
  __int64 v6; // rdi
  __int64 v7; // r14
  void *v8; // r12
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v11; // rsi
  _WORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rdx

  v3 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(_QWORD *)(a3 + 64);
  else
    v6 = *(_QWORD *)(a3 + 24);
  v7 = *(unsigned int *)(v6 + 36);
  v8 = (void *)(v7 + v6 + 28);
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  if ( FreeReservedQueueIndex == 0xFFFF )
    return 5LL;
  v11 = 6LL * FreeReservedQueueIndex;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 24) = v4;
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 16) = (unsigned int)(*(_DWORD *)(a1 + 208) * (2 * v4 + 1))
                                                    + *(_QWORD *)(a1 + 184)
                                                    + 4096LL;
  v12 = (_WORD *)(v6 + 56);
  v13 = *(_QWORD *)(v6 + 44);
  if ( v13 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex) = v13;
  }
  else
  {
    v14 = (unsigned __int16)*v12;
    if ( (_WORD)v14 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, 16 * v14);
      return 8LL;
    }
    v8 = (void *)(v7 + v6 + 28);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 28) = *(_DWORD *)(v6 + 52);
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 26) = *v12;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32)) & 1;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32)) & 2;
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v15 = *(_QWORD *)(a1 + 1040) + 4096LL;
  *(_BYTE *)v15 = 5;
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v11);
  *(_WORD *)(v15 + 40) = v4;
  *(_WORD *)(v15 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 26) - 1;
  v16 = *(_DWORD *)(v15 + 44) ^ (*(_DWORD *)(v15 + 44) ^ (*(unsigned __int16 *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 32) >> 1)) & 1;
  *(_DWORD *)(v15 + 44) = v16;
  *(_DWORD *)(v15 + 44) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(2
                                                                        * *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 32))) & 2;
  *(_WORD *)(v15 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 28);
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    v17 = *(_QWORD *)(a1 + 904);
    ++*(_WORD *)(a1 + 890);
    *(_QWORD *)(v17 + 8 * v11 + 40) = *(_QWORD *)(v6 + 60);
    memset(v8, 0, 0x68uLL);
    *(_QWORD *)(v7 + v6 + 36) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v11);
    *(_QWORD *)(v7 + v6 + 44) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 8);
    *(_QWORD *)(v7 + v6 + 52) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 16);
    *(_WORD *)(v7 + v6 + 60) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 24);
    *(_WORD *)(v7 + v6 + 62) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 26);
    *(_WORD *)(v7 + v6 + 68) ^= (*(_WORD *)(v7 + v6 + 68) ^ *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 32)) & 1;
    *(_WORD *)(v7 + v6 + 68) ^= (*(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 32) ^ *(_WORD *)(v7 + v6 + 68)) & 2;
    *(_DWORD *)(v7 + v6 + 64) = *(_DWORD *)(*(_QWORD *)(a1 + 904) + 8 * v11 + 28);
  }
  else
  {
    return 10;
  }
  return v3;
}
