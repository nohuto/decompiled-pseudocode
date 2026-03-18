/*
 * XREFs of ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C0096E48
 * Callers:
 *     xxxAddFullScreen @ 0x1C0096D10 (xxxAddFullScreen.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C0096E98 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RemoveSemiMaximizedState(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 && !HasMaximizedState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 539LL);
  *((_DWORD *)a1 + 80) &= 0xF3FFFFFF;
  SetOrClrWF(0LL, a1, 55568LL, 1LL);
}
