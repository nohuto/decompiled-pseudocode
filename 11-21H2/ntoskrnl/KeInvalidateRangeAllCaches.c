/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x140570E60
 * Callers:
 *     sub_14056F780 @ 0x14056F780 (sub_14056F780.c)
 *     sub_14059FECC @ 0x14059FECC (sub_14059FECC.c)
 *     sub_1405A02B8 @ 0x1405A02B8 (sub_1405A02B8.c)
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf

  if ( Length < dword_140D05180 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    sub_1402F42D4((__int64)KeGetCurrentPrcb(), 1LL, 0LL, 0, 7LL, 0LL, 0LL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
