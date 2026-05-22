/*
 * XREFs of ?Release@MouseProcessor@@UEAAKXZ @ 0x1801C0350
 * Callers:
 *     ?Release@MouseProcessor@@W7EAAKXZ @ 0x18007DA70 (-Release@MouseProcessor@@W7EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBA@EAAKXZ @ 0x18007DA90 (-Release@MouseProcessor@@WBA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x18007DAB0 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WCA@EAAKXZ @ 0x18007DAD0 (-Release@MouseProcessor@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(MouseProcessor *this)
{
  return RefCountedObject::Release((MouseProcessor *)((char *)this + 32));
}
