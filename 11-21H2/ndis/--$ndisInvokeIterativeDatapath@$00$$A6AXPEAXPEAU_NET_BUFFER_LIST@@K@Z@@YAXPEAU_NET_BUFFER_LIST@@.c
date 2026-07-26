/*
 * XREFs of ??$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C005F818
 * Callers:
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C003957C (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 * Callees:
 *     ??$ndisIterativeDPAddNblsToTracker@$00@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C005F918 (--$ndisIterativeDPAddNblsToTracker@$00@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C005F96C (--$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 */

__int64 __fastcall ndisInvokeIterativeDatapath<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r12
  __int128 *v8; // rdi
  __int64 result; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v8 = &v15;
  v15 = 0LL;
  v16 = 0LL;
  result = ndisIterativeDPAddNblsToTracker<1>(&v15, a1, a4);
  while ( *(_BYTE *)a5 == 5 )
  {
    if ( !*(_QWORD *)v8 )
      return result;
    v13 = a5;
    v14 = *(_QWORD *)(a5 + 424) + 96 * v7;
    if ( *(_BYTE *)(v14 + 40) )
    {
      result = ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(a5, a7, a6, v8);
      break;
    }
    *(_BYTE *)(v14 + 40) = 1;
    result = ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(a5, a7, a6, v8);
    *(_BYTE *)(v14 + 40) = 0;
    v8 = (__int128 *)(v14 + 24);
    a5 = *(_QWORD *)(a5 + 488);
    a7 = *(_QWORD *)(v13 + 464);
    a6 = *(_QWORD *)(v13 + 472);
  }
  if ( *(_QWORD *)v8 )
    return ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(a5, a7, a6, v8);
  return result;
}
