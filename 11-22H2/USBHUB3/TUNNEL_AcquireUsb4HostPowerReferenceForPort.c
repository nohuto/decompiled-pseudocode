/*
 * XREFs of TUNNEL_AcquireUsb4HostPowerReferenceForPort @ 0x1C008E254
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007BF50 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_GetUsb4Host @ 0x1C008C334 (TUNNEL_GetUsb4Host.c)
 *     TUNNEL_AcquireUsb4HostPowerReference @ 0x1C008DED4 (TUNNEL_AcquireUsb4HostPowerReference.c)
 */

void __fastcall TUNNEL_AcquireUsb4HostPowerReferenceForPort(_QWORD **a1)
{
  _QWORD *v2; // rdx
  _QWORD *Usb4Host; // rbx
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 51) & 0x800) != 0 )
  {
    v2 = a1[183];
    v4 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v2,
      &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      (*a1)[343],
      0LL);
    Usb4Host = TUNNEL_GetUsb4Host((__int64)*a1, &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, (*a1)[343]);
    TUNNEL_AcquireUsb4HostPowerReference(*a1, (__int64)Usb4Host);
  }
}
