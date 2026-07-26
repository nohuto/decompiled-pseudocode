/*
 * XREFs of ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0036C64
 * Callers:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025150 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 * Callees:
 *     ??$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036E00 (--$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NE.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0036F28 (--$ndisIterativeDPInvokeHandlerOnTracker@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAXP6AX0P.c)
 */

__int64 __fastcall ndisInvokeIterativeDatapath<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct _NDIS_FILTER_BLOCK *a5)
{
  __int64 v5; // r12
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *v6; // rdi
  __int64 result; // rax
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *v9; // rsi
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)&v10;
  v10 = 0LL;
  v11 = 0LL;
  result = ndisIterativeDPAddNblsToTracker<0>(&v10, a1, a4, a3);
  while ( a5->Header.Type == 5 )
  {
    if ( !v6->FirstNbl )
      return result;
    v9 = a5->IterativeDataPathTracker[v5];
    if ( v9->IterationInProgress )
    {
      result = ndisIterativeDPInvokeHandlerOnTracker<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(a5);
      break;
    }
    v9->IterationInProgress = 1;
    result = ndisIterativeDPInvokeHandlerOnTracker<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(a5);
    v9->IterationInProgress = 0;
    v6 = v9;
    a5 = (struct _NDIS_FILTER_BLOCK *)a5->NextSendNetBufferListsObject;
  }
  if ( v6->FirstNbl )
    return ndisIterativeDPInvokeHandlerOnTracker<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(a5);
  return result;
}
