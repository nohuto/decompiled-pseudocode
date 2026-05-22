/*
 * XREFs of ?AddRef@BamoMPCManagerClientProxy@@UEAAKXZ @ 0x180019820
 * Callers:
 *     ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x180065CD0 (-AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ.c)
 *     ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180067970 (-AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDA@EAAKXZ @ 0x180067A10 (-AddRef@InputDelegationInputObjectProxy@@WDA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180067A30 (-AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180067AF0 (-AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180067B10 (-AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WGI@EAAKXZ @ 0x180068150 (-AddRef@ShellGesturesClientProxy@@WGI@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHA@EAAKXZ @ 0x180068170 (-AddRef@ShellGesturesClientProxy@@WHA@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x180068190 (-AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoMPCManagerClientProxy::AddRef(BamoMPCManagerClientProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
