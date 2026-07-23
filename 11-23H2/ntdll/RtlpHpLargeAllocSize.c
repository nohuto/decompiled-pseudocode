/*
 * XREFs of RtlpHpLargeAllocSize @ 0x180087F7C
 * Callers:
 *     RtlpHpSizeHeap @ 0x18003ACD0 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180041D6C (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x180045A84 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x18008803C (RtlpHpLargeAllocSizeInternal.c)
 */

__int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbx

  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v8 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v8 )
    v8 ^= a1 + 72;
  while ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v9 )
    {
      if ( a2 <= v9 )
        break;
      v10 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v8;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
  }
  if ( v8 )
    v11 = RtlpHpLargeAllocSizeInternal(*(_BYTE *)(a1 + 80) & 1, v8, a4);
  else
    v11 = -1LL;
  if ( !v7 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  return v11;
}
