/*
 * XREFs of ?GetCallbackWaitHandle@SipcServer@@UEAAPEAXXZ @ 0x18002C3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall SipcServer::GetCallbackWaitHandle(SipcServer *this)
{
  return (void *)*((_QWORD *)this + 8);
}
