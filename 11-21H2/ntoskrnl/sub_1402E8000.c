/*
 * XREFs of sub_1402E8000 @ 0x1402E8000
 * Callers:
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1405952D8 @ 0x1405952D8 (sub_1405952D8.c)
 *     sub_140599780 @ 0x140599780 (sub_140599780.c)
 *     sub_14059E8F0 @ 0x14059E8F0 (sub_14059E8F0.c)
 * Callees:
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_1402E80DC @ 0x1402E80DC (sub_1402E80DC.c)
 */

__int64 __fastcall sub_1402E8000(int a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r10
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r9

  if ( !a1 || KeGetCurrentIrql() >= 2u || (result = sub_14024B428(a2, 2 * (int)a2, a3), !*(_DWORD *)(a3 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v8 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a3 + 8) = CurrentIrql;
    v6 = sub_1402E80DC(a2);
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = a2;
    result = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_BYTE *)(a3 + 9) = 1;
    *(_QWORD *)(a3 + 16) = result;
  }
  return result;
}
