/*
 * XREFs of sub_1402FDA80 @ 0x1402FDA80
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     sub_1403C773C @ 0x1403C773C (sub_1403C773C.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     sub_140713440 @ 0x140713440 (sub_140713440.c)
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 *     sub_140761128 @ 0x140761128 (sub_140761128.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407B4CE0 (MmIsDriverVerifyingByAddress.c)
 *     sub_1408024FC @ 0x1408024FC (sub_1408024FC.c)
 *     sub_14080F66C @ 0x14080F66C (sub_14080F66C.c)
 *     MmAddVerifierSpecialThunks @ 0x140969FB0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14096A0D0 (MmAddVerifierThunks.c)
 *     sub_140970DA0 @ 0x140970DA0 (sub_140970DA0.c)
 *     sub_14097F73C @ 0x14097F73C (sub_14097F73C.c)
 *     sub_140A4F9F4 @ 0x140A4F9F4 (sub_140A4F9F4.c)
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 *     sub_140B2FE74 @ 0x140B2FE74 (sub_140B2FE74.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall sub_1402FDA80(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  unsigned __int8 v9; // cl
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf

  CurrentThread = 0LL;
  CurrentIrql = 17;
  v6 = 0LL;
  if ( a2 == 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 0xFu )
    {
      v9 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && v9 <= 0xFu )
        {
          v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v11 + 20) |= (-1 << (v9 + 1)) & 0xFFFC;
        }
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140D311C0);
  }
  else if ( a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v7 = (_QWORD *)BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    do
    {
      v10 = *(v7 - 23);
      if ( a1 > v10 + (unsigned int)(*((_DWORD *)v7 - 42) - 1) )
      {
        v7 = (_QWORD *)v7[1];
      }
      else
      {
        if ( a1 >= v10 )
        {
          if ( v7 )
            v6 = v7 - 29;
          break;
        }
        v7 = (_QWORD *)*v7;
      }
    }
    while ( v7 );
  }
  if ( a2 == 2 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140D311C0);
    if ( CurrentIrql < 0xFu )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else if ( a2 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    sub_1402AC800((__int64)CurrentThread);
  }
  return v6;
}
