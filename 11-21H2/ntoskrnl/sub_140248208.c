/*
 * XREFs of sub_140248208 @ 0x140248208
 * Callers:
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 * Callees:
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140248208(__int64 a1, int a2)
{
  unsigned __int8 v3; // di
  char v4; // al
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  if ( a2 )
    v3 = 17;
  else
    v3 = sub_1402F2700(a1);
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  sub_140313CA0(a1, 0LL, 1LL);
  v4 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v4;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = sub_1402E89B0(a1 + 16, v5, 0x7FFFFFFFFFFFFFFFLL);
  if ( v3 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), v7);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
