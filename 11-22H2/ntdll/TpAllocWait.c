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

__int64 __fastcall TpAllocWait(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  _QWORD *p_Length; // r15
  __int64 Heap; // rbx
  HANDLE *v9; // r14
  int WaitCompletionPacket; // edi
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  _BYTE *v13; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3;
  p_Length = &Ldr->Length;
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
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 472LL);
    if ( Heap )
    {
      v9 = (HANDLE *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (WaitCompletionPacket = TppInitializeTimer(
                                     Heap,
                                     1,
                                     v5,
                                     a4,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          NtClose(*v9);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
      }
      else
      {
        v11 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = TppWaitCompletion;
        v12 = (_DWORD *)(Heap + 456);
        v13 = (_BYTE *)(Heap + 460);
        if ( v11 )
        {
          TppGetCurrentThreadNumaNode(v11, (int *)(Heap + 456), (_BYTE *)(Heap + 460), 0LL);
        }
        else
        {
          *v12 = 0;
          *v13 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 400) = *v12;
        *(_BYTE *)(Heap + 404) = *v13;
        *(_QWORD *)(Heap + 80) = a2;
        *p_Length = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
