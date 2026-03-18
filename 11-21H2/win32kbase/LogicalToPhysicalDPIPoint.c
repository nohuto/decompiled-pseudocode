/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C006DBB0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C006D990 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1C006DCC8 (GetMonitorRectForDpi.c)
 *     ScaleDPIPt @ 0x1C006DFB0 (ScaleDPIPt.c)
 *     Is_MonitorFromPointSupported @ 0x1C006E508 (Is_MonitorFromPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v8; // rdi
  unsigned __int16 v9; // bx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 && (v8 = *a4) != 0
      || (!qword_1C029C960 ? (v8 = 0LL) : (v8 = qword_1C029C960(*a2, 2LL, CurrentThreadDpiAwarenessContext)), a4) )
    {
      *a4 = v8;
    }
    v9 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    GetMonitorRectForDpi(&v11, v8, v9);
    GetMonitorRectForDpi(v12, v8, 0LL);
    ScaleDPIPt((_DWORD)a1, (_DWORD)a2, *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 60LL), v9, v12[0], v11);
    return 1LL;
  }
}
