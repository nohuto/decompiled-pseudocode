/*
 * XREFs of ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C005F6E8
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00025B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0003350 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     NdisReturnNetBufferLists @ 0x1C0005660 (NdisReturnNetBufferLists.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0023370 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098440 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A41C4 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00037D8 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z @ 0x1C003A2DE (-ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z.c)
 */

NTSTATUS __fastcall ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64, _QWORD))
{
  unsigned __int64 v7; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]
  unsigned int v20; // [rsp+68h] [rbp-8h]
  int v21; // [rsp+6Ch] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF

  v7 = (unsigned int)Size;
  v10 = KeGetPcr()->Prcb.Number << 12;
  v11 = *(_QWORD *)(v10 + qword_1C00EC728);
  LowLimit = v11;
  v12 = *(_QWORD *)(v10 + qword_1C00EC720);
  HighLimit = v12;
  if ( v11 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v12 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    v11 = LowLimit;
  }
  if ( (unsigned __int64)&retaddr - v11 < v7 )
  {
    v21 = 0;
    v19 = 0;
    v18 = 0;
    v17[0] = a5;
    v17[1] = a6;
    v17[2] = a7;
    v17[3] = a1;
    v20 = a4;
    return ndisExpandStackAllocationLikely(
             (void (*)(void *))ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             v17);
  }
  else
  {
    if ( ndisIsFilterVerified(a5) )
      (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, void (__fastcall *)(__int64, __int64, _QWORD)))ndisVerifierNdisDispatch
       + 17))(
        a6,
        a1,
        a4,
        *(_QWORD *)(v13 + 776),
        a7);
    else
      a7(a6, a1, a4);
    return 0;
  }
}
