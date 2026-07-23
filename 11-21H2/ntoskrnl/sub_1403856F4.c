/*
 * XREFs of sub_1403856F4 @ 0x1403856F4
 * Callers:
 *     sub_140385584 @ 0x140385584 (sub_140385584.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1403856F4(_DWORD *a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // r14
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rbx
  __int64 v8; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf

  v1 = a1 + 12;
  v2 = (unsigned __int64)&a1[2 * (((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12)
                           + 12];
  while ( (unsigned __int64)v1 < v2 )
  {
    v3 = 48LL * *v1 - 0x220000000000LL;
    v4 = (unsigned __int8)sub_1402F2700(v3);
    v5 = sub_140232694((unsigned __int64 *)(v3 + 16), 1, 0);
    v6 = *(_BYTE *)(v3 + 34);
    v7 = v5;
    if ( (v6 & 0x10) == 0 )
      *(_BYTE *)(v3 + 34) = v6 | 0x10;
    v8 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( v7 )
      sub_1402E20D0(v8, v7, 0);
    ++v1;
  }
}
