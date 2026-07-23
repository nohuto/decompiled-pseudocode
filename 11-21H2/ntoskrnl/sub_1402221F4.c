/*
 * XREFs of sub_1402221F4 @ 0x1402221F4
 * Callers:
 *     sub_1402220E0 @ 0x1402220E0 (sub_1402220E0.c)
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 * Callees:
 *     sub_140222280 @ 0x140222280 (sub_140222280.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062D678 @ 0x14062D678 (sub_14062D678.c)
 */

__int64 __fastcall sub_1402221F4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  int v5; // r9d
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    a3 = (unsigned int)a2 | *(_DWORD *)(v7 + 20);
    *(_DWORD *)(v7 + 20) = a3;
  }
  v5 = *(_DWORD *)(a1 + 13272);
  if ( v5 )
  {
    a3 = *(unsigned int *)(a1 + 32428);
    if ( (int)a3 >= v5 )
      sub_14062D678(*(_QWORD *)(a1 + 8), a1);
  }
  *(_DWORD *)(a1 + 32428) = 0;
  sub_140222280(a1, a2, a3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
