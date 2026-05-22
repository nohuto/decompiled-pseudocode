/*
 * XREFs of ?GetPortWaitHandle@AlpcPort@@UEBAPEAXXZ @ 0x18002DD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall AlpcPort::GetPortWaitHandle(AlpcPort *this)
{
  return (void *)*((_QWORD *)this + 7);
}
