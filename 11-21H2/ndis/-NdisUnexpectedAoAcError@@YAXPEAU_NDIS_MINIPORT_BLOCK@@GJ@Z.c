/*
 * XREFs of ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0052558
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011F630 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F830 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0086F14 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall NdisUnexpectedAoAcError(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int16 a2, int a3)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx

  AoAc = a1->AoAc;
  NdisTraceLoggingUnexpectedAoAcError(a1, a2, a3);
  *((_WORD *)AoAc + 225) = *((_WORD *)AoAc + 224);
  *((_WORD *)AoAc + 224) = a2;
}
