/*
 * XREFs of ?FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007A550
 * Callers:
 *     ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AE90 (-PowerPolSleeping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0050310 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxVerifierBreakOnDeviceStateError(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  __int64 v1; // rax
  char ext[4]; // [rsp+40h] [rbp+8h] BYREF

  strcpy(ext, "sys");
  Mx::MxDbgPrint(
    "WDF detected potentially invalid device state in %s.%s. Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( *(_BYTE *)(v1 + 327) )
  {
    *(_BYTE *)(v1 + 347) = 1;
    DbgBreakPoint();
  }
}
