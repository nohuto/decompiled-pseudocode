/*
 * XREFs of _Init_thread_abort @ 0x140028720
 * Callers:
 *     _GetAPOProcessingHostInstance_::_1_::dtor$0 @ 0x140034262 (_GetAPOProcessingHostInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  *a1 = 0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
