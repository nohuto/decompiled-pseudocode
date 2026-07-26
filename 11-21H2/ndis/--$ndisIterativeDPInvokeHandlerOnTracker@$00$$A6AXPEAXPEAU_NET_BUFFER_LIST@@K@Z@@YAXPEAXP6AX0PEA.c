/*
 * XREFs of ??$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C005F96C
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0003540 (NdisMSendNetBufferListsComplete.c)
 *     ??$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C005F818 (--$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax

  v6 = *a4;
  *a4 = 0LL;
  if ( v6 )
  {
    do
    {
      v8 = *(unsigned int *)(v6 + 132);
      *(_DWORD *)(v6 + 132) = 0;
      v9 = *(_QWORD *)(v6 + 112);
      if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && *(_QWORD *)(a1 + 776) )
        result = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))ndisVerifierNdisDispatch + 13))(a3, v6, 0LL);
      else
        result = a2(a3, v6, v8);
      v6 = v9;
    }
    while ( v9 );
  }
  return result;
}
