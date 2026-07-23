/*
 * XREFs of sub_1405D04CC @ 0x1405D04CC
 * Callers:
 *     sub_140990548 @ 0x140990548 (sub_140990548.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1405D04CC(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  if ( a1 <= 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C22160);
    if ( byte_140C22168 || a1 < dword_140C2216C )
    {
      sub_1402D5F7C(0xAu);
      dword_140C2216C = a1;
      byte_140C22168 = 0;
      KeSetTimer2((__int64)&unk_140C22170, a1 != 0 ? -50000000LL : -600000000LL, 0LL, 0LL);
      byte_140C221F8 = 1;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C22160);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v6;
          if ( v7 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
