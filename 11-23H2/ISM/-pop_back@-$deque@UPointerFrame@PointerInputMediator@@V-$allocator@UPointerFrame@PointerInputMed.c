/*
 * XREFs of ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800FD764
 * Callers:
 *     ??1?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x180055064 (--1-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediator@@.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800FD644 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800FCD00 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 */

void __fastcall std::deque<PointerInputMediator::PointerFrame>::pop_back(_QWORD *a1)
{
  PointerInputMediator::PointerFrame::~PointerFrame(*(void ***)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + a1[4]))));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
}
