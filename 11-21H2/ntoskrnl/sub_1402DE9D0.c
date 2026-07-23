/*
 * XREFs of sub_1402DE9D0 @ 0x1402DE9D0
 * Callers:
 *     sub_140777B74 @ 0x140777B74 (sub_140777B74.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_BOOL8 sub_1402DE9D0()
{
  BOOL v0; // ebx
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // r9
  int v6; // edx
  bool v7; // zf

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C46008);
  if ( (__int64 *)qword_140C45FC0 == &qword_140C45FC0 )
    v0 = qword_140C45FD8 == (_QWORD)&qword_140C45FD8;
  KeReleaseSpinLockFromDpcLevel(&qword_140C46008);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  return v0;
}
