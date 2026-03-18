/*
 * XREFs of NVMeReservedCompletionQueueCreate @ 0x1C0023B84
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C001AFEC (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     GetFreeReservedQueueIndex @ 0x1C001AE30 (GetFreeReservedQueueIndex.c)
 */

__int64 __fastcall NVMeReservedCompletionQueueCreate(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  int v4; // r12d
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v10; // r14
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rdx

  v3 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(_QWORD *)(a3 + 64);
  else
    v6 = *(_QWORD *)(a3 + 24);
  v7 = *(unsigned int *)(v6 + 36);
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  if ( FreeReservedQueueIndex == 0xFFFF )
    return 5LL;
  v10 = 6LL * FreeReservedQueueIndex;
  *(_WORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 24) = v4;
  *(_QWORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 16) = (unsigned int)(*(_DWORD *)(a1 + 200) * (2 * v4 + 1))
                                                    + *(_QWORD *)(a1 + 176)
                                                    + 4096LL;
  v11 = *(_QWORD *)(v6 + 44);
  if ( v11 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 824) + 48LL * FreeReservedQueueIndex) = v11;
  }
  else
  {
    v15 = *(unsigned __int16 *)(v6 + 56);
    if ( (_WORD)v15 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, 16 * v15);
      return 8LL;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 824) + 48LL * FreeReservedQueueIndex + 28) = *(_DWORD *)(v6 + 52);
  *(_WORD *)(*(_QWORD *)(a1 + 824) + 48LL * FreeReservedQueueIndex + 26) = *(_WORD *)(v6 + 56);
  *(_WORD *)(*(_QWORD *)(a1 + 824) + 48LL * FreeReservedQueueIndex + 32) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(*(_QWORD *)(a1 + 824) + 48LL * FreeReservedQueueIndex + 32)) & 1;
  *(_WORD *)(*(_QWORD *)(a1 + 824) + 48LL * FreeReservedQueueIndex + 32) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(*(_QWORD *)(a1 + 824) + 48LL * FreeReservedQueueIndex + 32)) & 2;
  v12 = *(void **)(a1 + 952);
  *(_BYTE *)(a1 + 867) = 0;
  memset(v12, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v13 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v13;
  *(_DWORD *)(a1 + 856) = 1;
  *(_BYTE *)(v13 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v14 = *(_QWORD *)(a1 + 952) + 4096LL;
  *(_BYTE *)v14 = 5;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 824) + 8 * v10);
  *(_WORD *)(v14 + 40) = v4;
  *(_WORD *)(v14 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 26) - 1;
  *(_DWORD *)(v14 + 44) ^= (*(_DWORD *)(v14 + 44) ^ (*(unsigned __int16 *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 32) >> 1)) & 1;
  *(_DWORD *)(v14 + 44) ^= ((unsigned __int8)*(_DWORD *)(v14 + 44) ^ (unsigned __int8)(2
                                                                                     * *(_WORD *)(*(_QWORD *)(a1 + 824)
                                                                                                + 8 * v10
                                                                                                + 32))) & 2;
  *(_WORD *)(v14 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 28);
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  if ( *(_BYTE *)(a1 + 867) == 1 )
  {
    v16 = *(_QWORD *)(a1 + 824);
    ++*(_WORD *)(a1 + 810);
    *(_QWORD *)(v16 + 8 * v10 + 40) = *(_QWORD *)(v6 + 60);
    memset((void *)(v7 + v6 + 28), 0, 0x68uLL);
    *(_QWORD *)(v7 + v6 + 36) = *(_QWORD *)(*(_QWORD *)(a1 + 824) + 8 * v10);
    *(_QWORD *)(v7 + v6 + 44) = *(_QWORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 8);
    *(_QWORD *)(v7 + v6 + 52) = *(_QWORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 16);
    *(_WORD *)(v7 + v6 + 60) = *(_WORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 24);
    *(_WORD *)(v7 + v6 + 62) = *(_WORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 26);
    *(_WORD *)(v7 + v6 + 68) ^= (*(_WORD *)(v7 + v6 + 68) ^ *(_WORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 32)) & 1;
    *(_WORD *)(v7 + v6 + 68) ^= ((unsigned __int8)*(_WORD *)(v7 + v6 + 68) ^ (unsigned __int8)*(_WORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 32)) & 2;
    *(_DWORD *)(v7 + v6 + 64) = *(_DWORD *)(*(_QWORD *)(a1 + 824) + 8 * v10 + 28);
  }
  else
  {
    return 10;
  }
  return v3;
}
