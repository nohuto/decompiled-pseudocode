/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x180107A88
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BADC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005B9DC (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180102A10 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180107B50 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_180141FF8;
  if ( !(_BYTE)word_180141FF8 )
    return 0;
  v1 = HIBYTE(word_180141FF8);
  v2 = 1;
  if ( HIBYTE(word_180141FF8) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_180141FF8, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_180141FF8);
      v0 = word_180141FF8;
    }
    else
    {
      v0 = 1;
      word_180141FF8 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
