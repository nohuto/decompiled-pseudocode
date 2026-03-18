/*
 * XREFs of PsReturnProcessQuota @ 0x1402EA0CC
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     MmDeleteProcessAddressSpace @ 0x1407059E8 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x1402AD0A0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 3, a3);
  return result;
}
