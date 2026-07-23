/*
 * XREFs of sub_1405B2400 @ 0x1405B2400
 * Callers:
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     sub_140268AB0 @ 0x140268AB0 (sub_140268AB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405B2400(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf

  if ( a2 < (unsigned int)dword_140C5074C )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    sub_140268AB0(a1, a2, 3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140C50744;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
