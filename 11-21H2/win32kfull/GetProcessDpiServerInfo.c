/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C00BA408
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00C76E0 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  unsigned int v1; // edx

  v1 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v1 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi(v1);
}
