/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1403D439C
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2A20 (KiComputeEffectivePriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402B9DEC (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_140C42538);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C42530;
      v2 = qword_140C42528 == (_QWORD)&qword_140C42528;
      if ( *(__int64 **)qword_140C42530 != &qword_140C42528 )
        __fastfail(3u);
      *v1 = &qword_140C42528;
      v1[1] = v3;
      *v3 = v1;
      qword_140C42530 = (__int64)v1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C42538);
    if ( v2 )
      KiInsertQueueDpc((ULONG_PTR)&stru_140C424E8, 0LL, 0LL, 0LL, 0);
  }
}
