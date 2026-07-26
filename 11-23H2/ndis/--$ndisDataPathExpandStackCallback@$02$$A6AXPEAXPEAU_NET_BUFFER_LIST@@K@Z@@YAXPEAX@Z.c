/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x1C0064560
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0013244 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        struct _NDIS_FILTER_BLOCK **a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r10
  void (__fastcall *v5)(__int64); // r11

  if ( ndisIsFilterVerified(*a1) )
    (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD, void (__fastcall *)(__int64)))ndisVerifierNdisDispatch
     + 17))(
      v4,
      v1,
      v3,
      *(_QWORD *)(v2 + 776),
      v5);
  else
    v5(v4);
}
