/*
 * XREFs of FWUPDATE_EvtDeviceResourceRequirementsQuery @ 0x1C008B6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 *     HUBREG_SetWinUsbIdleDefaults @ 0x1C0087C54 (HUBREG_SetWinUsbIdleDefaults.c)
 */

__int64 __fastcall FWUPDATE_EvtDeviceResourceRequirementsQuery(__int64 a1)
{
  if ( *(_DWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                WdfDriverGlobals,
                                a1,
                                off_1C0069170)
                 + 160LL) == 1 )
    HUBREG_SetWinUsbIdleDefaults(a1);
  return 0LL;
}
