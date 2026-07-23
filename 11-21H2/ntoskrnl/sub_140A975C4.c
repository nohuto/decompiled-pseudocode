/*
 * XREFs of sub_140A975C4 @ 0x140A975C4
 * Callers:
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140A975C4()
{
  unsigned __int64 v0; // rdi
  unsigned int v1; // ebx
  BOOL v2; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C1ACD0);
  v1 = 0;
  v2 = qword_140C1ACF0 == &qword_140C1ACF0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C1ACD0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  if ( v2 )
    return 1;
  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1120LL) & 0x10000) != 0 )
  {
    ++dword_140D5782C;
    return 1;
  }
  ++dword_140D57828;
  return v1;
}
