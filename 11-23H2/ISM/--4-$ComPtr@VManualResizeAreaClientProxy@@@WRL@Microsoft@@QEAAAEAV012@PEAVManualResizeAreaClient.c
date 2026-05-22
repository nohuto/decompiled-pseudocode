/*
 * XREFs of ??4?$ComPtr@VManualResizeAreaClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVManualResizeAreaClientProxy@@@Z @ 0x18016392C
 * Callers:
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180165994 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ManualResizeAreaClientProxy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
      (**a2)(a2);
    v5 = *a1;
    *a1 = (__int64)a2;
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(&v5);
  }
  return a1;
}
