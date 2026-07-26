/*
 * XREFs of ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x1C0036980
 * Callers:
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0036CEC (--$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0P.c)
 *     ??$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z @ 0x1C003D670 (--$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z.c)
 *     ??$ndisExpandDataPathStack@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KKK@Z@Z @ 0x1C003D7DC (--$ndisExpandDataPathStack@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 * Callees:
 *     ndisCallReceiveHandler @ 0x1C0036E98 (ndisCallReceiveHandler.c)
 */

__int64 __fastcall ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        struct _NDIS_FILTER_BLOCK **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        int *a6,
        int *a7)
{
  return ndisCallReceiveHandler(*a1, *a5, *a6, *a7);
}
