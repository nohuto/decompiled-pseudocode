/*
 * XREFs of sub_1402F6220 @ 0x1402F6220
 * Callers:
 *     PsGetEffectiveContainerId @ 0x140234210 (PsGetEffectiveContainerId.c)
 *     sub_1402F5EA0 @ 0x1402F5EA0 (sub_1402F5EA0.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 *     sub_1406BCB64 @ 0x1406BCB64 (sub_1406BCB64.c)
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_1409663D0 @ 0x1409663D0 (sub_1409663D0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void *__fastcall sub_1402F6220(__int64 a1, _DWORD *a2)
{
  void *result; // rax
  KIRQL v5; // al
  void *v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  result = *(void **)(a1 + 1552);
  *a2 = 0;
  if ( result && (struct _KTHREAD *)a1 != KeGetCurrentThread() )
  {
    v5 = ExAcquireSpinLockShared(&dword_140C1BEA4);
    v6 = *(void **)(a1 + 1552);
    v7 = v5;
    if ( v6 )
    {
      ObfReferenceObjectWithTag(v6, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C1BEA4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    return v6;
  }
  return result;
}
