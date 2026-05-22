/*
 * XREFs of ?Release@MouseProcessor@@UEAAKXZ @ 0x1801B2370
 * Callers:
 *     ?Release@MouseProcessor@@W7EAAKXZ @ 0x180069F90 (-Release@MouseProcessor@@W7EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBA@EAAKXZ @ 0x180069FB0 (-Release@MouseProcessor@@WBA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x180069FD0 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WCA@EAAKXZ @ 0x180069FF0 (-Release@MouseProcessor@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(MouseProcessor *this)
{
  return RefCountedObject::Release((MouseProcessor *)((char *)this + 32));
}
