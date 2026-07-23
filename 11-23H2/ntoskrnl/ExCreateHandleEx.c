/*
 * XREFs of ExCreateHandleEx @ 0x140740654
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     RtlpInsertStringAtom @ 0x1407151C0 (RtlpInsertStringAtom.c)
 *     ExCreateHandle @ 0x14073FA14 (ExCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x1407BF804 (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFunction @ 0x1407CBC80 (AlpcpAllocateMessageFunction.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14097902C (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExSetHandleAttributes @ 0x1402BF97C (ExSetHandleAttributes.c)
 *     ExpFreeHandleTableEntry @ 0x140740588 (ExpFreeHandleTableEntry.c)
 *     ExpAllocateHandleTableEntry @ 0x140740728 (ExpAllocateHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9430 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1409F94E8 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h]
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  v12 = a2 << 16;
  v13 = a3 & 0x1FFFFFF;
  ExSetHandleAttributes((__int64)&v12, a4, 15);
  CurrentThread = KeGetCurrentThread();
  v12 |= 1uLL;
  v14 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = ExpAllocateHandleTableEntry(a1, &v14);
  v8 = v14;
  v9 = (_QWORD *)v7;
  if ( v7 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v14, a5) )
    {
      ExpFreeHandleTableEntry(a1, v8, (__int64)v9, v11);
      v8 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v8, 1LL);
      v9[1] = v13;
      *v9 = v12;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v8;
}
