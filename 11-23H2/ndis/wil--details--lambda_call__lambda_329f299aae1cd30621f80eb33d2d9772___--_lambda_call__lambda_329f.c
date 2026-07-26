/*
 * XREFs of wil::details::lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___::_lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___ @ 0x1C00CBBC0
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x1C00CBFB8 (ndisLwmIoctlIrpHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___::_lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ndisDereferenceMiniport(*(struct _NDIS_MINIPORT_BLOCK **)a1, *(_BYTE *)(a1 + 8));
  }
}
