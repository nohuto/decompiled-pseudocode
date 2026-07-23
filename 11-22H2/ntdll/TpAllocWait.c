/*
 * XREFs of TpAllocWait @ 0x18004DAE0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B900 (EtwpRegisterTpNotificationOnce.c)
 *     RtlRegisterWait @ 0x18004D780 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x180050404 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppInitializeTimer @ 0x180030018 (TppInitializeTimer.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033DE4 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1800A07E0 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  PTP_WAIT *v7; // r15
  char *Heap; // rbx
  HANDLE *v9; // r14
  NTSTATUS WaitCompletionPacket; // edi
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  char *v13; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (int)Context;
  v7 = WaitReturn;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (WaitReturn = (PTP_WAIT *)NtCurrentPeb()->Ldr, *((_BYTE *)WaitReturn + 72)) )
  {
    TppRaiseInvalidParameter(WaitReturn, Callback, Context);
    return -1073741811;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8, 0x1D8uLL);
    if ( !Heap )
      return -1073741801;
    v9 = (HANDLE *)(Heap + 368);
    *((_QWORD *)Heap + 22) = retaddr;
    WaitCompletionPacket = NtCreateWaitCompletionPacket((PHANDLE)Heap + 46, 1u, 0LL);
    if ( WaitCompletionPacket < 0
      || (WaitCompletionPacket = TppInitializeTimer(
                                   (__int64)Heap,
                                   1,
                                   v5,
                                   (__int64)CallbackEnviron,
                                   (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                   (__int64)&TppWaitpTaskVFuncs),
          WaitCompletionPacket < 0) )
    {
      if ( *v9 )
        NtClose(*v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
    }
    else
    {
      v11 = *((_QWORD *)Heap + 18);
      *((_QWORD *)Heap + 56) = TppWaitCompletion;
      v12 = Heap + 456;
      v13 = Heap + 460;
      if ( v11 )
      {
        TppGetCurrentThreadNumaNode(v11, (int *)Heap + 114, Heap + 460, 0LL);
      }
      else
      {
        *v12 = 0;
        *v13 = 0;
      }
      *((_QWORD *)Heap + 53) = 0LL;
      *((_QWORD *)Heap + 55) = Heap + 432;
      *((_QWORD *)Heap + 54) = Heap + 432;
      *((_QWORD *)Heap + 49) = TppDirectTaskVFuncs;
      *((_DWORD *)Heap + 100) = *v12;
      Heap[404] = *v13;
      *((_QWORD *)Heap + 10) = Callback;
      *v7 = (PTP_WAIT)Heap;
    }
    return WaitCompletionPacket;
  }
}
