/*
 * XREFs of verifySingleRxNbl @ 0x1C0072FAC
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00727D0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C00728BC (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     verifySingleNb @ 0x1C0072DBC (verifySingleNb.c)
 *     verifySingleNbl @ 0x1C0072F00 (verifySingleNbl.c)
 */

void __fastcall verifySingleRxNbl(ULONG_PTR a1, ULONG_PTR a2)
{
  verifySingleNbl(a1, a2);
  verifySingleNb(*(_QWORD *)(a1 + 8), a2);
}
