/*
 * XREFs of PspRemoveIoAttribution @ 0x1407D85E0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x1407D82E4 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1403625C8 (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(struct _EX_RUNDOWN_REF **Object)
{
  struct _EX_RUNDOWN_REF **v1; // rdi
  __int64 v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( *((_DWORD *)Object + 391) )
  {
    IoStopDiskIoAttributionForContext(Object[196]);
    IoDiskIoAttributionDereference((__int64)Object[196]);
    Object[196] = 0LL;
    v1 = Object;
  }
  v5 = 0LL;
  v4[0] = 0LL;
  v4[1] = (__int64)v1;
  return PspEnumJobsAndProcessesInJobHierarchy(
           Object,
           (int)PspSetJobIoAttributionJobPreCallback,
           0,
           (int)PspSetJobIoAttributionProcessCallback,
           (__int64)v4,
           5);
}
