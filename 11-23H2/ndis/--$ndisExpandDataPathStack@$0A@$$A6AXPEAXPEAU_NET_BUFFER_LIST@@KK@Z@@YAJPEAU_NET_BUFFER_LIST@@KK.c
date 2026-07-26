/*
 * XREFs of ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x1C0023890
 * Callers:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025150 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0013244 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z @ 0x1C0040022 (-ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0040FBA (PktMonClientNblLogNdis.c)
 */

__int64 __fastcall ndisExpandDataPathStack<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64, _QWORD, _QWORD))
{
  unsigned __int64 v7; // r15
  __int64 v10; // r8
  unsigned __int64 v12; // r10
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 HighLimit; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]
  unsigned int v20; // [rsp+78h] [rbp-8h]
  int v21; // [rsp+7Ch] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF

  v7 = (unsigned int)Size;
  v10 = KeGetPcr()->Prcb.Number << 12;
  v12 = *(_QWORD *)(v10 + qword_1C00F5720);
  LowLimit = v12;
  HighLimit = *(_QWORD *)(v10 + qword_1C00F5718);
  if ( (unsigned __int64)&retaddr >= HighLimit || v12 > (unsigned __int64)&retaddr )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    v12 = LowLimit;
  }
  if ( (unsigned __int64)&retaddr - v12 < v7 )
  {
    v21 = 0;
    v19 = 0;
    v17[0] = a5;
    v17[1] = a6;
    v17[2] = a7;
    v17[3] = a1;
    v18 = a2;
    v20 = a4;
    return ndisExpandStackAllocationLikely(
             ndisDataPathExpandStackCallback<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>,
             v17);
  }
  else
  {
    if ( byte_1C00F5390 )
    {
      if ( a5->Header.Type == 5 )
      {
        CompContext = a5->PktMonEdgeUpper.CompContext;
        if ( CompContext )
        {
          if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
            PktMonClientNblLogNdis(&a5->PktMonEdgeUpper, a1, v10, 2LL);
        }
      }
    }
    if ( ndisIsFilterVerified(a5) )
      (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, void *, void (__fastcall *)(__int64, __int64, _QWORD, _QWORD)))ndisVerifierNdisDispatch
       + 10))(
        a6,
        a1,
        a2,
        a4,
        a5->VerifierContext,
        a7);
    else
      a7(a6, a1, a2, a4);
    return 0LL;
  }
}
