/*
 * XREFs of HamCreateActivityEx @ 0x1800054D0
 * Callers:
 *     HamCreateActivity @ 0x1800054A0 (HamCreateActivity.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180008A60 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  _QWORD *v9; // r15
  _QWORD *Heap; // rax
  CLIENT_CALL_RETURN result; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // edi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  ULONG v19; // [rsp+30h] [rbp-88h]
  int v20; // [rsp+38h] [rbp-80h]
  int v21; // [rsp+40h] [rbp-78h]
  unsigned int Pointer; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+78h] [rbp-40h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp-38h]

  v9 = 0LL;
  v24 = 0LL;
  v23 = -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = a1 + 2;
    Heap[7] = a2;
    Heap[6] = -1LL;
    v9 = Heap;
    v24 = Heap;
    result.Simple = 0LL;
  }
  else
  {
    result.Simple = 3221225495LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v12 = *(_QWORD *)(a3 + 544);
    v21 = *(_DWORD *)(a3 + 536);
    v20 = *(_DWORD *)(a3 + 532);
    v19 = RtlLengthSid((PSID)(a3 + 464));
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                       2u,
                       0LL,
                       *a1,
                       a3,
                       a3 + 464,
                       v19,
                       v20,
                       v21,
                       v12,
                       a4,
                       a5,
                       &v23).Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9[6] = v23;
      v13 = v9[5];
      RtlAcquireSRWLockExclusive(v13 + 8);
      *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
      v15 = v9[5] + 24LL;
      v16 = *(_BYTE *)(v9[5] + 32LL) & 1;
      v17 = *(_QWORD *)v15;
      if ( (*(_BYTE *)(v9[5] + 32LL) & 1) != 0 )
      {
        if ( v17 )
          v17 ^= v15;
        else
          v17 = 0LL;
      }
      LOBYTE(v14) = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v9, v17, v14) < 0 )
          {
            v18 = *(_QWORD *)v17;
            if ( v16 )
            {
              if ( !v18 )
                goto LABEL_20;
              v18 ^= v17;
            }
            if ( !v18 )
            {
LABEL_20:
              LOBYTE(v14) = 0;
              break;
            }
          }
          else
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( v16 )
            {
              if ( !v18 )
                goto LABEL_21;
              v18 ^= v17;
            }
            if ( !v18 )
            {
LABEL_21:
              LOBYTE(v14) = 1;
              break;
            }
          }
          v17 = v18;
        }
      }
      RtlRbInsertNodeEx(v15, v17, v14, v9);
      *(_DWORD *)(v13 + 16) = 0;
      RtlReleaseSRWLockExclusive(v13 + 8);
      v9 = 0LL;
      *a6 = v23;
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
