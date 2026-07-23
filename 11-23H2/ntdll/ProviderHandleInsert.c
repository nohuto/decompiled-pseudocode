/*
 * XREFs of ProviderHandleInsert @ 0x1800329E0
 * Callers:
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall ProviderHandleInsert(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v11; // ebx
  _QWORD *Heap; // r9
  unsigned __int8 v13; // cl
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx

  RtlAcquireSRWLockExclusive(&stru_180187FD8);
  v5 = dword_180187FD0;
  v6 = 0;
  if ( !dword_180187FD0
    || (unsigned int)dword_180187FD0 >> 4 >= dword_1801490D0[((unsigned __int64)(unsigned int)dword_180187FD0 >> 1) & 7] )
  {
    if ( (unsigned __int8)byte_180187FD4 >= 8u
      || (v11 = dword_1801490D0[(unsigned __int8)byte_180187FD4],
          (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v11)) == 0LL) )
    {
      v7 = 14;
      goto LABEL_4;
    }
    v13 = byte_180187FD4;
    v14 = 0;
    v5 = (2 * (byte_180187FD4 & 7)) | 1;
    if ( v11 )
    {
      do
      {
        v15 = v5 | (unsigned __int64)(16 * (v14 + 1));
        v16 = v14++;
        Heap[v16] = v15;
      }
      while ( v14 != v11 );
      v13 = byte_180187FD4;
    }
    _InterlockedExchange64(&qword_180187F90[v13], (__int64)Heap);
    ++byte_180187FD4;
  }
  v7 = 0;
  v6 = v5;
  v8 = (unsigned __int64)v5 >> 4;
  v9 = qword_180187F90[(v5 >> 1) & 7];
  dword_180187FD0 = *(_DWORD *)(v9 + 8 * v8);
  _InterlockedExchange64((volatile __int64 *)(v9 + 8 * v8), a2);
LABEL_4:
  *a3 = v6;
  RtlReleaseSRWLockExclusive(&stru_180187FD8);
  return v7;
}
