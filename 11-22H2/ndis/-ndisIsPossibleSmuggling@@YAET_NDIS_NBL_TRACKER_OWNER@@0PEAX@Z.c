/*
 * XREFs of ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C0071B38
 * Callers:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 * Callees:
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

char __fastcall ndisIsPossibleSmuggling(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a2 == 24 )
  {
    v2 = ndisSourceHandleFromOwner(a1);
    return v3 != v2;
  }
  if ( (a1 & 1) != (a2 & 1) )
    return 1;
  if ( (a2 & 1) != 0 )
    return (a1 & 4) == 0 && (a2 & 4) == 0 && ((a2 ^ a1) & 0xFFFFFFFFFFFFFFF8uLL) != 0;
  return a1 != a2;
}
