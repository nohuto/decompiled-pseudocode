/*
 * XREFs of MiCreatePageChains @ 0x140263558
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140265D40 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x140982F64 (MiFindLargePageMemory.c)
 * Callees:
 *     MiGetOptimalProcessorWriteCount @ 0x140263644 (MiGetOptimalProcessorWriteCount.c)
 *     MiGetClosestNodeWithProcessors @ 0x14026367C (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 */

__int64 __fastcall MiCreatePageChains(__int64 a1, int a2)
{
  unsigned int ClosestNodeWithProcessors; // ebx
  int v4; // edi
  USHORT v5; // ax
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 result; // rax
  _QWORD *v10; // rcx
  struct _GROUP_AFFINITY v11; // xmm0
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF
  USHORT Count; // [rsp+60h] [rbp+18h] BYREF

  Affinity = 0LL;
  ClosestNodeWithProcessors = 0;
  Count = 0;
  v4 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors();
      KeQueryNodeActiveAffinity(ClosestNodeWithProcessors, &Affinity, &Count);
      v5 = Count;
      if ( Count )
        break;
      if ( ++v4 >= (unsigned int)(unsigned __int16)KeNumberNodes )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v5 = 2;
    Count = 2;
  }
  v6 = v5;
  v7 = MiGetOptimalProcessorWriteCount(ClosestNodeWithProcessors);
  if ( (unsigned int)v6 > v7 )
    v6 = v7;
  v8 = (unsigned int)v6;
  result = MiAllocatePool(64LL, 48 * v6 + 88, 1834641741LL);
  if ( result )
  {
    if ( (_DWORD)v6 )
    {
      v10 = (_QWORD *)(result + 120);
      do
      {
        v10[1] = v10;
        *v10 = v10;
        v10 += 6;
        --v8;
      }
      while ( v8 );
    }
    v11 = Affinity;
    *(_DWORD *)(result + 8) = v6;
    *(_DWORD *)(result + 24) = ClosestNodeWithProcessors;
    *(struct _GROUP_AFFINITY *)(result + 32) = v11;
    *(_DWORD *)(result + 4) = a2;
    *(_DWORD *)(result + 56) = 1;
  }
  return result;
}
