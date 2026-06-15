/*
 * XREFs of ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x180119EAC
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011C220 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180120400 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ATL::CEvent::Create(ATL::CEvent *this, struct _SECURITY_ATTRIBUTES *a2)
{
  HANDLE EventW; // rax

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *(_QWORD *)this = EventW;
  return EventW != 0LL;
}
