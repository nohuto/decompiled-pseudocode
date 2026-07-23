/*
 * XREFs of sub_140517630 @ 0x140517630
 * Callers:
 *     HalAllocateAdapterChannel @ 0x140456840 (HalAllocateAdapterChannel.c)
 *     sub_140512054 @ 0x140512054 (sub_140512054.c)
 *     sub_140516C60 @ 0x140516C60 (sub_140516C60.c)
 *     sub_1405175E0 @ 0x1405175E0 (sub_1405175E0.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140504EF0 @ 0x140504EF0 (sub_140504EF0.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 */

__int64 __fastcall sub_140517630(PDMA_ADAPTER DmaAdapter, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6)
{
  int v10; // edx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // esi
  char v15; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // edx
  bool v22; // zf

  if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
  {
    _m_prefetchw((const void *)(a2 - 8));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 - 8), 4u) & 2) != 0 )
      return 3221225760LL;
  }
  if ( LOBYTE(DmaAdapter[27].Version) && a3 > *(_DWORD *)&DmaAdapter[14].Version )
    return 3221225626LL;
  v10 = *(_DWORD *)(a2 + 20);
  v11 = v10 & 0xFFFFFFFB;
  v12 = v10 | 4;
  if ( (a5 & 2) == 0 )
    v12 = v11;
  *(_DWORD *)(a2 + 20) = v12;
  *(_QWORD *)(a2 + 24) = a6;
  *(_DWORD *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 16) = 1;
  v13 = (a4 << 12) | v12 & 0xFFF | 1;
  v14 = (a5 & 1) != 0 ? 0xC000009A : 0;
  if ( (a5 & 1) == 0 )
    v13 = (a4 << 12) | v12 & 0xFFE;
  *(_DWORD *)(a2 + 20) = v13;
  if ( sub_140504EF0((__int64)DmaAdapter, (_QWORD *)a2, v13 & 1) )
  {
    DmaAdapter[21].DmaOperations = (PDMA_OPERATIONS)a2;
    v15 = 0;
    CurrentIrql = 0;
    *(_DWORD *)&DmaAdapter[15].Version = a3;
    HIDWORD(DmaAdapter[23].DmaOperations) = 1;
    LODWORD(DmaAdapter[38].DmaOperations) = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v15 = 1;
    }
    if ( (unsigned __int8)sub_140517830(DmaAdapter) )
      v14 = 0;
    if ( v15 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = *((_QWORD *)CurrentPrcb + 4375);
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
            *(_DWORD *)(v20 + 20) &= v21;
            if ( v22 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  return v14;
}
