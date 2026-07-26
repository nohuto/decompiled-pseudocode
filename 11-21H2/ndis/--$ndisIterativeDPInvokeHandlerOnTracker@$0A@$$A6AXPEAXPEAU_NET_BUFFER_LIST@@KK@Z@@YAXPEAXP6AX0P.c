/*
 * XREFs of ??$ndisIterativeDPInvokeHandlerOnTracker@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0034DE0
 * Callers:
 *     ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0034B30 (--$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00037D8 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C003ADD4 (PktMonClientNblLogNdis.c)
 */

_UNKNOWN **__fastcall ndisIterativeDPInvokeHandlerOnTracker<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
        struct _NDIS_FILTER_BLOCK *a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, _QWORD),
        __int64 a3,
        __int64 *a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  unsigned int v11; // r14d
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *a4;
  *a4 = 0LL;
  if ( v5 )
  {
    do
    {
      v9 = *(_DWORD *)(v5 + 132);
      *(_DWORD *)(v5 + 132) = 0;
      v10 = *(_QWORD *)(v5 + 112);
      v11 = *(_DWORD *)(v5 + 140);
      if ( byte_1C00EC210 )
      {
        if ( a1->Header.Type == 5 )
        {
          CompContext = a1->PktMonEdgeUpper.CompContext;
          if ( CompContext )
          {
            if ( (*((_DWORD *)CompContext + 13) & 1) != 0 )
              PktMonClientNblLogNdis(&a1->PktMonEdgeUpper, v5, a3, 2LL);
          }
        }
      }
      if ( ndisIsFilterVerified(a1) )
        result = (_UNKNOWN **)(*((__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, void *, __int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD)))ndisVerifierNdisDispatch
                               + 10))(
                                a3,
                                v5,
                                v11,
                                v9,
                                a1->VerifierContext,
                                a2);
      else
        result = (_UNKNOWN **)a2(a3, v5, v11, v9);
      v5 = v10;
    }
    while ( v10 );
  }
  return result;
}
