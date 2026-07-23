/*
 * XREFs of sub_14027CCE4 @ 0x14027CCE4
 * Callers:
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1407F1AF8 @ 0x1407F1AF8 (sub_1407F1AF8.c)
 *     sub_14082A974 @ 0x14082A974 (sub_14082A974.c)
 * Callees:
 *     sub_14027D258 @ 0x14027D258 (sub_14027D258.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14027CCE4(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v4; // si
  __int64 v8; // rbx
  unsigned __int8 v9; // di
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  int v20; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v8 = 48 * a1 - 0x220000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v20 = 0;
    v9 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v20);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  else
  {
    v9 = sub_1402F2700(48 * a1 - 0x220000000000LL);
  }
  v10 = *(_QWORD *)(v8 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v8 + 8) = a2;
  *(_QWORD *)(v8 + 24) = v10;
  *(_QWORD *)(v8 + 16) = sub_1402CCC50(128LL, v10);
  *(_WORD *)(v8 + 32) = 1;
  if ( (v4 & 0x80u) != 0 )
    v12 = v11 ^ ((v11 + 1) ^ v11) & 0x3FFFFFFFFFFFFFFFLL;
  else
    v12 = v11 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(v8 + 24) = v12;
  v13 = *(_BYTE *)(v8 + 34) | 0x10;
  *(_BYTE *)(v8 + 34) = v13;
  if ( (v4 & 0x200) != 0 )
    *(_BYTE *)(v8 + 34) = v13 & 0xF8 | 6;
  sub_14033C3E0(v8, a3);
  if ( a3 == a1 && (v4 & 0x800) == 0 )
  {
    v4 = 2048;
    *(_QWORD *)(v8 + 24) ^= ((*(_QWORD *)(v8 + 24) + 1LL) ^ *(_QWORD *)(v8 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = v9;
    __writecr8(v9);
  }
  if ( (v4 & 0x800) == 0 )
    return sub_14027D258(a3);
  return result;
}
