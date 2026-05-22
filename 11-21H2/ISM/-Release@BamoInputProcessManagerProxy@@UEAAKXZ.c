/*
 * XREFs of ?Release@BamoInputProcessManagerProxy@@UEAAKXZ @ 0x18000C050
 * Callers:
 *     ?Release@BamoActivationControllerProxy@@W7EAAKXZ @ 0x18004ED80 (-Release@BamoActivationControllerProxy@@W7EAAKXZ.c)
 *     ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x1800509C0 (-Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WDA@EAAKXZ @ 0x180050AA0 (-Release@InputDelegationInputObjectProxy@@WDA@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180050AC0 (-Release@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?Release@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180050B80 (-Release@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?Release@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180050BA0 (-Release@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WGI@EAAKXZ @ 0x1800510E0 (-Release@ShellGesturesClientProxy@@WGI@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHA@EAAKXZ @ 0x180051100 (-Release@ShellGesturesClientProxy@@WHA@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x180051120 (-Release@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputProcessManagerProxy::Release(BamoInputProcessManagerProxy *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
