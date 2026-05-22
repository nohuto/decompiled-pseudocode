/*
 * XREFs of ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18003F250
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18003EF30 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CBE60 (-OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800CC2E0 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FFEC0 (-DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1801003F8 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x1801639DC (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180165994 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x180165C74 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x1801B9FF0 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18003F41C (_tlgKeywordOn.c)
 */

char __fastcall InputETW::IsVerboseEnabled(__int64 a1)
{
  __int64 v2; // rax
  char v3; // r9
  _DWORD *v4; // rcx

  v2 = wil::details::static_lazy<InputETW>::get(a1, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  v3 = 0;
  v4 = *(_DWORD **)(v2 + 8);
  if ( *v4 > 5u )
    return (unsigned __int8)tlgKeywordOn(v4, a1) != 0;
  return v3;
}
