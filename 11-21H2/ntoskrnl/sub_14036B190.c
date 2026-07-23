/*
 * XREFs of sub_14036B190 @ 0x14036B190
 * Callers:
 *     sub_1407EDF80 @ 0x1407EDF80 (sub_1407EDF80.c)
 *     sub_1407EFF14 @ 0x1407EFF14 (sub_1407EFF14.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14036B250 @ 0x14036B250 (sub_14036B250.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14036B190(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  PKSPIN_LOCK v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  KSPIN_LOCK *v6; // rcx
  PKSPIN_LOCK v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  __int64 v17; // r8

  v1 = 0;
  if ( SpinLock )
  {
    v3 = SpinLock;
    while ( 1 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(v3);
      if ( v3 != SpinLock && ++*((_DWORD *)v3 + 4) != 1 )
        break;
      ++*((_DWORD *)v3 + 3);
      v6 = v3;
      if ( *((_DWORD *)v3 + 3) != 1 )
        goto LABEL_5;
      LOBYTE(v4) = 1;
      sub_14036B250(v3, v4);
      KeReleaseSpinLockFromDpcLevel(v8);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = *((_QWORD *)CurrentPrcb + 4375);
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= v12;
            if ( v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
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
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v17 = *((_QWORD *)v15 + 4375);
          v13 = (v16 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v16;
          if ( v13 )
            sub_140418E4C(v15);
        }
      }
    }
    __writecr8(v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
