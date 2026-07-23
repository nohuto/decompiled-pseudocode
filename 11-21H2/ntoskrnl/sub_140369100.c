/*
 * XREFs of sub_140369100 @ 0x140369100
 * Callers:
 *     sub_1407EDC40 @ 0x1407EDC40 (sub_1407EDC40.c)
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_14099CFAC @ 0x14099CFAC (sub_14099CFAC.c)
 *     sub_14099D0FC @ 0x14099D0FC (sub_14099D0FC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140994308 @ 0x140994308 (sub_140994308.c)
 */

char __fastcall sub_140369100(unsigned int a1)
{
  char v2; // bl
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F360);
  if ( byte_140C22724 )
  {
    KeCancelTimer2((__int64)&unk_140C1F2A0);
    byte_140C22724 = 0;
    v2 = 1;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F360);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
    sub_140994308(a1);
  return v2;
}
