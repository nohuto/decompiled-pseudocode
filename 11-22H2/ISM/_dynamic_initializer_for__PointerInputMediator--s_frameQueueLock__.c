/*
 * XREFs of _dynamic_initializer_for__PointerInputMediator::s_frameQueueLock__ @ 0x180002270
 * Callers:
 *     <none>
 * Callees:
 *     ??0mutex@std@@QEAA@XZ @ 0x180053080 (--0mutex@std@@QEAA@XZ.c)
 */

int dynamic_initializer_for__PointerInputMediator::s_frameQueueLock__()
{
  std::mutex::mutex((std::mutex *)&PointerInputMediator::s_frameQueueLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueueLock__);
}
