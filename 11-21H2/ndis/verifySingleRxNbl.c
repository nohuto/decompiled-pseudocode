/*
 * XREFs of verifySingleRxNbl @ 0x1C006DBF4
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D410 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C006D4FC (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     verifySingleNb @ 0x1C006D9FC (verifySingleNb.c)
 *     verifySingleNbl @ 0x1C006DB40 (verifySingleNbl.c)
 */

void __fastcall verifySingleRxNbl(ULONG_PTR a1, ULONG_PTR a2)
{
  verifySingleNbl(a1, a2);
  verifySingleNb(*(_QWORD *)(a1 + 8), a2);
}
