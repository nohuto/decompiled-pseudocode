/*
 * XREFs of RtlpExtendLowFragHeapSegment @ 0x18007A2EC
 * Callers:
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18007A0E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpInitializeSegmentInfoForBucket @ 0x18007A298 (RtlpInitializeSegmentInfoForBucket.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 */

NTSTATUS __fastcall RtlpExtendLowFragHeapSegment(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  PVOID *v4; // rsi
  __int64 v7; // rbp
  NTSTATUS result; // eax
  _DWORD *v9; // rcx
  ULONG Protect; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[4];
  v4 = (PVOID *)(a1 + 5);
  v7 = v3 + a2;
  if ( (unsigned __int64)(v3 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v3;
    result = 0;
    a1[4] = v7;
    return result;
  }
  v9 = (_DWORD *)a1[3];
  RegionSize = (v7 - (_QWORD)*v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = RtlpGetHeapProtection(v9, 1);
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4, 0LL, &RegionSize, 0x1000u, Protect);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1[3] + 576LL) += RegionSize;
    v11 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(
        a1[3],
        (int)*v4,
        RegionSize,
        16 * *(_QWORD *)(a1[3] + 192LL),
        (HANDLE)*(unsigned __int8 *)v11);
      RtlpLogHeapCommit(a1[3], *v4, RegionSize, 9LL);
    }
    *v4 = (char *)*v4 + RegionSize;
    v3 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
