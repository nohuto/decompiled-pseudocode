/*
 * XREFs of ?ndisValidateOffloadCapability@@YAEPEAU_NDIS_OFFLOAD@@@Z @ 0x1C0092338
 * Callers:
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0091A8C (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisValidateOffloadCapability(struct _NDIS_OFFLOAD *a1)
{
  unsigned __int8 result; // al

  if ( a1->Header.Type != 0xA7 )
    return 0;
  result = 1;
  if ( !a1->Header.Revision || a1->Header.Size < 0x70u )
    return 0;
  return result;
}
