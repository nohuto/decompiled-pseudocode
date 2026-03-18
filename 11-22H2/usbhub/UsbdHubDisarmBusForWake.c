/*
 * XREFs of UsbdHubDisarmBusForWake @ 0x1C00225A4
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000EB10 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 */

_DWORD *__fastcall UsbdHubDisarmBusForWake(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rbx

  result = FdoExt(a1);
  v2 = result;
  if ( *((_QWORD *)result + 552) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
    }
    result = (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v2 + 552))(*((_QWORD *)v2 + 529), 0LL);
    v2[640] &= ~0x40000u;
  }
  return result;
}
