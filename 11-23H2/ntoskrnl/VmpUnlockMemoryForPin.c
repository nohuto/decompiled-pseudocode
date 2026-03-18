/*
 * XREFs of VmpUnlockMemoryForPin @ 0x1409DD7E0
 * Callers:
 *     VmpMergeMemoryRanges @ 0x1405F9FC4 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x1405FA330 (VmpPinMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1405FACF4 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405FB0B0 (VmpSplitMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x1405FB554 (VmpUnpinMemoryRange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0260 (MmUnsecureVirtualMemory.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2D800 (MmUnlockPhysicalPagesByVa.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x140A31F6C (MmAdjustSecuredVirtualMemorySize.c)
 */

void __fastcall VmpUnlockMemoryForPin(
        struct _EX_RUNDOWN_REF *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // rdx

  MmUnlockPhysicalPagesByVa(a3 << 12, a4 << 12, a3, a7 != 0);
  if ( a4 == a6 )
  {
    MmUnsecureVirtualMemory(a2);
    ExReleaseRundownProtection_0(a1 + 12);
  }
  else
  {
    v11 = a5 + a4;
    if ( a3 != a5 )
      v11 = a5;
    if ( (int)MmAdjustSecuredVirtualMemorySize(a2, v11 << 12, (a6 - a4) << 12) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  }
}
