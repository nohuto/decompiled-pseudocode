/*
 * XREFs of ?Release@BamoInputProcessManagerProxy@@UEAAKXZ @ 0x1800198E0
 * Callers:
 *     ?Release@BamoActivationControllerProxy@@W7EAAKXZ @ 0x180065D10 (-Release@BamoActivationControllerProxy@@W7EAAKXZ.c)
 *     ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x1800679F0 (-Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WDA@EAAKXZ @ 0x180067AB0 (-Release@InputDelegationInputObjectProxy@@WDA@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180067AD0 (-Release@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?Release@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180067B90 (-Release@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?Release@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180067BB0 (-Release@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WGI@EAAKXZ @ 0x180068230 (-Release@ShellGesturesClientProxy@@WGI@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHA@EAAKXZ @ 0x180068250 (-Release@ShellGesturesClientProxy@@WHA@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x180068270 (-Release@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputProcessManagerProxy::Release(BamoInputProcessManagerProxy *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
