/*
 * XREFs of sub_140517C90 @ 0x140517C90
 * Callers:
 *     sub_14051B094 @ 0x14051B094 (sub_14051B094.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140517C90(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v5; // r15
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  ULONG ClearBitsAndSet; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf

  if ( byte_140C4BCBC )
    return 3221225659LL;
  v5 = (KSPIN_LOCK *)(a1 + 448);
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 448));
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 456), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v6 = -1073741670;
  }
  else
  {
    *(_DWORD *)(a2 + 48) = ClearBitsAndSet;
    if ( *(_QWORD *)(a1 + 72) )
      v6 = sub_14042A5E0(*(_QWORD *)(a1 + 16), a2);
  }
  KeReleaseSpinLockFromDpcLevel(v5);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v6;
}
