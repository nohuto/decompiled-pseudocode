/*
 * XREFs of ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0010680
 * Callers:
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001DAB8 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ndisMapOpenByName @ 0x1C006F280 (ndisMapOpenByName.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C0139420 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z @ 0x1C01471C0 (-ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z.c)
 *     ndisFindRootDevice @ 0x1C014A7C8 (ndisFindRootDevice.c)
 * Callees:
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 */

bool __fastcall ndisEqualUnicodeStringDispatchLevel(const struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  return a1->Length == a2->Length && memcmp(a1->Buffer, a2->Buffer, a1->Length) == 0;
}
