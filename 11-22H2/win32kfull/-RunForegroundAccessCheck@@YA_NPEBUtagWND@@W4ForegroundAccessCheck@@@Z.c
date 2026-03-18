/*
 * XREFs of ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00B6D14
 * Callers:
 *     NtUserCanCurrentThreadChangeForeground @ 0x1C013C5D0 (NtUserCanCurrentThreadChangeForeground.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C021D598 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C005FC30 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C005FEFC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 */

char __fastcall RunForegroundAccessCheck(__int64 a1, char a2)
{
  char v2; // di
  const char *v4; // r14
  char v6; // bl
  char v7; // dl
  const char *v8; // rax

  v2 = 1;
  v4 = "Success";
  v6 = 1;
  if ( (a2 & 1) == 0 )
    goto LABEL_11;
  v6 = anonymous_namespace_::CheckCanonicalForegroundAccess(0);
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = "Success";
    if ( !v6 )
      v8 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      2u,
      0x44u,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      v8);
  }
  if ( v6 )
  {
LABEL_11:
    if ( (a2 & 2) != 0 )
    {
      v6 = a1 && anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2u);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v2 = 0;
      }
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( !v6 )
          v4 = "Failed";
        WPP_RECORDER_AND_TRACE_SF_s(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v2,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          2u,
          0x45u,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          v4);
      }
    }
  }
  return v6;
}
