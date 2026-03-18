/*
 * XREFs of SetNewForegroundQueue @ 0x1C005DEB0
 * Callers:
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleAltTab @ 0x1C00BDAD0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C005DFA4 (UpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
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
      (_DWORD)gFullLog,
      4,
      2,
      83,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      gpqForeground,
      a1);
  v3 = (GroupedProcessForegroundBoost *)gpqForeground;
  if ( gpqForeground )
  {
    v3 = *(GroupedProcessForegroundBoost **)(gpqForeground + 128LL);
    if ( v3 )
      GroupedProcessForegroundBoost::ApplyDeBoost(v3, a2);
  }
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  result = SGDGetUserSessionState(v3);
  *(_DWORD *)(result + 15956) = 0;
  return result;
}
