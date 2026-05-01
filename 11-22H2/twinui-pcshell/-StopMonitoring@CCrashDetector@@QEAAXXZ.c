/*
 * XREFs of ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18002A9B4
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180029E6C (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x180197A50 (--1CCrashDetector@@QEAA@XZ.c)
 *     ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x1803BCF20 (-Uninitialize@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrashDetector::StopMonitoring(CCrashDetector *this)
{
  struct _TP_WAIT *v2; // rcx
  char *v3; // rcx

  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    SetThreadpoolWait(v2, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 2), 0);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    v3 = (char *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = 0LL;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
  }
}
