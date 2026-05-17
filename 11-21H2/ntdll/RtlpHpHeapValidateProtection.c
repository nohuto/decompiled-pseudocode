/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x1800227CC
 * Callers:
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     RtlpHpSegMgrReserve @ 0x18005675C (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]

  v2 = a2;
  if ( a2 == 64 && ((int)ZwQueryVirtualMemory(-1LL, a1, 3LL, &v5, 48LL, 0LL) < 0 || (v6 & 0x60) == 0 || v5 != a1) )
  {
    RtlpLogHeapFailure(0, a1, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
