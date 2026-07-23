/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x180046858
 * Callers:
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpHpSegMgrCommit @ 0x1800471E0 (RtlpHpSegMgrCommit.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlpHpSegMgrReserve @ 0x18004AEC8 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(PVOID BaseAddress, unsigned int a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  NTSTATUS v7; // eax
  PVOID MemoryInformation; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+48h] [rbp-30h]

  v4 = a2;
  if ( a2 == 64 )
  {
    if ( a3 == 5 )
      v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, PVOID, __int64, PVOID *, __int64, _QWORD))(a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a4 + 24)))(
             a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4,
             -1LL,
             BaseAddress,
             3LL,
             &MemoryInformation,
             48LL,
             0LL);
    else
      v7 = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             MemoryRegionInformation,
             &MemoryInformation,
             0x30uLL,
             0LL);
    if ( v7 < 0 || (v9 & 0x60) == 0 || MemoryInformation != BaseAddress )
    {
      RtlpLogHeapFailure(0, (_DWORD)BaseAddress, 1, v9, 0LL, 0LL);
      return 4;
    }
  }
  return v4;
}
