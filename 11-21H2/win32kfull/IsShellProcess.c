/*
 * XREFs of IsShellProcess @ 0x1C007B10C
 * Callers:
 *     CheckAllowForeground @ 0x1C007AD80 (CheckAllowForeground.c)
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00F1804 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00FD77C (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0109AC4 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1C010EA70 (NtUserGetWindowProcessHandle.c)
 *     NtUserRegisterShellPTPListener @ 0x1C011DBA0 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C01FB790 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C01FD470 (NtUserSetInteractiveControlFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 336);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
