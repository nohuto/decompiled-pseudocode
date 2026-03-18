/*
 * XREFs of PtiKbdFromQ @ 0x1C00AC810
 * Callers:
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0001838 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     AllocateHidData @ 0x1C0001B1C (AllocateHidData.c)
 *     DoTimer @ 0x1C005BF94 (DoTimer.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     HasRawInputForegroundTarget @ 0x1C00AA6E8 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00AAD40 (EditionHandleAndPostKeyEvent.c)
 *     _PostThreadMessageEx @ 0x1C00AB0F8 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00ABB1C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00AD3C4 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     EditionKeyEventLLHook @ 0x1C00EA4C0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTab @ 0x1C0121AA0 (EditionHandleAltTab.c)
 *     xxxProcessHidInput @ 0x1C01D1B50 (xxxProcessHidInput.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E0F20 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 96);
}
