/*
 * XREFs of OSCloseHandle @ 0x1C008DB48
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C003D620 (ACPIRootPowerCallBack.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2C8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3EC (AMLIAddNextNamespaceOverride.c)
 *     AcpiDiagInitialize @ 0x1C00A71F8 (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00A87F8 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A89A8 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A9FFC (ACPIRegDumpAcpiTable.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AA304 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
