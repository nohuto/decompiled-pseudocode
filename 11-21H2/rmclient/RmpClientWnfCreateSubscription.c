/*
 * XREFs of RmpClientWnfCreateSubscription @ 0x180005CB0
 * Callers:
 *     HampConnectionCreate @ 0x180004700 (HampConnectionCreate.c)
 *     HamIpcChannelAllocateState @ 0x180005C80 (HamIpcChannelAllocateState.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000A6A4 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 * Callees:
 *     RmSubscriptionStart @ 0x180005DA4 (RmSubscriptionStart.c)
 *     RmpClientWnfDestroySubscription @ 0x180006870 (RmpClientWnfDestroySubscription.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall RmpClientWnfCreateSubscription(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *Heap; // rax
  _QWORD *v9; // rbx
  int v10; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 0x48uLL);
  v9[6] = *a1;
  RtlInitializeSRWLock(v9 + 4);
  *((_DWORD *)v9 + 16) &= ~1u;
  v9[3] = v9 + 2;
  v9[2] = v9 + 2;
  v9[5] = a2;
  v9[1] = a3;
  v10 = TpAllocWork(v9 + 7, RmpClientWnfMessageQueueWorker, v9, 0LL);
  if ( v10 < 0 || (v10 = RmSubscriptionStart(a1, v9), v10 < 0) )
  {
    RmpClientWnfDestroySubscription(v9);
    return (unsigned int)v10;
  }
  else
  {
    *a4 = v9;
    return 0LL;
  }
}
