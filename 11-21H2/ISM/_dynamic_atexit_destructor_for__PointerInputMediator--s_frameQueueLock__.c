/*
 * XREFs of _dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueueLock__ @ 0x180058C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueueLock__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
