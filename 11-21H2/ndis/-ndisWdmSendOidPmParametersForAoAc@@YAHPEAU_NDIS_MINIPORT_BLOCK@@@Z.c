/*
 * XREFs of ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F830
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011F630 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0052558 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0053F28 (-ndisMInitializePmParametersForAoAc@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSx @ 0x1C0053FF4 (ndisMSendPmParametersOidForSx.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForAoAc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct _NDIS_PM_PARAMETERS v5; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_PM_PARAMETERS v6; // [rsp+58h] [rbp-30h] BYREF

  v6 = *ndisMInitializePmParametersForAoAc(&v5, a1);
  v2 = ndisMSendPmParametersOidForSx(a1, &v6);
  v3 = v2;
  if ( v2 )
  {
    NdisUnexpectedAoAcError(a1, 4u, v2);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x1Du,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        v3,
        a1);
  }
  return v3;
}
