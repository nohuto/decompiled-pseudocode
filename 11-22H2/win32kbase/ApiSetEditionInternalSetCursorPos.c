/*
 * XREFs of ApiSetEditionInternalSetCursorPos @ 0x1C020688C
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00629A4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DC2B4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF5B0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     SetInputDelegationModeImpl @ 0x1C01E8E9C (SetInputDelegationModeImpl.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x1C01EF420 (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionInternalSetCursorPos(unsigned int a1, unsigned int a2, unsigned int a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296C80;
  if ( qword_1C0296C80 )
  {
    result = (__int64 (*)(void))qword_1C0296C80();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296C88;
      if ( qword_1C0296C88 )
        return (__int64 (*)(void))qword_1C0296C88(a1, a2, a3);
    }
  }
  return result;
}
