/*
 * XREFs of ?Release@BamoInputProcessManagerProxy@@UEAAKXZ @ 0x18001A110
 * Callers:
 *     ?Release@BamoActivationControllerProxy@@W7EAAKXZ @ 0x180079790 (-Release@BamoActivationControllerProxy@@W7EAAKXZ.c)
 *     ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x18007B530 (-Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x18007B610 (-Release@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x18007B630 (-Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?Release@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x18007B6F0 (-Release@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?Release@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x18007B710 (-Release@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WGI@EAAKXZ @ 0x18007BD90 (-Release@ShellGesturesClientProxy@@WGI@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHA@EAAKXZ @ 0x18007BDB0 (-Release@ShellGesturesClientProxy@@WHA@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18007BDD0 (-Release@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputProcessManagerProxy::Release(BamoInputProcessManagerProxy *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
