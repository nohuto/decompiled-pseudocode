/*
 * XREFs of ?Release@OneCoreUAPInputHost@@UEAAKXZ @ 0x18004C890
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800794B0 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x1800794D0 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x18007E770 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall OneCoreUAPInputHost::Release(OneCoreUAPInputHost *this)
{
  return RefCountedObject::Release((OneCoreUAPInputHost *)((char *)this + 24));
}
