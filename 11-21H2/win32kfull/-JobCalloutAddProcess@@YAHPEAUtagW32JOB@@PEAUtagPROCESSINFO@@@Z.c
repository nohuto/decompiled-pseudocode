/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01022A4
 * Callers:
 *     UserJobCallout @ 0x1C0101E20 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C010206C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01022D4 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcess(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  bool v3; // al
  _UNKNOWN **v4; // r8
  void *v5; // rdx

  if ( *(_QWORD *)a2 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x8000) != 0 )
      return JobCalloutAddProcessWorker(a1, a2);
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v4 = &WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = &WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids;
      LOBYTE(v5) = v3;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v5,
        (_DWORD)v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        23,
        (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids,
        (char)a1,
        a2);
    }
  }
  return 0LL;
}
