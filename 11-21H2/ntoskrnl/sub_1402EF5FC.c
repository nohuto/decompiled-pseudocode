/*
 * XREFs of sub_1402EF5FC @ 0x1402EF5FC
 * Callers:
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_14079FBD4 @ 0x14079FBD4 (sub_14079FBD4.c)
 *     sub_1407D7CA0 @ 0x1407D7CA0 (sub_1407D7CA0.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 */

__int64 __fastcall sub_1402EF5FC(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v4; // r8
  int v5; // r14d
  int v6; // esi
  __int64 v8; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  sub_1402F3290(a1 + 736);
  v5 = *(char *)(a1 + 644);
  v6 = (*(_DWORD *)(a1 + 120) >> 14) & 1;
  if ( v5 | v6 )
  {
    *(_BYTE *)(a1 + 794) &= 0xF9u;
    *(_BYTE *)(a1 + 644) = 0;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xEu);
  }
  LOBYTE(v4) = 1;
  sub_1402EF710(a1, CurrentPrcb, v4);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  sub_1402B0820((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return (unsigned int)(v6 + v5);
}
