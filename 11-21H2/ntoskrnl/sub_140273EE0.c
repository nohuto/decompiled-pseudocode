/*
 * XREFs of sub_140273EE0 @ 0x140273EE0
 * Callers:
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14027FE9C @ 0x14027FE9C (sub_14027FE9C.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140273EE0(__int64 a1, unsigned __int8 a2)
{
  _BYTE *v2; // rsi
  char v3; // al
  unsigned __int64 i; // rbp
  __int64 result; // rax
  unsigned int v7; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  v2 = (_BYTE *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  v3 = *(_BYTE *)(a1 + 34);
  for ( i = a2; (v3 & 0x20) != 0; v3 = *(_BYTE *)(a1 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)i != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)i <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(i);
    }
    v7 = 0;
    while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (++v7 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && (unsigned __int8)sub_14039EA10() )
        sub_14039D930(v7);
      else
        _mm_pause();
    }
    sub_1402F2700(a1);
  }
  *(_BYTE *)(a1 + 34) = v3 | 0x20;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 && (*v2 & 0x20) == 0 )
    result = sub_14033A510(v2, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
