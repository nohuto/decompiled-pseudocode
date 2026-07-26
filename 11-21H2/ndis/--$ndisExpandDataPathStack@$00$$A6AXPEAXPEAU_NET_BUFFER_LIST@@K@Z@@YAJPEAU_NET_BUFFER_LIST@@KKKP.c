/*
 * XREFs of ??$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C003933C
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0003540 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C003957C (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z @ 0x1C003A2DE (-ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z.c)
 */

__int64 __fastcall ndisExpandDataPathStack<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64, _QWORD))
{
  unsigned __int64 v7; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]
  unsigned int v19; // [rsp+68h] [rbp-8h]
  int v20; // [rsp+6Ch] [rbp-4h]
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
    v20 = 0;
    v18 = 0;
    v17 = 0;
    v16[0] = a5;
    v16[1] = a6;
    v16[2] = a7;
    v16[3] = a1;
    v19 = a4;
    return ndisExpandStackAllocationLikely(
             ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             v16);
  }
  else
  {
    if ( ndisVerifierNdisDispatch && *(_BYTE *)a5 == 5 && *(_QWORD *)(a5 + 776) )
      (*((void (__fastcall **)(__int64, __int64, _QWORD))ndisVerifierNdisDispatch + 13))(a6, a1, 0LL);
    else
      a7(a6, a1, a4);
    return 0LL;
  }
}
