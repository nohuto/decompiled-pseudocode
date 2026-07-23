/*
 * XREFs of RtlpFindAndCommitPages @ 0x180020B1C
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCreateUCREntry @ 0x180020E2C (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1800210AC (RtlpFindUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x180021140 (RtlpRemoveUCRBlock.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  _QWORD *UCREntry; // rax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  ULONG Protect; // r15d
  NTSTATUS v11; // eax
  __int64 v12; // r15
  __int64 v13; // rcx
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rdx
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  PVOID BaseAddressa; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = (_QWORD *)RtlpFindUCREntry(BaseAddress, *RegionSize);
  v5 = UCREntry;
  if ( UCREntry == BaseAddress + 30 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && UCREntry[5] < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v6 = (unsigned __int64)(v5 - 2);
  v7 = *((unsigned __int8 *)v5 - 2);
  if ( (_BYTE)v7 )
    v8 = (_QWORD *)((v6 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000);
  else
    v8 = BaseAddress;
  BaseAddressa = (PVOID)v5[4];
  if ( RtlpHeapKey != BaseAddress[45] )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(RtlpHeapKey ^ BaseAddress[45]))(
            BaseAddress,
            &BaseAddressa,
            RegionSize);
  }
  else
  {
    v9 = *RegionSize;
    if ( v5[5] - *RegionSize <= 16LL * BaseAddress[22]
      && v5[5] < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
    {
      v9 = v5[5];
    }
    *RegionSize = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpHpHeapValidateProtection(BaseAddress);
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                         *RegionSize,
                         BaseAddress[72] - BaseAddress[83],
                         BaseAddress,
                         BaseAddress + 47) )
      v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    else
      v11 = -1073741523;
    ++*((_DWORD *)BaseAddress + 156);
  }
  if ( v11 < 0 )
  {
    ++*((_DWORD *)BaseAddress + 158);
    return 0LL;
  }
  v12 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v13 = 2147353472LL;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, *RegionSize, 2LL);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v6 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v5 - 2);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  RtlpRemoveUCRBlock(BaseAddress, v5);
  --*((_DWORD *)v8 + 21);
  *((_DWORD *)v8 + 20) -= v5[5] >> 12;
  BaseAddress[72] += v5[5];
  ++*((_DWORD *)BaseAddress + 152);
  --*((_DWORD *)BaseAddress + 151);
  v14 = v5[5];
  if ( v14 >= 0xFF000 )
  {
    BaseAddress[73] -= v14;
    v14 = v5[5];
  }
  v15 = *RegionSize;
  if ( v14 > *RegionSize || v14 + v5[4] == v8[9] )
  {
    RtlpCreateUCREntry(
      (_DWORD)BaseAddress,
      (_DWORD)v8,
      *((_DWORD *)v5 + 8) + v15 - 48,
      v14 - v15,
      (__int64)(v5 - 2),
      (__int64)RegionSize);
    *RegionSize *= 16LL;
  }
  else
  {
    *RegionSize = v15 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v16 = (_QWORD *)v8[5];
  if ( v16 == v8 )
  {
    LOBYTE(v17) = 0;
  }
  else
  {
    v17 = ((v6 - (unsigned __int64)v8) >> 16) + 1;
    if ( v17 >= 0xFE )
      RtlpLogHeapFailure(3, (_DWORD)v16, v6, (_DWORD)v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v17;
  if ( RtlGetCurrentServiceSessionId() )
    v18 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent((int)BaseAddress, v6, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v12);
  }
  v19 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v20 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v20 = 2147353482LL;
  if ( *(_BYTE *)v20 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v19 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent((int)BaseAddress, v6, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v19);
  }
  return v6;
}
