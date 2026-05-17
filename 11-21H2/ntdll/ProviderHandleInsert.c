/*
 * XREFs of ProviderHandleInsert @ 0x1800A3920
 * Callers:
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

__int64 __fastcall ProviderHandleInsert(__int64 a1, unsigned __int64 a2, unsigned int *a3, unsigned __int64 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  __int64 Heap; // r9
  unsigned __int8 v11; // cl
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r8

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18017AC98, a2, (unsigned __int64)a3, a4);
  v6 = dword_18017AC90;
  v7 = 0;
  if ( dword_18017AC90
    && (unsigned int)dword_18017AC90 >> 4 < dword_18013CD00[((unsigned __int64)(unsigned int)dword_18017AC90 >> 1) & 7] )
  {
LABEL_10:
    v8 = 0;
    v7 = v6;
    v15 = (unsigned __int64)v6 >> 4;
    v16 = qword_18017AC50[(v6 >> 1) & 7];
    dword_18017AC90 = *(_DWORD *)(v16 + 8 * v15);
    _InterlockedExchange64((volatile __int64 *)(v16 + 8 * v15), a2);
    goto LABEL_11;
  }
  if ( (unsigned __int8)byte_18017AC94 < 8u )
  {
    v9 = dword_18013CD00[(unsigned __int8)byte_18017AC94];
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 8LL * v9);
    if ( Heap )
    {
      v11 = byte_18017AC94;
      v12 = 0;
      v6 = (2 * (byte_18017AC94 & 7)) | 1;
      if ( v9 )
      {
        do
        {
          v13 = v6 | (unsigned __int64)(16 * (v12 + 1));
          v14 = v12++;
          *(_QWORD *)(Heap + 8 * v14) = v13;
        }
        while ( v12 != v9 );
        v11 = byte_18017AC94;
      }
      _InterlockedExchange64(&qword_18017AC50[v11], Heap);
      ++byte_18017AC94;
      goto LABEL_10;
    }
  }
  v8 = 14;
LABEL_11:
  *a3 = v7;
  RtlReleaseSRWLockExclusive(&qword_18017AC98);
  return v8;
}
