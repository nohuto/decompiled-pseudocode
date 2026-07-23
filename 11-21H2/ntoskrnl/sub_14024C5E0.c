/*
 * XREFs of sub_14024C5E0 @ 0x14024C5E0
 * Callers:
 *     sub_14024C4D8 @ 0x14024C4D8 (sub_14024C4D8.c)
 * Callees:
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14024C5E0(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // rax
  int v16; // edx
  __int64 v17; // r9

  v2 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    do
    {
      v3 = *v2;
      if ( (*v2 & 1) == 0 )
        goto LABEL_19;
      v4 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    }
    while ( v4 > qword_140C50840 || (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    if ( (v3 & 0x200) == 0 )
      break;
LABEL_19:
    sub_14031C860(2uLL, BugCheckParameter1);
  }
  v5 = 48 * v4 - 0x220000000000LL;
  v6 = (unsigned __int8)sub_1402F2700(v5);
  v7 = *v2;
  if ( (*v2 & 1) == 0 || (v7 & 0x200) != 0 || v4 != ((v7 >> 12) & 0xFFFFFFFFFFLL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    goto LABEL_19;
  }
  sub_140274508(v5, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = *((_QWORD *)v15 + 4375);
        v13 = (v16 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v16;
        if ( v13 )
          sub_140418E4C(v15);
      }
    }
  }
  __writecr8(v6);
  return 48 * v4 - 0x220000000000LL;
}
