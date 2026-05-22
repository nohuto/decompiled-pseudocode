/*
 * XREFs of ?AddRef@BamoMPCManagerClientProxy@@UEAAKXZ @ 0x18000BC40
 * Callers:
 *     ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x18004ED40 (-AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ.c)
 *     ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180050960 (-AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDA@EAAKXZ @ 0x180050A00 (-AddRef@InputDelegationInputObjectProxy@@WDA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180050A20 (-AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180050AE0 (-AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180050B00 (-AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WGI@EAAKXZ @ 0x180051000 (-AddRef@ShellGesturesClientProxy@@WGI@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHA@EAAKXZ @ 0x180051020 (-AddRef@ShellGesturesClientProxy@@WHA@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x180051040 (-AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoMPCManagerClientProxy::AddRef(BamoMPCManagerClientProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
