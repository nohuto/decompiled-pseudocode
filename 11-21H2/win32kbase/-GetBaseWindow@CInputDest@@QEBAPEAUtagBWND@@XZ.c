/*
 * XREFs of ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1C01B8D38
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     <none>
 */

struct tagBWND *__fastcall CInputDest::GetBaseWindow(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 1 )
    return (struct tagBWND *)*((_QWORD *)this + 10);
  else
    return 0LL;
}
