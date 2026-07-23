/*
 * XREFs of sub_140A89224 @ 0x140A89224
 * Callers:
 *     sub_140A85B10 @ 0x140A85B10 (sub_140A85B10.c)
 *     sub_140A868E0 @ 0x140A868E0 (sub_140A868E0.c)
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A89224(ULONG_PTR a1)
{
  _QWORD *v1; // r14
  KSPIN_LOCK *v2; // rbx
  KIRQL v4; // al
  PVOID *v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  PVOID *v12; // rbx
  __int64 v13; // rsi
  LONG_PTR v14; // rax
  ULONG_PTR v15; // rbx

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (KSPIN_LOCK *)(a1 + 280);
  v1[1] = *(_QWORD *)(a1 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  v5 = *(PVOID **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  v6 = v4;
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v5 )
  {
    v12 = v5;
    v13 = 32LL;
    do
    {
      if ( *v12 )
        MmFreeContiguousMemory(*v12);
      ++v12;
      --v13;
    }
    while ( v13 );
    ExFreePoolWithTag(v5, 0);
  }
  v14 = ObfDereferenceObject(v1);
  v15 = v14;
  if ( *(int *)(a1 + 36) > 0 && v14 && (v14 != 1 || !*(_BYTE *)(a1 + 34)) )
  {
    sub_140A88948(
      byte_140C0D990,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v14,
      (__int64)v1,
      a1);
    sub_1405FFA20(0xE6u, 0x11uLL, v15, (ULONG_PTR)v1, a1, byte_140C0D990);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
