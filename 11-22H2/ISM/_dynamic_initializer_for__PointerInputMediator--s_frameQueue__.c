/*
 * XREFs of _dynamic_initializer_for__PointerInputMediator::s_frameQueue__ @ 0x180002240
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x180053178 (--0-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediator@@.c)
 */

int dynamic_initializer_for__PointerInputMediator::s_frameQueue__()
{
  std::deque<PointerInputMediator::PointerFrame>::deque<PointerInputMediator::PointerFrame>(&PointerInputMediator::s_frameQueue);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueue__);
}
