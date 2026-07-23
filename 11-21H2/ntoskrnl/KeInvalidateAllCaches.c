/*
 * XREFs of KeInvalidateAllCaches @ 0x140259C80
 * Callers:
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     sub_140398948 @ 0x140398948 (sub_140398948.c)
 *     sub_140419138 @ 0x140419138 (sub_140419138.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 *     sub_1405B2400 @ 0x1405B2400 (sub_1405B2400.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 * Callees:
 *     sub_140240404 @ 0x140240404 (sub_140240404.c)
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int CurrentPrcb; // esi
  __int64 v3; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *v5; // r10
  __int64 v6; // r9
  int v7; // edx
  bool v8; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = (unsigned int)KeGetCurrentPrcb();
  if ( sub_140240404(&dword_140D31240) )
  {
    sub_1402F42D4(CurrentPrcb, 1, 0, 0, 6LL, (__int64)KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&dword_140D31240);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        v5 = KeGetCurrentPrcb();
        v6 = *((_QWORD *)v5 + 4375);
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C(v5);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
