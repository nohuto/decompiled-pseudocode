/*
 * XREFs of ProviderHandleInsert @ 0x1800A3920
 * Callers:
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

__int64 __fastcall ProviderHandleInsert(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  _QWORD *Heap; // r9
  unsigned __int8 v10; // cl
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r8

  RtlAcquireSRWLockExclusive(&stru_18017AC98);
  v5 = dword_18017AC90;
  v6 = 0;
  if ( dword_18017AC90
    && (unsigned int)dword_18017AC90 >> 4 < dword_18013CD00[((unsigned __int64)(unsigned int)dword_18017AC90 >> 1) & 7] )
  {
LABEL_10:
    v7 = 0;
    v6 = v5;
    v14 = (unsigned __int64)v5 >> 4;
    v15 = qword_18017AC50[(v5 >> 1) & 7];
    dword_18017AC90 = *(_DWORD *)(v15 + 8 * v14);
    _InterlockedExchange64((volatile __int64 *)(v15 + 8 * v14), a2);
    goto LABEL_11;
  }
  if ( (unsigned __int8)byte_18017AC94 < 8u )
  {
    v8 = dword_18013CD00[(unsigned __int8)byte_18017AC94];
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v8);
    if ( Heap )
    {
      v10 = byte_18017AC94;
      v11 = 0;
      v5 = (2 * (byte_18017AC94 & 7)) | 1;
      if ( v8 )
      {
        do
        {
          v12 = v5 | (unsigned __int64)(16 * (v11 + 1));
          v13 = v11++;
          Heap[v13] = v12;
        }
        while ( v11 != v8 );
        v10 = byte_18017AC94;
      }
      _InterlockedExchange64(&qword_18017AC50[v10], (__int64)Heap);
      ++byte_18017AC94;
      goto LABEL_10;
    }
  }
  v7 = 14;
LABEL_11:
  *a3 = v6;
  RtlReleaseSRWLockExclusive(&stru_18017AC98);
  return v7;
}
