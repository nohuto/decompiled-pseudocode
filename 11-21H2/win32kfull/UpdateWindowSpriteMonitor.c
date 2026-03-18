/*
 * XREFs of UpdateWindowSpriteMonitor @ 0x1C0022AF0
 * Callers:
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0004974 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 * Callees:
 *     InitializeMonitorInfo @ 0x1C0021474 (InitializeMonitorInfo.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1C002168C (GreDwmNotifySpriteMonitorChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0024DE0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall UpdateWindowSpriteMonitor(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // r8
  __int64 result; // rax
  _DWORD v9[20]; // [rsp+60h] [rbp-58h] BYREF

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset(v9, 0, 0x48uLL);
      InitializeMonitorInfo((__int64)v9, *(_DWORD *)(v2 + 288), a2, a1);
      GreDwmNotifySpriteMonitorChange(v5, *(HWND *)a1, 0LL, (__int64)v9);
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v6, v7, 38);
      return WindowMargins::CheckForChanges(a1, 3LL, v7);
    }
  }
  return result;
}
