/*
 * XREFs of sub_1403B5600 @ 0x1403B5600
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14036B250 @ 0x14036B250 (sub_14036B250.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403B5600(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // rsi
  int v4; // eax
  bool v6; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v9; // edx
  __int64 v10; // r9

  v1 = 0;
  if ( SpinLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v4 = *((_DWORD *)SpinLock + 2);
    if ( (v4 & 0x10) != 0 )
    {
      v6 = (*((_DWORD *)SpinLock + 3))-- == 1;
      *((_DWORD *)SpinLock + 2) = v4 & 0xFFFFFFEF;
      if ( v6 )
        sub_14036B250((__int64)SpinLock, 0);
    }
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = (v9 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v9;
          if ( v6 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
