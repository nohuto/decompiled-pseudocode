/*
 * XREFs of sub_1403C2A5C @ 0x1403C2A5C
 * Callers:
 *     sub_14082B1B4 @ 0x14082B1B4 (sub_14082B1B4.c)
 *     sub_14097E850 @ 0x14097E850 (sub_14097E850.c)
 * Callees:
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403C2A5C(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  v1 = a1;
  v2 = 0LL;
  if ( a1 )
  {
    do
    {
      v3 = *(_QWORD *)v1;
      v4 = (unsigned __int8)sub_1402F2700(v1);
      *(_WORD *)(v1 + 32) = 0;
      *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
      sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4), 2);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v8 = *((_QWORD *)CurrentPrcb + 4375);
            v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
            *(_DWORD *)(v8 + 20) &= v9;
            if ( v10 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      ++v2;
      v1 = v3;
    }
    while ( v3 );
  }
  return v2;
}
