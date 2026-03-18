/*
 * XREFs of SetNewForegroundQueue @ 0x1C007FCD0
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     EditionHandleAltTab @ 0x1C0121AA0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     UpdateRawMouseMode @ 0x1C00ABF48 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1, const struct tagWND *a2)
{
  GroupedProcessForegroundBoost *v3; // rcx
  __int64 result; // rax

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      65,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      gpqForeground,
      a1);
  if ( gpqForeground )
  {
    v3 = *(GroupedProcessForegroundBoost **)(gpqForeground + 120LL);
    if ( v3 )
      GroupedProcessForegroundBoost::ApplyDeBoost(v3, a2);
  }
  result = gpqForeground;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = 0;
  return result;
}
