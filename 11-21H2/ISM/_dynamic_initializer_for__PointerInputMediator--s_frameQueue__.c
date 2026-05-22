/*
 * XREFs of _dynamic_initializer_for__PointerInputMediator::s_frameQueue__ @ 0x180001440
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x1800477A0 (--0-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediator@@.c)
 */

int dynamic_initializer_for__PointerInputMediator::s_frameQueue__()
{
  std::deque<PointerInputMediator::PointerFrame>::deque<PointerInputMediator::PointerFrame>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueue__);
}
