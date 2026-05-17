/*
 * XREFs of RtlpCreateWnfUserSubscription @ 0x18006154C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800613FC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfUserSubscription(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 Heap; // rax
  __int64 v12; // rbx
  struct _TEB *v13; // rax
  void *SubProcessTag; // rcx
  __int64 result; // rax

  *a1 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 168LL);
  v12 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046((void *)(Heap + 4), 0, 0xA4uLL);
  *(_DWORD *)v12 = 11012372;
  v13 = NtCurrentTeb();
  *a1 = v12;
  SubProcessTag = v13->SubProcessTag;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 88) = 0LL;
  *(_DWORD *)(v12 + 96) = 0;
  *(_QWORD *)(v12 + 104) = 0LL;
  *(_QWORD *)(v12 + 112) = 0LL;
  *(_QWORD *)(v12 + 152) = 0LL;
  *(_DWORD *)(v12 + 160) = 0;
  *(_QWORD *)(v12 + 72) = a5;
  *(_DWORD *)(v12 + 60) = a6;
  *(_DWORD *)(v12 + 64) = a7;
  result = 0LL;
  *(_QWORD *)(v12 + 48) = SubProcessTag;
  *(_QWORD *)(v12 + 32) = a3;
  *(_QWORD *)(v12 + 40) = a4;
  *(_DWORD *)(v12 + 56) = a2;
  *(_DWORD *)(v12 + 80) = 1;
  return result;
}
