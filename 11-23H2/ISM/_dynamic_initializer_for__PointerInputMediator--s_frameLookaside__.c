/*
 * XREFs of _dynamic_initializer_for__PointerInputMediator::s_frameLookaside__ @ 0x180001DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x180052534 (--0-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediator@@.c)
 */

int dynamic_initializer_for__PointerInputMediator::s_frameLookaside__()
{
  std::deque<PointerInputMediator::PointerFrame>::deque<PointerInputMediator::PointerFrame>(&PointerInputMediator::s_frameLookaside);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__PointerInputMediator::s_frameLookaside__);
}
