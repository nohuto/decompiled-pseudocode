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

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_TIMER *v7; // r14
  _TP_TIMER *Heap; // rax
  _TP_TIMER *v9; // rbx
  NTSTATUS result; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v7 = Timer;
  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (Timer = (PTP_TIMER *)NtCurrentPeb()->Ldr, *((_BYTE *)Timer + 72)) )
  {
    TppRaiseInvalidParameter(Timer, Callback, Context);
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
                 (__int64)Heap,
                 0,
                 (__int64)Context,
                 (__int64)CallbackEnviron,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)&TppTimerpTaskVFuncs);
      if ( result >= 0 )
      {
        *((_QWORD *)v9 + 10) = Callback;
        *v7 = v9;
      }
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
