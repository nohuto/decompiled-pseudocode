/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAX@Z @ 0x1C005F620
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00037D8 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C003ADD4 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisDataPathExpandStackCallback<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // r14
  void (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD); // r15
  struct _NDIS_FILTER_BLOCK *v8; // rbx
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax

  v3 = a1[10];
  v4 = a1[8];
  v5 = *((_QWORD *)a1 + 3);
  v6 = *((_QWORD *)a1 + 1);
  v7 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))*((_QWORD *)a1 + 2);
  v8 = *(struct _NDIS_FILTER_BLOCK **)a1;
  if ( byte_1C00EC210 )
  {
    if ( v8->Header.Type == 5 )
    {
      CompContext = v8->PktMonEdgeUpper.CompContext;
      if ( CompContext )
      {
        if ( (*((_DWORD *)CompContext + 13) & 1) != 0 )
          PktMonClientNblLogNdis((__int64)&v8->PktMonEdgeUpper, v5, a3, 2LL);
      }
    }
  }
  if ( ndisIsFilterVerified(v8) )
    (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, void *, void (__fastcall *)(__int64, __int64, _QWORD, _QWORD)))ndisVerifierNdisDispatch
     + 10))(
      v6,
      v5,
      v4,
      v3,
      v8->VerifierContext,
      v7);
  else
    v7(v6, v5, v4, v3);
}
