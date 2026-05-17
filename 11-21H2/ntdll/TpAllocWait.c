/*
 * XREFs of TpAllocWait @ 0x18001F9C0
 * Callers:
 *     RtlRegisterWait @ 0x180070540 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x180083A54 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180084B20 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TppInitializeTimer @ 0x18001EDC4 (TppInitializeTimer.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1800A5A40 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocWait(_PEB_LDR_DATA *Ldr, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *p_Length; // r15
  __int64 Heap; // rbx
  HANDLE *v9; // r14
  int WaitCompletionPacket; // edi
  __int64 v11; // rcx
  int v12; // ecx
  char v13; // dl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

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
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 472LL);
    if ( Heap )
    {
      v9 = (HANDLE *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (WaitCompletionPacket = TppInitializeTimer(
                                     Heap,
                                     1,
                                     a3,
                                     a4,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          NtClose(*v9);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 1835008), Heap);
      }
      else
      {
        v11 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = TppWaitCompletion;
        if ( v11 )
        {
          TppGetCurrentThreadNumaNode(v11, (_DWORD *)(Heap + 456), (_BYTE *)(Heap + 460));
          v12 = *(_DWORD *)(Heap + 456);
          v13 = *(_BYTE *)(Heap + 460);
        }
        else
        {
          *(_DWORD *)(Heap + 456) = 0;
          v12 = 0;
          *(_BYTE *)(Heap + 460) = 0;
          v13 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 400) = v12;
        *(_BYTE *)(Heap + 404) = v13;
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
