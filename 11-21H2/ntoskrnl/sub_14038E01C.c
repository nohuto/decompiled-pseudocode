/*
 * XREFs of sub_14038E01C @ 0x14038E01C
 * Callers:
 *     sub_14038DF70 @ 0x14038DF70 (sub_14038DF70.c)
 * Callees:
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14038E148 @ 0x14038E148 (sub_14038E148.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14038E01C(__int64 a1)
{
  unsigned int v2; // ebp
  ULONG_PTR *v3; // r14
  ULONG_PTR v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  if ( *(_BYTE *)(a1 + 15589) )
  {
    sub_14038E148();
    v2 = 0;
    if ( dword_140C5073C )
    {
      v3 = (ULONG_PTR *)(*(_QWORD *)(a1 + 2432) + 16LL);
      do
      {
        while ( 1 )
        {
          v4 = *v3;
          if ( *v3 == 0x3FFFFFFFFFLL )
            break;
          v5 = 48 * v4 - 0x220000000000LL;
          v6 = (unsigned __int8)sub_1402F2700(v5);
          if ( v4 <= qword_140C50840
            && (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
            && !_bittest64((const signed __int64 *)(v5 + 40), 0x28u)
            && (*(_BYTE *)(v5 + 34) & 7) == 0 )
          {
            sub_1402C8740(v4, 0LL, 0);
            sub_1402C6EB0(v4, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v9 = *((_QWORD *)CurrentPrcb + 4375);
                v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
                *(_DWORD *)(v9 + 20) &= v10;
                if ( v11 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v6);
        }
        ++v2;
        v3 += 11;
      }
      while ( v2 < dword_140C5073C );
    }
    *(_BYTE *)(a1 + 15589) = 0;
  }
}
