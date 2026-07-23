/*
 * XREFs of sub_14056B0EC @ 0x14056B0EC
 * Callers:
 *     sub_1409B2C30 @ 0x1409B2C30 (sub_1409B2C30.c)
 * Callees:
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     sub_1402EEAA8 @ 0x1402EEAA8 (sub_1402EEAA8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14056B0EC(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9
  unsigned int v4; // esi
  unsigned __int8 v5; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KeAlertThread(a1, 0);
  v4 = sub_1402EEAA8(a1, 1u);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
