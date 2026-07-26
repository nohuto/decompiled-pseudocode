/*
 * XREFs of ??$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C00647B8
 * Callers:
 *     NdisFSendNetBufferListsComplete @ 0x1C0004B10 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C003DA66 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 * Callees:
 *     ??$ndisIterativeDPAddNblsToTracker@$00@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00648B8 (--$ndisIterativeDPAddNblsToTracker@$00@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C006490C (--$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 */

__int64 __fastcall ndisInvokeIterativeDatapath<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct _NDIS_FILTER_BLOCK *a5)
{
  __int64 v5; // r12
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *v6; // rbx
  __int64 result; // rax
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *v9; // r14
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)&v10;
  v10 = 0LL;
  v11 = 0LL;
  result = ndisIterativeDPAddNblsToTracker<1>(&v10, a1, a4);
  while ( a5->Header.Type == 5 )
  {
    if ( !v6->FirstNbl )
      return result;
    v9 = a5->IterativeDataPathTracker[v5];
    if ( v9[1].IterationInProgress )
    {
      result = ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(a5);
      break;
    }
    v9[1].IterationInProgress = 1;
    result = ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(a5);
    v9[1].IterationInProgress = 0;
    v6 = v9 + 1;
    a5 = (struct _NDIS_FILTER_BLOCK *)a5->NextSendNetBufferListsCompleteObject;
  }
  if ( v6->FirstNbl )
    return ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(a5);
  return result;
}
