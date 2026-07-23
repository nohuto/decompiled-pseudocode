/*
 * XREFs of sub_1403699FC @ 0x1403699FC
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 *     sub_140990D08 @ 0x140990D08 (sub_140990D08.c)
 */

char __fastcall sub_1403699FC(unsigned int a1)
{
  char v2; // bl
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v10, 0, 32);
  if ( dword_140C232CC == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
  dword_140C232CC = a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  v2 = 1;
  sub_140750EC4(v10);
  sub_140990D08(a1, v10[3], v10[2]);
  return v2;
}
