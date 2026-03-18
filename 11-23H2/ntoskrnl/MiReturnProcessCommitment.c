/*
 * XREFs of MiReturnProcessCommitment @ 0x140656668
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1406F7800 (MiChargeFullProcessCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), -a2);
}
