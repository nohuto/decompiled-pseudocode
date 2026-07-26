/*
 * XREFs of ??$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034A28
 * Callers:
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034FB8 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 * Callees:
 *     ??$ndisIterativeDPAddNblsToTracker@$01@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0034C30 (--$ndisIterativeDPAddNblsToTracker@$01@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0034D48 (--$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0P.c)
 */

__int64 __fastcall ndisInvokeIterativeDatapath<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
        int a1,
        int a2,
        int a3,
        int a4,
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
  result = ndisIterativeDPAddNblsToTracker<2>((unsigned int)&v15, a1, a4, a3, a2);
  while ( *(_BYTE *)a5 == 5 )
  {
    if ( !*(_QWORD *)v8 )
      return result;
    v13 = a5;
    v14 = *(_QWORD *)(a5 + 424) + 96 * v7;
    if ( *(_BYTE *)(v14 + 64) )
    {
      result = ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
                 a5,
                 a7,
                 a6,
                 v8);
      break;
    }
    *(_BYTE *)(v14 + 64) = 1;
    result = ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
               a5,
               a7,
               a6,
               v8);
    *(_BYTE *)(v14 + 64) = 0;
    v8 = (__int128 *)(v14 + 48);
    a5 = *(_QWORD *)(a5 + 520);
    a7 = *(_QWORD *)(v13 + 496);
    a6 = *(_QWORD *)(v13 + 504);
  }
  if ( *(_QWORD *)v8 )
    return ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
             a5,
             a7,
             a6,
             v8);
  return result;
}
