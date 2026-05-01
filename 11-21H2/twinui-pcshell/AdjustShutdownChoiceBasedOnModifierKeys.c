/*
 * XREFs of AdjustShutdownChoiceBasedOnModifierKeys @ 0x1805D875C
 * Callers:
 *     ?_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEBUtagRECT@@@Z @ 0x1805DC054 (-_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdjustShutdownChoiceBasedOnModifierKeys(unsigned int a1)
{
  if ( GetKeyState(160) < 0 || GetKeyState(161) < 0 )
  {
    if ( (a1 & 4) != 0 )
      a1 = a1 & 0xFDFDFFFF | 0x2000000;
  }
  else if ( (a1 & 2) != 0 && (a1 & 0x20000) == 0 )
  {
    a1 |= 0x800000u;
  }
  if ( GetKeyState(17) < 0 )
    a1 |= 0x10000u;
  return a1;
}
