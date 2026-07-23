/*
 * XREFs of sub_1405E4244 @ 0x1405E4244
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1405E41E0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405E4244(ULONG_PTR a1)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r9
  struct _EX_RUNDOWN_REF **v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rdi
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436244u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  ExInitializeRundownProtection(PoolWithTag + 1);
  LODWORD(v3->Count) = 0;
  v3[2].Count = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140CF6640);
  v7 = (struct _EX_RUNDOWN_REF **)off_140C04348;
  v8 = v3 + 3;
  if ( *off_140C04348 != (_UNKNOWN *)&off_140C04340 )
    __fastfail(3u);
  v8->Count = (ULONG_PTR)&off_140C04340;
  v8[1].Count = (ULONG_PTR)v7;
  *v7 = v8;
  off_140C04348 = (_UNKNOWN **)v8;
  byte_140C548B0 = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140CF6640);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
