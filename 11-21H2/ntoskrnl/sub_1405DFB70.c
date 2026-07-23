/*
 * XREFs of sub_1405DFB70 @ 0x1405DFB70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405DFB70(PKSPIN_LOCK SpinLock, char *a2, KSPIN_LOCK *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v7; // rbp
  char v8; // r12
  KSPIN_LOCK v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  v3 = 0;
  if ( SpinLock )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    if ( (SpinLock[1] & 3) == 3 )
    {
      v8 = 1;
      v9 = MEMORY[0xFFFFF78000000008] - SpinLock[3];
    }
    else
    {
      v8 = 0;
      v9 = 0LL;
    }
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( a2 )
      *a2 = v8;
    if ( a3 )
      *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
