/*
 * XREFs of sub_140235D34 @ 0x140235D34
 * Callers:
 *     sub_14021378C @ 0x14021378C (sub_14021378C.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_14031C5D0 @ 0x14031C5D0 (sub_14031C5D0.c)
 *     sub_1405AF1CC @ 0x1405AF1CC (sub_1405AF1CC.c)
 *     sub_1405B2968 @ 0x1405B2968 (sub_1405B2968.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_140235E40 @ 0x140235E40 (sub_140235E40.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140235D34(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // r15d
  int v5; // r14d
  int v6; // esi
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf

  v3 = -1;
  v5 = *(_BYTE *)(a1 + 34) & 7;
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
  {
    v9 = (unsigned __int8)sub_1402F2700(a1);
    if ( _bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
    {
      v10 = sub_140235E40(a1);
      v6 = *(unsigned __int8 *)(v10 + 34) >> 6;
      v5 = *(_BYTE *)(v10 + 34) & 7;
      v3 = sub_140235E10(v10);
      if ( v10 != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  result = v3;
  *a3 = v6;
  *a2 = v5;
  return result;
}
