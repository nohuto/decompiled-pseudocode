/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C0016C00
 * Callers:
 *     DriverEntry @ 0x1C00172E0 (DriverEntry.c)
 *     DriverUnload @ 0x1C0017570 (DriverUnload.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void FxLibraryCleanup(void)
{
  if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType )
  {
    IoDeleteDevice(*(PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.DeviceType);
    *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType = 0LL;
  }
  if ( qword_1C009FF58 )
  {
    FxPoolFree((FX_POOL_TRACKER *)qword_1C009FF58);
    qword_1C009FF58 = 0LL;
  }
}
