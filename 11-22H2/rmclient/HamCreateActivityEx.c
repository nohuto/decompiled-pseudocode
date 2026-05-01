/*
 * XREFs of HamCreateActivityEx @ 0x180007B20
 * Callers:
 *     HamCreateActivity @ 0x180007AF0 (HamCreateActivity.c)
 * Callees:
 *     sub_180007DE0 @ 0x180007DE0 (sub_180007DE0.c)
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  _QWORD *v9; // r13
  _QWORD *Heap; // rax
  CLIENT_CALL_RETURN result; // rax
  __int64 v12; // rbx
  int v13; // edi
  int v14; // esi
  ULONG v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rbx
  ULONG v18; // [rsp+30h] [rbp-88h]
  int v19; // [rsp+38h] [rbp-80h]
  int v20; // [rsp+40h] [rbp-78h]
  unsigned int Pointer; // [rsp+70h] [rbp-48h]
  __int64 v22; // [rsp+78h] [rbp-40h] BYREF
  _QWORD *v23; // [rsp+80h] [rbp-38h]

  v9 = 0LL;
  v23 = 0LL;
  v22 = -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = a1 + 3;
    Heap[7] = a2;
    Heap[6] = -1LL;
    v9 = Heap;
    v23 = Heap;
    result.Simple = 0LL;
  }
  else
  {
    result.Simple = 3221225495LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    if ( (unsigned int)unknown_libname_2(a1) )
    {
      v12 = *(_QWORD *)(a3 + 544);
      v13 = *(_DWORD *)(a3 + 536);
      v14 = *(_DWORD *)(a3 + 532);
      v15 = RtlLengthSid((PSID)(a3 + 464));
      result.Simple = HampInProcCreateActivity(a1[1], a3, a3 + 464, v15, v14, v13, v12, a4, a5, &v22);
    }
    else
    {
      v16 = *(_QWORD *)(a3 + 544);
      v20 = *(_DWORD *)(a3 + 536);
      v19 = *(_DWORD *)(a3 + 532);
      v18 = RtlLengthSid((PSID)(a3 + 464));
      result.Pointer = NdrClientCall3(
                         (MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0,
                         3u,
                         0LL,
                         *a1,
                         a3,
                         a3 + 464,
                         v18,
                         v19,
                         v20,
                         v16,
                         a4,
                         a5,
                         &v22).Pointer;
    }
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9[6] = v22;
      v17 = v9[5];
      RtlAcquireSRWLockExclusive(v17 + 8);
      *(_DWORD *)(v17 + 16) = GetCurrentThreadId();
      sub_180007DE0(v9);
      *(_DWORD *)(v17 + 16) = 0;
      RtlReleaseSRWLockExclusive(v17 + 8);
      v9 = 0LL;
      *a6 = v22;
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
