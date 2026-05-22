/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x180047370
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x180053E60 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x180053E80 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x180053EA0 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return RefCountedObject::Release((HeatProcessor *)((char *)this + 24));
}
