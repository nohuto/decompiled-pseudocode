/*
 * XREFs of RtlpHpEnvFreeVA @ 0x180047828
 * Callers:
 *     RtlpHpFreeVA @ 0x180047764 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrAlloc @ 0x18004A7C0 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x180064760 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x180064C48 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180064CC8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180081C14 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RtlpHpEnvFreeVA(PVOID *BaseAddress, PSIZE_T RegionSize, __int16 a3, int a4, __int64 a5)
{
  ULONG v5; // r8d

  v5 = a3 & 0xC000;
  if ( a4 == 5 )
    return ((__int64 (__fastcall *)(__int64, __int64, PVOID *, PSIZE_T, ULONG))(a5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a5 + 16)))(
             a5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a5,
             -1LL,
             BaseAddress,
             RegionSize,
             v5);
  else
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, RegionSize, v5);
}
