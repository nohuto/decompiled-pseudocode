/*
 * XREFs of ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0002008
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0001F20 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017A68 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisReleaseNicActive @ 0x1C0056030 (NdisReleaseNicActive.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidComponentId(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return a1 < 17;
  return result;
}
