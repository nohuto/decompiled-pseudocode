/*
 * XREFs of sub_140220C30 @ 0x140220C30
 * Callers:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140332110 @ 0x140332110 (sub_140332110.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 * Callees:
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140220C30(int *a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int i; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // r9
  struct _KPRCB *v12; // rbp
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax

  v2 = 0;
  while ( 1 )
  {
    _m_prefetchw(a1);
    for ( i = *a1; *a1 < 0; i = *a1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( a2 != 0xFF )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v8 = *((_QWORD *)CurrentPrcb + 4375);
              v9 = ~(unsigned __int16)(-1LL << (a2 + 1));
              v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
              *(_DWORD *)(v8 + 20) &= v9;
              if ( v10 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(a2);
      }
      if ( (++v2 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && (unsigned __int8)sub_14039EA10() )
        sub_14039D930(v2);
      else
        _mm_pause();
      if ( a2 != 0xFF )
      {
        a2 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && a2 <= 0xFu )
          {
            v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v11 + 20) |= (-1 << (a2 + 1)) & 4;
          }
        }
      }
    }
    v12 = KeGetCurrentPrcb();
    v13 = *((_QWORD *)v12 + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)v12 + 32) <= 1u )
      {
        v14 = *(_DWORD *)(v13 + 24);
        *(_DWORD *)(v13 + 24) = v14 + 1;
        if ( v14 == -1 )
          sub_140418E4C(v12);
      }
    }
    if ( !_interlockedbittestandset(a1, 0x1Fu) )
      break;
    v15 = *((_QWORD *)v12 + 4375);
    if ( v15 && *((_BYTE *)v12 + 32) <= 1u )
    {
      v16 = *(_DWORD *)(v15 + 24) - 1;
      *(_DWORD *)(v15 + 24) = v16;
      if ( !v16 )
        sub_140418E4C(v12);
    }
  }
  return v2;
}
