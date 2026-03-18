/*
 * XREFs of ?Set@CHitTestState@@QEAAXAEBVCInputDest@@IHH@Z @ 0x1C01DF8BC
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C01DE300 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CHitTestState::Set(CHitTestState *this, const struct CInputDest *a2, __int64 a3, char a4, char a5)
{
  int v5; // eax
  int v7; // esi
  unsigned int v10; // eax

  v5 = *((_DWORD *)this + 31);
  v7 = a3;
  if ( (v5 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v5 = *((_DWORD *)this + 31);
  }
  *((_DWORD *)this + 31) = v5 | 4;
  CInputDest::operator=((__int64)this, (__int64)a2);
  v10 = *((_DWORD *)this + 31) & 0xFFFFFFFC;
  *((_DWORD *)this + 30) = v7;
  *((_DWORD *)this + 31) = v10 | a4 & 1 | (2 * (a5 & 1));
}
