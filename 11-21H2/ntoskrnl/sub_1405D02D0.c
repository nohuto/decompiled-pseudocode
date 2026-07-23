/*
 * XREFs of sub_1405D02D0 @ 0x1405D02D0
 * Callers:
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D868C @ 0x1405D868C (sub_1405D868C.c)
 */

__int64 __fastcall sub_1405D02D0(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // r9
  unsigned __int8 v3; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v5; // r8
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  LOBYTE(v9) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  sub_1405D868C((char *)KeGetCurrentPrcb() + 33832, &qword_14003A6D0, 16LL, &v9);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v3 = KeGetCurrentIrql();
      if ( v3 <= 0xFu && CurrentIrql <= 0xFu && v3 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
