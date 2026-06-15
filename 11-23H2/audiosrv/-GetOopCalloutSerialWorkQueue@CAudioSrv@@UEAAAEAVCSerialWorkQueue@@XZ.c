/*
 * XREFs of ?GetOopCalloutSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ @ 0x18004D430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *__fastcall CAudioSrv::GetOopCalloutSerialWorkQueue(CAudioSrv *this)
{
  return (CAudioSrv *)((char *)this + 384);
}
