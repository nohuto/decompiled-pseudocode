/*
 * XREFs of ??_E_Node_capture@std@@UEAAPEAXI@Z @ 0x1800438B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

std::_Node_capture *__fastcall std::_Node_capture::`vector deleting destructor'(std::_Node_capture *this, char a2)
{
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
