/*
 * XREFs of sub_140373D18 @ 0x140373D18
 * Callers:
 *     sub_1407F584C @ 0x1407F584C (sub_1407F584C.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

NTSTATUS sub_140373D18()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf

  v0 = ExAcquireSpinLockExclusive(&dword_140C55430);
  if ( !dword_140C55420 )
    KeResetEvent(&stru_140C55470);
  ++dword_140C55420;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55430);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v4 = *((_QWORD *)CurrentPrcb + 4375);
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
        *(_DWORD *)(v4 + 20) &= v5;
        if ( v6 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  KeSetEvent(&stru_140C55440, 0, 0);
  return KeWaitForSingleObject(&stru_140C55470, WrKernel, 0, 0, 0LL);
}
