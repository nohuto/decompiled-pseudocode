/*
 * XREFs of TpAllocTimer @ 0x18002E6A0
 * Callers:
 *     RtlCreateTimer @ 0x18004D3B0 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x1800501D0 (RtlpInitializeWnf.c)
 *     RtlInitializeHeapGC @ 0x180081820 (RtlInitializeHeapGC.c)
 * Callees:
 *     TppInitializeTimer @ 0x18002FE48 (TppInitializeTimer.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // edi
  int v5; // ebp
  _TP_TIMER *Heap; // rax
  _TP_TIMER *v9; // rbx
  NTSTATUS result; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (int)CallbackEnviron;
  v5 = (int)Context;
  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap = (_TP_TIMER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8, 0x168uLL);
    v9 = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      result = TppInitializeTimer(
                 (_DWORD)Heap,
                 0,
                 v5,
                 v4,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)&TppTimerpTaskVFuncs);
      if ( result >= 0 )
      {
        *((_QWORD *)v9 + 10) = Callback;
        *Timer = v9;
      }
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
