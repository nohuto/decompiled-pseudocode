/*
 * XREFs of NdisNblTrackerRecordEvent @ 0x1C0072310
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall NdisNblTrackerRecordEvent(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, 0LL, a3, a2, a4);
}
