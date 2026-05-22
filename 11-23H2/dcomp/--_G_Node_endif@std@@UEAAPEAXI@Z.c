/*
 * XREFs of ??_G_Node_endif@std@@UEAAPEAXI@Z @ 0x180042D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

std::_Node_endif *__fastcall std::_Node_endif::`scalar deleting destructor'(std::_Node_endif *this, char a2)
{
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
