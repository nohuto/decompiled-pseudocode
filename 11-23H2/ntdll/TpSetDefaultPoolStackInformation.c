/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x1800509F0
 * Callers:
 *     <none>
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FB10 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180050144 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolStackInformation @ 0x180050B10 (TpSetPoolStackInformation.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rcx
  _QWORD *Heap; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+40h] [rbp+8h]

  v11 = 0;
  v10 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = TppPoolpGlobalPoolStackSize;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 16LL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v7 = a1[1];
      if ( Heap[1] < v7 )
      {
        Heap[1] = v7;
        v11 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v11 = 1;
      }
    }
    else
    {
      v10 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v11 && v10 >= 0 )
  {
    v8 = TpPoolReferenceExistingGlobalPool(v5, a2, a3, a4);
    if ( v8 )
    {
      v10 = TpSetPoolStackInformation(v8);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v10;
}
