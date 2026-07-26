/*
 * XREFs of ??$ndisIterativeDPGetNumNbls@$01@@YAKPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0034D2C
 * Callers:
 *     ??$ndisIterativeDPAddNblsToTracker@$01@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0034C30 (--$ndisIterativeDPAddNblsToTracker@$01@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0034D48 (--$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIterativeDPGetNumNbls<2>(__int64 a1)
{
  if ( *(_QWORD *)a1 )
    return *(unsigned int *)(*(_QWORD *)a1 + 112LL);
  else
    return 1LL;
}
