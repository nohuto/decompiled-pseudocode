/*
 * XREFs of sub_140672348 @ 0x140672348
 * Callers:
 *     sub_140672120 @ 0x140672120 (sub_140672120.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     sub_14020585C @ 0x14020585C (sub_14020585C.c)
 *     RtlInsertEntryHashTable @ 0x140205950 (RtlInsertEntryHashTable.c)
 *     sub_140206780 @ 0x140206780 (sub_140206780.c)
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_14025C99C @ 0x14025C99C (sub_14025C99C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140672348(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v4; // r13
  __int64 Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r15
  _RTL_BITMAP *v8; // r14
  ULONG ClearBitsAndSet; // edi
  int v10; // ebx
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  char v13; // bp
  ULONG v15; // r13d
  void *v16; // rdi
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  v4 = a1;
  Pool2 = ExAllocatePool2(256LL, 56LL, 1950639443LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(off_140D3B060, 0LL);
  v7 = 1LL;
  v8 = (_RTL_BITMAP *)(off_140D3B060 + 16);
  HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(off_140D3B060 + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(off_140D3B060 + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    sub_140206780();
    ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v15 = RtlNumberOfSetBits(v8) + 64;
      v16 = (void *)ExAllocatePool2(256LL, (unsigned __int64)v15 >> 3, 1950639443LL);
      if ( !v16 )
      {
LABEL_16:
        v10 = -1073741801;
LABEL_17:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        goto LABEL_7;
      }
      v10 = sub_14025C99C();
      if ( v10 < 0 )
        goto LABEL_17;
      ExFreePoolWithTag(v8->Buffer, 0);
      v8->SizeOfBitMap = v15;
      v8->Buffer = (PULONG)v16;
      RtlClearAllBits(v8);
      RtlSetBits(v8, 0, v15 - 64);
      v4 = a1;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    }
  }
  *(_QWORD *)(Pool2 + 24) = 1LL;
  *(_QWORD *)(Pool2 + 40) = ClearBitsAndSet;
  *(_QWORD *)(Pool2 + 32) = *v4;
  *(_BYTE *)(Pool2 + 48) = 0;
  if ( *v4 )
    v7 = *v4;
  if ( !RtlInsertEntryHashTable(HashTable, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2, v7, 0LL) )
  {
    _bittestandreset((signed __int32 *)v8->Buffer, ClearBitsAndSet);
    v16 = 0LL;
    goto LABEL_16;
  }
  v10 = 0;
  sub_14020585C(ClearBitsAndSet, *v4);
  v11 = *(_QWORD *)(Pool2 + 40);
  *a3 = Pool2;
  *a2 = v11;
LABEL_7:
  v12 = off_140D3B060;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)off_140D3B060, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v12);
  sub_1402AFC00(v12);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
