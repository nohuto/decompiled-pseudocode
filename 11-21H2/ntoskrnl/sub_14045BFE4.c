/*
 * XREFs of sub_14045BFE4 @ 0x14045BFE4
 * Callers:
 *     sub_14045C0E8 @ 0x14045C0E8 (sub_14045C0E8.c)
 * Callees:
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14045BFE4(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf

  result = sub_140315D60(a2, a6, 0);
  if ( !result )
    return 0LL;
  if ( (*(_BYTE *)(result + 34) & 7) != 3
    || *(_WORD *)(result + 32)
    || (*(_QWORD *)(result + 16) & 0xFFFFFFFFFC00FC1FuLL) != a3 )
  {
    goto LABEL_10;
  }
  if ( qword_140C50780 && (a3 & 0x10) == 0 )
    a3 &= ~qword_140C50780;
  if ( _bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
  {
LABEL_10:
    v9 = (unsigned __int8)*a6;
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    return 0LL;
  }
  return result;
}
