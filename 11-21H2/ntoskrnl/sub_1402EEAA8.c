/*
 * XREFs of sub_1402EEAA8 @ 0x1402EEAA8
 * Callers:
 *     sub_140259668 @ 0x140259668 (sub_140259668.c)
 *     sub_1402EEA18 @ 0x1402EEA18 (sub_1402EEA18.c)
 *     sub_14056B0EC @ 0x14056B0EC (sub_14056B0EC.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 */

__int64 __fastcall sub_1402EEAA8(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  volatile signed __int32 *v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // ebp
  char v9; // al
  __int64 v11; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile signed __int32 *)(a1 + 736);
  sub_1402F3290(a1 + 736);
  v7 = *(char *)(a1 + 644);
  v8 = v7;
  if ( a2 > v7 )
    a2 = *(char *)(a1 + 644);
  if ( a2 )
  {
    if ( (_BYTE)v7 )
    {
      v9 = v7 - a2;
      *(_BYTE *)(a1 + 644) = v9;
      if ( !v9 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
        sub_1402EF710(a1, CurrentPrcb, 0LL);
    }
  }
  _InterlockedAnd(v6, 0xFFFFFF7F);
  sub_1402B0820((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v8;
}
