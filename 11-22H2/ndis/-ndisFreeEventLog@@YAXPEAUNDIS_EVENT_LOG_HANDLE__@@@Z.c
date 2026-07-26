/*
 * XREFs of ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x1C01406C0
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B0FC (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C0008EE0 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C00C4C1C (-ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C4F50 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisFreeEventLog(struct NDISWATCHDOG__ *a1)
{
  struct NDISWATCHDOG__ *v1; // rax
  struct _NDIS_EVENT_LOG *v2; // rbx
  unsigned int v3; // edi
  ULONG_PTR StackTrace; // rcx

  if ( a1 )
  {
    v1 = WatchdogFromHandle(a1);
    v2 = (struct _NDIS_EVENT_LOG *)v1;
    if ( ((_BYTE)v1[6] & 2) != 0 )
    {
      v3 = 0;
      if ( *((_DWORD *)v1 + 3) )
      {
        do
        {
          StackTrace = ndisGetNthEntry(v2, v3)->StackTrace;
          if ( (_DWORD)StackTrace )
            ndisReleaseStackTrace(StackTrace);
          ++v3;
        }
        while ( v3 < v2->NumEntries );
      }
    }
    ExFreePoolWithTag(v2, 0);
  }
}
