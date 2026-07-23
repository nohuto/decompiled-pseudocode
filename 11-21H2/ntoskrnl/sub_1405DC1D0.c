/*
 * XREFs of sub_1405DC1D0 @ 0x1405DC1D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void sub_1405DC1D0()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  int v4; // eax
  bool v5; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F360);
  byte_140C22724 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F360);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v3 = *((_QWORD *)CurrentPrcb + 4375);
        v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v5 = (v4 & *(_DWORD *)(v3 + 20)) == 0;
        *(_DWORD *)(v3 + 20) &= v4;
        if ( v5 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  _m_prefetchw(&dword_140C2272C);
  if ( !_InterlockedOr(&dword_140C2272C, 1u) )
  {
    sub_1402D5F7C(4u);
    ExQueueWorkItem(&stru_140C1F340, DelayedWorkQueue);
  }
}
