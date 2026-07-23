/*
 * XREFs of sub_14036B0D0 @ 0x14036B0D0
 * Callers:
 *     sub_14025B380 @ 0x14025B380 (sub_14025B380.c)
 *     sub_1407EDF80 @ 0x1407EDF80 (sub_1407EDF80.c)
 *     sub_1407EFF14 @ 0x1407EFF14 (sub_1407EFF14.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14036B250 @ 0x14036B250 (sub_14036B250.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14036B0D0(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  PKSPIN_LOCK v3; // rbx
  unsigned __int64 v4; // rsi
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx
  PKSPIN_LOCK v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  __int64 v16; // r8

  v1 = 0;
  if ( SpinLock )
  {
    v3 = SpinLock;
    while ( 1 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(v3);
      if ( v3 != SpinLock )
      {
        v5 = (*((_DWORD *)v3 + 4))-- == 1;
        if ( !v5 )
          break;
      }
      v5 = (*((_DWORD *)v3 + 3))-- == 1;
      v6 = v3;
      if ( !v5 )
        goto LABEL_5;
      sub_14036B250(v3, 0LL);
      KeReleaseSpinLockFromDpcLevel(v8);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = *((_QWORD *)CurrentPrcb + 4375);
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v5 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= v12;
            if ( v5 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      v3 = (PKSPIN_LOCK)v3[36];
      if ( !v3 )
        return v1;
    }
    v6 = v3;
LABEL_5:
    KeReleaseSpinLockFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v16 = *((_QWORD *)v14 + 4375);
          v5 = (v15 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v15;
          if ( v5 )
            sub_140418E4C(v14);
        }
      }
    }
    __writecr8(v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
