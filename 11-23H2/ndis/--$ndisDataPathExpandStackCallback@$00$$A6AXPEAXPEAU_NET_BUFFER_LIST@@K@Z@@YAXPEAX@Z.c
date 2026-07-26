/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x1C00644F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0013244 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        struct _NDIS_FILTER_BLOCK **a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r10
  void (__fastcall *v6)(__int64, __int64, _QWORD); // r11

  if ( ndisIsFilterVerified(*a1) )
    (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, void (__fastcall *)(__int64, __int64, _QWORD)))ndisVerifierNdisDispatch
     + 13))(
      v5,
      v1,
      *(unsigned int *)(v3 + 32),
      *(_QWORD *)(v2 + 776),
      v6);
  else
    v6(v5, v1, v4);
}
