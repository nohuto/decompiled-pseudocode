/*
 * XREFs of UserGetMonitorDC @ 0x1C005B2C0
 * Callers:
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     MonitorFromHdev @ 0x1C005B370 (MonitorFromHdev.c)
 *     LookupDC @ 0x1C005B3A0 (LookupDC.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     _ReleaseDC @ 0x1C005BF10 (_ReleaseDC.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 DCEx; // rsi
  __int64 v4; // rax

  MonitorDC = 0LL;
  v1 = MonitorFromHdev();
  if ( v1 )
  {
    v2 = *((_QWORD *)PtiCurrentShared() + 57);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v2 + 8) + 24LL), 0LL, 0x800003u);
      if ( DCEx )
      {
        GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
        v4 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v4, v1, 1LL);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
      }
    }
  }
  return MonitorDC;
}
