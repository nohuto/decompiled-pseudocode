/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C000A480
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C00093E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C004A1A0 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpQueryPower @ 0x1C004C270 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055C10 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C0059804 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C0059A20 (OSNotifyDeviceEnum.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AC5AC (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 */

bool ACPIDockIsDockDevice()
{
  return (int)AMLIGetNameSpaceObject("_DCK") >= 0;
}
