/*
 * XREFs of sub_14022EEF4 @ 0x14022EEF4
 * Callers:
 *     sub_14022ED94 @ 0x14022ED94 (sub_14022ED94.c)
 *     sub_1405CC460 @ 0x1405CC460 (sub_1405CC460.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14022EEF4(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 *v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 168) = KeGetCurrentThread();
    if ( a2 )
    {
      KeSetCoalescableTimer((PKTIMER)(v2 + 16), (LARGE_INTEGER)(-10000LL * a2), 0, a2 / 0xA, (PKDPC)(v2 + 80));
      v3 = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(v2 + 152) = 0LL;
      *(_QWORD *)(v2 + 160) = v3;
      v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C23CE0);
      v5 = (__int64 *)qword_140C23CF8;
      if ( *(__int64 **)qword_140C23CF8 != &qword_140C23CF0 )
        __fastfail(3u);
      *(_QWORD *)v2 = &qword_140C23CF0;
      *(_QWORD *)(v2 + 8) = v5;
      *v5 = v2;
      qword_140C23CF8 = v2;
      KeReleaseSpinLockFromDpcLevel(&qword_140C23CE0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
    }
  }
  return v2;
}
