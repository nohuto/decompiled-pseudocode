/*
 * XREFs of FsRtlCheckLockForOplockRequest @ 0x14025B520
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall FsRtlCheckLockForOplockRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rsi
  char v4; // di
  unsigned __int64 v5; // rbx
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r8
  int v17; // eax

  v2 = *(unsigned __int64 **)(a1 + 24);
  if ( !v2 || !v2[4] && !v2[5] || !*a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 88) )
    return 0;
  v4 = 1;
  v5 = *a2 - 1LL;
  v6 = KeAcquireSpinLockRaiseToDpc(v2 + 3);
  v7 = v2 + 3;
  v8 = v6;
  if ( v5 >= *v2 )
  {
    KeReleaseSpinLockFromDpcLevel(v7);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    v4 = 0;
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(v7);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = *((_QWORD *)v10 + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(v10);
        }
      }
    }
  }
  __writecr8(v8);
  return v4;
}
