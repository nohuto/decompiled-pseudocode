/*
 * XREFs of ?ndisEventEntryCount@@YAKW4_NDIS_EVENT_LOG_SIZE@@@Z @ 0x1C011F5E8
 * Callers:
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C011F470 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEventEntryCount(int a1)
{
  int v2; // ebx
  int v3; // ebx
  int v5; // ebx
  int v6; // ebx

  if ( !MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( !a1 )
      return 4LL;
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( !v3 )
        return 32LL;
      if ( v3 == 1 )
        return 4096LL;
      return 4LL;
    }
    return 16LL;
  }
  if ( !a1 )
    return 16LL;
  v5 = a1 - 1;
  if ( !v5 )
    return 32LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 256LL;
  if ( v6 != 1 )
    return 16LL;
  return 4096LL;
}
