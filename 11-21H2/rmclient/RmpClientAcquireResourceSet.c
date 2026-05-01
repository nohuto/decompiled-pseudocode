/*
 * XREFs of RmpClientAcquireResourceSet @ 0x180009680
 * Callers:
 *     RmAcquireResourceSetEx @ 0x180009670 (RmAcquireResourceSetEx.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180008A60 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

__int64 __fastcall RmpClientAcquireResourceSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // rdi
  _QWORD *v10; // r15
  _QWORD *Heap; // rax
  int Pointer; // ebx
  __int64 v13; // rbx
  CLIENT_CALL_RETURN v14; // r8
  int v15; // r13d
  __int64 v16; // r14
  int v17; // esi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  ULONG v21; // [rsp+40h] [rbp-88h]
  int v22; // [rsp+48h] [rbp-80h]
  int v23; // [rsp+50h] [rbp-78h]
  unsigned int v24; // [rsp+74h] [rbp-54h]
  __int64 v25; // [rsp+80h] [rbp-48h]

  v9 = a1 + 24;
  v25 = a1 + 24;
  v10 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  if ( Heap )
  {
    Heap[7] = 0LL;
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = v9;
    Heap[6] = -1LL;
    Heap[9] = a5;
    Heap[10] = a6;
    Heap[8] = -1LL;
    v10 = Heap;
    Pointer = 0;
  }
  else
  {
    Pointer = -1073741801;
  }
  if ( Pointer >= 0 )
    Pointer = 0;
  v24 = Pointer;
  if ( Pointer < 0 )
  {
    v15 = 0;
  }
  else
  {
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    v13 = *(_QWORD *)(a4 + 544);
    v23 = *(_DWORD *)(a4 + 536);
    v22 = *(_DWORD *)(a4 + 532);
    v21 = RtlLengthSid((PSID)(a4 + 464));
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180021F00,
                              4u,
                              0LL,
                              *(_QWORD *)(a1 + 16),
                              a2,
                              a3,
                              a4,
                              a4 + 464,
                              v21,
                              v22,
                              v23,
                              v13,
                              a7,
                              a8).Pointer;
    v24 = Pointer;
    v9 = v25;
    v15 = 1;
    if ( Pointer >= 0 )
    {
      v10[6] = *a8;
      v16 = v10[5] + 24LL;
      v17 = *(_BYTE *)(v10[5] + 32LL) & 1;
      v18 = *(_QWORD *)v16;
      if ( (*(_BYTE *)(v10[5] + 32LL) & 1) != 0 )
      {
        if ( v18 )
          v18 ^= v16;
        else
          v18 = 0LL;
      }
      LOBYTE(v14.Pointer) = 0;
      if ( v18 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree((__int64)v10) < 0 )
          {
            v19 = *(_QWORD *)v18;
            if ( v17 )
            {
              if ( !v19 )
                goto LABEL_22;
              v19 ^= v18;
            }
            if ( !v19 )
            {
LABEL_22:
              LOBYTE(v14.Pointer) = 0;
              break;
            }
          }
          else
          {
            v19 = *(_QWORD *)(v18 + 8);
            if ( v17 )
            {
              if ( !v19 )
                goto LABEL_23;
              v19 ^= v18;
            }
            if ( !v19 )
            {
LABEL_23:
              LOBYTE(v14.Pointer) = 1;
              break;
            }
          }
          v18 = v19;
        }
      }
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlRbInsertNodeEx)(
        v16,
        v18,
        (CLIENT_CALL_RETURN)v14.Simple,
        v10);
      v10 = 0LL;
      v9 = v25;
    }
  }
  if ( v15 )
  {
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
  }
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v24;
  }
  return (unsigned int)Pointer;
}
