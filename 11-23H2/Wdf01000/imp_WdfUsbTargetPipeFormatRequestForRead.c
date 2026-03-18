/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C0056B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C005B090 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 */

int __fastcall imp_WdfUsbTargetPipeFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffsets)
{
  _FX_DRIVER_GLOBALS *v8; // rbp

  v8 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( *(&DriverGlobals[-3].DisplaceDriverUnload + 4) )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
      5u,
      0xEu,
      0xEu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe,
      Request,
      ReadMemory);
  return FxUsbPipe::_FormatTransfer(v8, Pipe, Request, ReadMemory, ReadOffsets, 3u);
}
