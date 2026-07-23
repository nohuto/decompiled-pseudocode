/*
 * XREFs of sub_140365EB4 @ 0x140365EB4
 * Callers:
 *     sub_140367B44 @ 0x140367B44 (sub_140367B44.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140365F80 @ 0x140365F80 (sub_140365F80.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

ULONG_PTR __fastcall sub_140365EB4(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  ULONG_PTR v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v15; // edx
  __int64 v16; // r9
  bool v17; // zf

  v8 = ExAcquireSpinLockShared(&dword_140C11780);
  v9 = sub_140365F80(BugCheckParameter2, 0LL);
  if ( (*(_DWORD *)(v9 + 12) & 0x800) != 0 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    v11 = BugCheckParameter2 ^ qword_140D06E00 ^ *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v9 + 24) = a3 ^ BugCheckParameter2 ^ qword_140D06E00;
    *a5 = v10;
    *a4 = *(_QWORD *)(v9 + 16);
  }
  else
  {
    v11 = -1LL;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C11780);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = (v15 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v15;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v11;
}
