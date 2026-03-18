/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C0077618
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x1C0077400 (EditionPostDwmSpeedHitTest.c)
 *     EditionNonDwmSpeedHitTest @ 0x1C010AFB0 (EditionNonDwmSpeedHitTest.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C016A862 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C016C6D0 (EditionIsPointerInputRedirected.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01EA2F0 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01EB168 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01EBEE4 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EBFD0 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01ED250 (xxxDoDeferredPointerActivate.c)
 *     EditionNonDwmTouchHitTest @ 0x1C0206E40 (EditionNonDwmTouchHitTest.c)
 *     EditionPointerWindowHitTest @ 0x1C0207030 (EditionPointerWindowHitTest.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C0207F10 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     GetPTPShellTarget @ 0x1C0212580 (GetPTPShellTarget.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C021CF44 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x70uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
  }
  return a1;
}
