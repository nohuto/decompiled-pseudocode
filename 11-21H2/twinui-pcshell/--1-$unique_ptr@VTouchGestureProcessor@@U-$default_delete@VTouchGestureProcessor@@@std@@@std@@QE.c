/*
 * XREFs of ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x18058C3B4
 * Callers:
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$1 @ 0x18021CB0C (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$1.c)
 * Callees:
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18015EB70 (--1TouchGestureProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<TouchGestureProcessor>::~unique_ptr<TouchGestureProcessor>(TouchGestureProcessor **a1)
{
  TouchGestureProcessor *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    TouchGestureProcessor::~TouchGestureProcessor(*a1);
    operator delete(v1);
  }
}
