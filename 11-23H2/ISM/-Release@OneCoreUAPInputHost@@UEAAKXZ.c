/*
 * XREFs of ?Release@OneCoreUAPInputHost@@UEAAKXZ @ 0x18004FAB0
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x180065A30 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x180065A50 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x18006AC90 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall OneCoreUAPInputHost::Release(OneCoreUAPInputHost *this)
{
  return RefCountedObject::Release((OneCoreUAPInputHost *)((char *)this + 24));
}
