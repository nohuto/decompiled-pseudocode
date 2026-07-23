/*
 * XREFs of MiPrepareDriverPatchState @ 0x140A2B8D4
 * Callers:
 *     MiLockPatchIatForDV @ 0x1406409F0 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x1406438BC (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x140885AC8 (MiCompleteSecureDriverLoad.c)
 *     MiLockAndMapEntireDriver @ 0x140A34578 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3C018 (MiUnapplyDriverHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 a1, __int64 a2)
{
  PVOID Pool; // rcx

  Pool = MiAllocatePool(
           64,
           8 * ((*(_DWORD *)(a1 + 24) >> 6) + (unsigned int)((*(_DWORD *)(a1 + 24) & 0x3F) != 0)),
           0x4D425044u);
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = Pool;
  *(_DWORD *)(a1 + 96) = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(*(_QWORD *)a1 + 48LL)) )
    *(_DWORD *)(a1 + 96) = 2;
  *(_QWORD *)(a1 + 16) = a2;
  return 0LL;
}
