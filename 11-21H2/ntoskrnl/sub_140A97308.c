/*
 * XREFs of sub_140A97308 @ 0x140A97308
 * Callers:
 *     sub_140A9697C @ 0x140A9697C (sub_140A9697C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A96EB4 @ 0x140A96EB4 (sub_140A96EB4.c)
 */

__int64 sub_140A97308()
{
  unsigned int v0; // ebx
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C1ACD0);
  qword_140C1ACF8 = (__int64)&qword_140C1ACF0;
  qword_140C1ACF0 = &qword_140C1ACF0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C1ACD0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v4 = *((_QWORD *)CurrentPrcb + 4375);
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
        *(_DWORD *)(v4 + 20) &= v5;
        if ( v6 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  if ( dword_140C0C834 != -1 && (unsigned int)(dword_140C0C834 - 2) <= 0xFE )
    return (unsigned int)sub_140A96EB4(word_140C1AAA0, ((unsigned __int64)(unsigned int)dword_140C0C834 - 2) >> 1);
  return v0;
}
