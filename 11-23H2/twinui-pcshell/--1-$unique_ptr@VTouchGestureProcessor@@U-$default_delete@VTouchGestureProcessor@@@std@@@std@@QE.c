/*
 * XREFs of ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x18064B21C
 * Callers:
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$1 @ 0x1802B4FB4 (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$1.c)
 * Callees:
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18017310C (--1TouchGestureProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
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
