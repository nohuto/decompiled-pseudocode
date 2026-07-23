/*
 * XREFs of sub_14058E0C0 @ 0x14058E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS sub_14058E0C0()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  int v4; // eax
  bool v5; // zf

  v0 = ExAcquireSpinLockExclusive(&dword_140C56920);
  byte_140C52B33 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v3 = *((_QWORD *)CurrentPrcb + 4375);
        v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v5 = (v4 & *(_DWORD *)(v3 + 20)) == 0;
        *(_DWORD *)(v3 + 20) &= v4;
        if ( v5 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  return ZwUpdateWnfStateData(&stru_1400134F8, 0LL, 0, 0LL, 0LL, 0, 0);
}
