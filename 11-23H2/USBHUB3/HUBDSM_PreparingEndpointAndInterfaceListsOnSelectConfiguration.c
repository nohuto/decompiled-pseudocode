/*
 * XREFs of HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C001FA70
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002EBE0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 */

__int64 __fastcall HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration(__int64 a1)
{
  return HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(*(_QWORD *)(a1 + 960));
}
