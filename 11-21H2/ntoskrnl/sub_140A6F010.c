/*
 * XREFs of sub_140A6F010 @ 0x140A6F010
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1407D6CBC @ 0x1407D6CBC (sub_1407D6CBC.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_140A47884 @ 0x140A47884 (sub_140A47884.c)
 */

__int64 sub_140A6F010()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf

  if ( sub_1407D6F54(0) )
  {
    sub_140A47884(0, 0);
    sub_1407D6CBC();
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140CE2020);
    if ( qword_140D01140 )
      KeSetEvent((PRKEVENT)qword_140D01140, 0, 0);
    KeReleaseSpinLockFromDpcLevel(&qword_140CE2020);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = *((_QWORD *)CurrentPrcb + 4375);
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
          *(_DWORD *)(v4 + 20) &= v5;
          if ( v6 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v0);
  }
  return sub_1402E2D20((unsigned __int64)&stru_140CF5FD0, -1800000000LL, 0, 0, (__int64)&stru_140CF5F90);
}
