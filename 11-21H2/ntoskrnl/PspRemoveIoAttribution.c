/*
 * XREFs of PspRemoveIoAttribution @ 0x1406D4CBC
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x1406D4A68 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoStopDiskIoAttributionForContext @ 0x14024F74C (IoStopDiskIoAttributionForContext.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(struct _EX_RUNDOWN_REF **Object)
{
  struct _EX_RUNDOWN_REF **v1; // rdi
  __int64 v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( *((_DWORD *)Object + 385) )
  {
    IoStopDiskIoAttributionForContext(Object[193]);
    IoDiskIoAttributionDereference((__int64)Object[193]);
    Object[193] = 0LL;
    v1 = Object;
  }
  v5 = 0LL;
  v4[0] = 0LL;
  v4[1] = (__int64)v1;
  return PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v4, 5);
}
