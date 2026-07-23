/*
 * XREFs of sub_140524990 @ 0x140524990
 * Callers:
 *     sub_1407F8580 @ 0x1407F8580 (sub_1407F8580.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140524990(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C4D0D8);
  if ( qword_140D017C8 )
  {
    if ( qword_140D017C8 != *((_QWORD *)KeGetCurrentThread() + 153) )
      return 3221225473LL;
    qword_140C54B58 = a1;
    qword_140D017C8 &= -(__int64)(a1 != 0);
  }
  else
  {
    qword_140C54B58 = a1;
    if ( a1 )
      qword_140D017C8 = *((_QWORD *)KeGetCurrentThread() + 153);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4D0D8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return 0LL;
}
