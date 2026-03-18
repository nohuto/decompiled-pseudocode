/*
 * XREFs of zzzShowStartGlass @ 0x1C01D9FDC
 * Callers:
 *     NtUserShowStartGlass @ 0x1C01FFA90 (NtUserShowStartGlass.c)
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C0073330 (zzzCalcStartCursorHide.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1)
{
  unsigned int v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  int v3; // r8d
  int v4; // r9d
  int v5; // edx
  bool v6; // al
  int v7; // edx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v5 & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v3,
        v4,
        4,
        2,
        14,
        (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids);
    }
    v5 = *(_DWORD *)(CurrentProcessWin32Process + 12) | 0x100;
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v5;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 15;
      LOBYTE(v7) = v6;
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v3,
        v4,
        4,
        2,
        15,
        (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids,
        CurrentProcessWin32Process);
      v5 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    }
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) = v5 | 0x400;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, v1);
  return 1LL;
}
