/*
 * XREFs of sub_1403DDF0C @ 0x1403DDF0C
 * Callers:
 *     IoStopTimer @ 0x1403DDEF0 (IoStopTimer.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DBE4 @ 0x14062DBE4 (sub_14062DBE4.c)
 */

char __fastcall sub_1403DDF0C(__int64 a1)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // rsi
  int v4; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140D31140);
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    v2 = --dword_140C47150 == 0;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D31140);
  LOBYTE(v4) = dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      LOBYTE(v4) = KeGetCurrentIrql();
      if ( (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v7 = (v4 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v4;
        if ( v7 )
          LOBYTE(v4) = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( (DWORD2(xmmword_140D06900) & 0x800000) != 0 )
    LOBYTE(v4) = sub_14062DBE4(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    LOBYTE(v4) = KeCancelTimer(&stru_140C47160);
  return v4;
}
