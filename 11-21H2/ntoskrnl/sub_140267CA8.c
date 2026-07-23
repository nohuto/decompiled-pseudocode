/*
 * XREFs of sub_140267CA8 @ 0x140267CA8
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 *     sub_140264C90 @ 0x140264C90 (sub_140264C90.c)
 *     sub_140268A48 @ 0x140268A48 (sub_140268A48.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140397C78 @ 0x140397C78 (sub_140397C78.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140267CA8(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v5; // rdi
  volatile LONG *v6; // r15
  bool v7; // zf
  __int64 v8; // r9
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  unsigned __int64 v11; // r14
  unsigned int v12; // r15d
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x20) == 0 )
  {
    result = sub_140268A48();
    if ( !(_DWORD)result )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
      {
        v5 = *(_QWORD *)(a1 + 16) + 24512LL * i;
        v6 = (volatile LONG *)(v5 + 22848);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 22848));
        if ( !*(_BYTE *)(v5 + 3249) )
        {
          v7 = (*(_BYTE *)(v5 + 3248))-- == 1;
          if ( v7 )
          {
            v9 = 0LL;
            v10 = 0;
            v11 = (-(__int64)(*(_BYTE *)(v5 + 3251) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
            if ( dword_140D05004 )
            {
              v12 = dword_140D05004;
              do
                v9 += sub_140264BD8(v5, v10++, 0);
              while ( v10 < v12 );
              v6 = (volatile LONG *)(v5 + 22848);
            }
            if ( v9 < v11
              || (dword_140D06880 & 0x30) == 0
              || (unsigned __int64)sub_140264C90(v5, 4u, 2) >> 3 >= v9
              || !(unsigned int)sub_140397C78(a1, i, 1LL) )
            {
              *(_BYTE *)(v5 + 3250) = 8;
              *(_BYTE *)(v5 + 3248) = 8;
            }
          }
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v7 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v7 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
