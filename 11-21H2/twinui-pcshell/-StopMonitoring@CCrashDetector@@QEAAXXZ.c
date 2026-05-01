/*
 * XREFs of ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x1800C66BC
 * Callers:
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18003CCE0 (--1CCrashDetector@@QEAA@XZ.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1800C5434 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x180300EA0 (-Uninitialize@CApplicationFrameService@@UEAAJXZ.c)
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
