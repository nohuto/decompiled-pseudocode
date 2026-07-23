/*
 * XREFs of sub_14036C868 @ 0x14036C868
 * Callers:
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_1403B770C @ 0x1403B770C (sub_1403B770C.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1407F1AF8 @ 0x1407F1AF8 (sub_1407F1AF8.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B0A508 @ 0x140B0A508 (sub_140B0A508.c)
 *     sub_140B5273C @ 0x140B5273C (sub_140B5273C.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14036C868(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  if ( a3 )
    v5 = 17;
  else
    v5 = sub_1402F2700(a1);
  result = 0xFFFFFFFFFFE0000LL;
  *(_QWORD *)a1 ^= (*(_QWORD *)a1 ^ (a2 << 13)) & 0xFFFFFFFFFFE0000LL;
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
