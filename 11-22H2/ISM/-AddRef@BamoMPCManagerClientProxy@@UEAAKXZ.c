/*
 * XREFs of ?AddRef@BamoMPCManagerClientProxy@@UEAAKXZ @ 0x18001A050
 * Callers:
 *     ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x180079750 (-AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ.c)
 *     ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x18007B4B0 (-AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x18007B550 (-AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x18007B570 (-AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x18007B650 (-AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x18007B670 (-AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WGI@EAAKXZ @ 0x18007BCB0 (-AddRef@ShellGesturesClientProxy@@WGI@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHA@EAAKXZ @ 0x18007BCD0 (-AddRef@ShellGesturesClientProxy@@WHA@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18007BCF0 (-AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoMPCManagerClientProxy::AddRef(BamoMPCManagerClientProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
