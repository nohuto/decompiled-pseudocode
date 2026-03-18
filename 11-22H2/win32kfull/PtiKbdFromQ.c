/*
 * XREFs of PtiKbdFromQ @ 0x1C0060CFC
 * Callers:
 *     AllocateHidData @ 0x1C0009244 (AllocateHidData.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C005FEFC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     HasRawInputForegroundTarget @ 0x1C0060504 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0060630 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00718F0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTab @ 0x1C00BDAD0 (EditionHandleAltTab.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C01180A8 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     xxxProcessHidInput @ 0x1C014EB10 (xxxProcessHidInput.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C01558CC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BB72C (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 104);
}
