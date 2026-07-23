/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x1402AD4E0
 * Callers:
 *     CcWriteBehind @ 0x14029B7E8 (CcWriteBehind.c)
 *     CcFlushCachePriv @ 0x14029CFC4 (CcFlushCachePriv.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0E94 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402E2970 (ExAllocatePoolMm.c)
 *     CcInitializePartition @ 0x1403A0570 (CcInitializePartition.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403BF240 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializeNumaNodeForVolume @ 0x1403C129C (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeQuickLWSThreadItem @ 0x1403C15E0 (CcInitializeQuickLWSThreadItem.c)
 *     CcInitializeAsyncLazywriteForNodeHelper @ 0x14053A480 (CcInitializeAsyncLazywriteForNodeHelper.c)
 *     CcInitializeNumaNode @ 0x14053AD88 (CcInitializeNumaNode.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14053BD74 (CcWriteBehindAsyncPreProcess.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAE008 (ExpAllocatePoolWithQuotaTag.c)
 *     ExAllocatePool3 @ 0x140AAE430 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 *     ExpAllocatePoolWithTagPriority @ 0x140AAECF4 (ExpAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     MmGetNextNode @ 0x14034EE60 (MmGetNextNode.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // ebx
  __int64 result; // rax
  _QWORD *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 >= 0 )
    v7 = 1;
  else
    v7 = (unsigned __int16)KeNumberNodes;
  v8 = a5;
  v9 = a4 & 0x7FFFFFFF;
  v12 = 0;
  if ( a4 >= 0 )
    v9 = a4;
  while ( 1 )
  {
    result = ExAllocateHeapPool(a1, v8);
    if ( result )
      break;
    if ( !--v7 || (unsigned int)MmGetNextNode(v9, &v12) == -1 )
    {
      ++ExPoolFailures;
      if ( (a1 & 2) != 0 )
      {
        v11 = (_QWORD *)qword_140C74A00;
        if ( (a1 & 0x200) != 0 )
          v11 = (_QWORD *)qword_140C74A08;
        KeBugCheckEx(0x41u, a2, (unsigned int)v11[17], (unsigned int)v11[21] + (unsigned int)v11[23], 0LL);
      }
      if ( (a1 & 0x10) != 0 )
        RtlRaiseStatus(-1073741670);
      return 0LL;
    }
  }
  return result;
}
