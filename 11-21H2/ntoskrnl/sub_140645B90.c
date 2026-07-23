/*
 * XREFs of sub_140645B90 @ 0x140645B90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140645B90(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 v3; // rtt
  __int64 v4; // rtt
  char v5; // al
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  signed __int32 v13; // eax
  bool v14; // cc
  __int64 result; // rax

  v2 = qword_140D04C88;
  v3 = qword_140D04C88;
  if ( v3 != _InterlockedCompareExchange64(&qword_140D04C88, *(_QWORD *)qword_140D04C88, qword_140D04C88) )
  {
    do
    {
      _mm_pause();
      v2 = qword_140D04C88;
      v4 = qword_140D04C88;
    }
    while ( v4 != _InterlockedCompareExchange64(&qword_140D04C88, *(_QWORD *)qword_140D04C88, qword_140D04C88) );
  }
  v5 = *(_BYTE *)(v2 + 24);
  if ( v5 == 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v2 + 8), 0);
    sub_14042A5E0(v2, *(_QWORD *)(v2 + 32));
  }
  else if ( !v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C10B80);
    *(_QWORD *)v2 = qword_140D04C80;
    v7 = v6;
    qword_140D04C80 = v2;
    KeReleaseSpinLockFromDpcLevel(&qword_140C10B80);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedIncrement(&dword_140D04C78) == 1 )
      ExQueueWorkItem(&stru_140C10BA0, CriticalWorkQueue);
  }
  v13 = _InterlockedExchangeAdd(&dword_140D04C70, 0xFFFFFFFF);
  v14 = v13 <= 1;
  result = (unsigned int)(v13 - 1);
  if ( !v14 )
    return sub_140345190(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
  return result;
}
