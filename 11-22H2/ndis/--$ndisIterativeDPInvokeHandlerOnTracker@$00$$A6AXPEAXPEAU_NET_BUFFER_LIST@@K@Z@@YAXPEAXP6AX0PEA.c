/*
 * XREFs of ??$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C00648EC
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C00132A0 (NdisMSendNetBufferListsComplete.c)
 *     ??$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C0064798 (--$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00130B4 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        struct _NDIS_FILTER_BLOCK *a1,
        void (__fastcall *a2)(__int64),
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx

  v6 = *a4;
  *a4 = 0LL;
  if ( v6 )
  {
    do
    {
      *(_DWORD *)(v6 + 132) = 0;
      v8 = *(_QWORD *)(v6 + 112);
      if ( ndisIsFilterVerified(a1) )
        (*((void (__fastcall **)(__int64, __int64, _QWORD, void *, void (__fastcall *)(__int64)))ndisVerifierNdisDispatch
         + 13))(
          a3,
          v9,
          0LL,
          a1->VerifierContext,
          a2);
      else
        a2(a3);
      v6 = v8;
    }
    while ( v8 );
  }
}
