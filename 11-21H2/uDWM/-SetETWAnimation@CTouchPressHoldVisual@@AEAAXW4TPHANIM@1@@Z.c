/*
 * XREFs of ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800E8260
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E82C4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8480 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8624 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800E8740 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E8E70 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180008C6C (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTouchPressHoldVisual::SetETWAnimation(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 304);
  if ( a2 != v2 )
  {
    result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    {
      McTemplateU0q_EtwEventWriteTransfer(a1, (int)&UdwmTouchPressHoldVisual_Stop, v2);
      result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
        result = McTemplateU0q_EtwEventWriteTransfer(v6, (int)&UdwmTouchPressHoldVisual_Start, a2);
    }
  }
  *(_DWORD *)(a1 + 304) = a2;
  return result;
}
