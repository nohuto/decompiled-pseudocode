/*
 * XREFs of TpAllocCleanupGroup @ 0x180087170
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocCleanupGroup(PTP_CLEANUP_GROUP *CleanupGroupReturn)
{
  _PEB_LDR_DATA *Ldr; // rdx
  __int64 v2; // r8
  _QWORD *Heap; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  NTSTATUS result; // eax
  NTSTATUS v8; // [rsp+20h] [rbp-18h]
  PVOID BaseAddress; // [rsp+40h] [rbp+8h]

  if ( !CleanupGroupReturn || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(CleanupGroupReturn, Ldr, v2);
    return -1073741811;
  }
  else
  {
    *CleanupGroupReturn = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, 0x50uLL);
    v5 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *((_DWORD *)Heap + 1) = 0;
      Heap[1] = 0LL;
      Heap[7] = 0LL;
      v6 = Heap + 2;
      v6[1] = v6;
      *v6 = v6;
      v5[9] = v5 + 8;
      v5[8] = v5 + 8;
      result = 0;
      *((_OWORD *)v5 + 2) = 0LL;
      v5[6] = 0LL;
      v8 = 0;
      *CleanupGroupReturn = (PTP_CLEANUP_GROUP)v5;
    }
    else
    {
      result = -1073741801;
      v8 = -1073741801;
    }
    if ( result < 0 )
    {
      if ( v5 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, BaseAddress);
        return v8;
      }
    }
  }
  return result;
}
