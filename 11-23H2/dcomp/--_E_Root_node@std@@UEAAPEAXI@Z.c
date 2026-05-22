/*
 * XREFs of ??_E_Root_node@std@@UEAAPEAXI@Z @ 0x18008A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

std::_Root_node *__fastcall std::_Root_node::`vector deleting destructor'(std::_Root_node *this, char a2)
{
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
