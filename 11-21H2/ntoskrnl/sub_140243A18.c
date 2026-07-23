/*
 * XREFs of sub_140243A18 @ 0x140243A18
 * Callers:
 *     sub_1403C5610 @ 0x1403C5610 (sub_1403C5610.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 *     sub_140B28AB0 @ 0x140B28AB0 (sub_140B28AB0.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140243A18(_QWORD *a1, LARGE_INTEGER *a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  *a1 = MEMORY[0xFFFFF78000000014];
  *a2 = stru_140D06BB8;
  *a3 = qword_140D06DA8;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
