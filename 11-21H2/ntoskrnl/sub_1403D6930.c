/*
 * XREFs of sub_1403D6930 @ 0x1403D6930
 * Callers:
 *     sub_1406D5860 @ 0x1406D5860 (sub_1406D5860.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1403D6930()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  int *v2; // r8
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  v0 = 0;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
  v2 = (int *)off_140C04398;
  v3 = v1;
  while ( v2 != (int *)&off_140C04398 )
  {
    if ( ((v2[12] >> 4) & 0x400000) != 0 && (v2[12] & 0x40000000) != 0 && *((_QWORD *)v2 + 2) )
      ++v0;
    v2 = *(int **)v2;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C16660);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  KeReleaseMutex(&Object, 0);
  return v0;
}
