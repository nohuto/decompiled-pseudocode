/*
 * XREFs of sub_140398DF0 @ 0x140398DF0
 * Callers:
 *     sub_14080877C @ 0x14080877C (sub_14080877C.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140369FDC @ 0x140369FDC (sub_140369FDC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140398DF0(char a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned int i; // edi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C234A8);
  if ( a1 )
  {
    KeCancelTimer(&stru_140C23460);
    qword_140C222E8 = 0LL;
    for ( i = 0; i < dword_140C222E0; ++i )
      sub_140369FDC(qword_140C234A0, 4u);
    dword_140C222E0 = 0;
    qword_140C222E8 = 0LL;
  }
  byte_140C222F0 = a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C234A8);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
