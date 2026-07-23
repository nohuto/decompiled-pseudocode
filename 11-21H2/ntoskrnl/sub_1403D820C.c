/*
 * XREFs of sub_1403D820C @ 0x1403D820C
 * Callers:
 *     sub_140A70F90 @ 0x140A70F90 (sub_140A70F90.c)
 * Callees:
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void sub_1403D820C()
{
  __int64 v0; // rdi
  signed __int64 *v1; // r14
  signed __int64 v2; // rsi
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v0 = 0LL;
  v1 = qword_140C52BD8;
  do
  {
    v2 = *v1;
    if ( (*v1 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_140C52BD8[v0], 0LL);
      v3 = v2 - 1;
      v4 = (unsigned __int8)sub_1402F2700(v3);
      v5 = sub_14033C2A0(v3);
      sub_140336AD8(v3);
      v6 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      if ( v5 )
        sub_1402E20D0(v6, v5, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
}
