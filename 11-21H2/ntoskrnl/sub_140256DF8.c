/*
 * XREFs of sub_140256DF8 @ 0x140256DF8
 * Callers:
 *     sub_14024129C @ 0x14024129C (sub_14024129C.c)
 *     sub_14027B194 @ 0x14027B194 (sub_14027B194.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 *     sub_1405BBA5C @ 0x1405BBA5C (sub_1405BBA5C.c)
 *     sub_1406F40E0 @ 0x1406F40E0 (sub_1406F40E0.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 * Callees:
 *     sub_140256EAC @ 0x140256EAC (sub_140256EAC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140256DF8(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rsi
  __int64 v6; // r9
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = sub_140256EAC(a1, a2, a3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
