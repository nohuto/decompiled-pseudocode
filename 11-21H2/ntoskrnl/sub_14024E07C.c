/*
 * XREFs of sub_14024E07C @ 0x14024E07C
 * Callers:
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 * Callees:
 *     KeRemoveQueueDpc @ 0x14024E180 (KeRemoveQueueDpc.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_14063129C @ 0x14063129C (sub_14063129C.c)
 */

void __fastcall sub_14024E07C(unsigned int *a1)
{
  _SLIST_HEADER *v1; // r14
  void *v3; // rsi
  PSLIST_ENTRY v4; // rdi
  _SLIST_ENTRY *v5; // r13
  KIRQL v6; // r12
  void *v7; // rcx

  v1 = (_SLIST_HEADER *)(a1 + 236);
  v3 = 0LL;
  v4 = ExpInterlockedFlushSList((PSLIST_HEADER)a1 + 59);
  while ( v4 )
  {
    v5 = v4;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 114);
    if ( BYTE2(v4[-1].Next) )
    {
      v7 = (void *)*((_QWORD *)&v4[-6].Next + 1);
      if ( v7 )
      {
        v3 = (void *)*((_QWORD *)&v4[-6].Next + 1);
        ObfReferenceObject(v7);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 114, v6);
    if ( v3 )
    {
      if ( (unsigned __int8)KeRemoveQueueApc(&v4[-6]) )
        sub_14063129C(a1, &v4[-6]);
      ObfDereferenceObject(v3);
      v3 = 0LL;
    }
    v4 = v4->Next;
    ExpInterlockedPushEntrySList(v1, v5);
  }
  if ( KeRemoveQueueDpc((PRKDPC)(a1 + 212)) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1 + 242, 1u);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
      1u);
  }
}
