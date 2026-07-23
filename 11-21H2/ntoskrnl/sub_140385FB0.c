/*
 * XREFs of sub_140385FB0 @ 0x140385FB0
 * Callers:
 *     sub_140379C24 @ 0x140379C24 (sub_140379C24.c)
 *     sub_140385584 @ 0x140385584 (sub_140385584.c)
 * Callees:
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_140385FB0(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // ebx
  unsigned __int64 v4; // r13
  __int64 v5; // rbp
  unsigned __int8 v6; // al
  unsigned int v7; // ecx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf

  v1 = (_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  do
  {
    if ( *v1 == -1LL )
      break;
    v5 = 48LL * *v1 - 0x220000000000LL;
    v6 = sub_1402F2700(v5);
    v7 = v3 & 0xFFFFFFFD;
    v8 = v6;
    v3 |= 2u;
    if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 )
      v3 = v7;
    v9 = sub_14028C82C(v5, v3);
    if ( v9 )
      v10 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
    else
      v10 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( v9 )
      sub_1402E20D0(v10, v9, 0);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
}
