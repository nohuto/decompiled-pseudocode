/*
 * XREFs of wil::details::lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___::_lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___ @ 0x1C00353C8
 * Callers:
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0087DC0 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0087F88 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___::_lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    ndisDereferenceMiniport(**(struct _NDIS_MINIPORT_BLOCK ***)a1, 0xEu);
  }
}
