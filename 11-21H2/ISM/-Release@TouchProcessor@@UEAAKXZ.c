/*
 * XREFs of ?Release@TouchProcessor@@UEAAKXZ @ 0x180047340
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x18004EAA0 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@TapProcessor@@WBA@EAAKXZ @ 0x18004EAC0 (-Release@TapProcessor@@WBA@EAAKXZ.c)
 *     ?Release@ControllerProcessor@@WEI@EAAKXZ @ 0x1800528E0 (-Release@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall TouchProcessor::Release(TouchProcessor *this)
{
  return RefCountedObject::Release((TouchProcessor *)((char *)this + 16));
}
