/*
 * XREFs of TpAllocTimer @ 0x18001F8B0
 * Callers:
 *     RtlCreateTimer @ 0x18006FDA0 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x180083980 (RtlpInitializeWnf.c)
 *     RtlInitializeHeapGC @ 0x180086500 (RtlInitializeHeapGC.c)
 * Callees:
 *     TppInitializeTimer @ 0x18001EDC4 (TppInitializeTimer.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocTimer(_PEB_LDR_DATA *Ldr, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _PEB_LDR_DATA *v7; // r14
  __int64 Heap; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v7 = Ldr;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8u, 360LL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      result = TppInitializeTimer(
                 Heap,
                 0,
                 a3,
                 a4,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)TppTimerpTaskVFuncs);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v9 + 80) = a2;
        *(_QWORD *)&v7->Length = v9;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
