/*
 * XREFs of sub_1405E439C @ 0x1405E439C
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1405E41E0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405E439C(void *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi
  __int64 v4; // r9
  _UNKNOWN **i; // rdx
  struct _EX_RUNDOWN_REF *v6; // rsi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  ULONG_PTR Count; // rdx
  struct _EX_RUNDOWN_REF **v14; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v3 = 0;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140CF6640);
  for ( i = (_UNKNOWN **)off_140C04340; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &off_140C04340 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140CF6640);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v7 = KeGetCurrentIrql();
          if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return (unsigned int)-1073741275;
    }
    v6 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw(v6);
      if ( (_InterlockedOr((volatile signed __int32 *)v6, 1u) & 1) == 0 )
        break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140CF6640);
  ExWaitForRundownProtectionRelease(v6 + 1);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140CF6640);
  Count = v6[3].Count;
  v14 = (struct _EX_RUNDOWN_REF **)v6[4].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &v6[3] || *v14 != &v6[3] )
    __fastfail(3u);
  *v14 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v14;
  if ( v14 == (struct _EX_RUNDOWN_REF **)Count )
    byte_140C548B0 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140CF6640);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v11 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(v6, 0);
  return v3;
}
