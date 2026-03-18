/*
 * XREFs of ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A930
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C004B720 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0131018 (zzzInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1C013A9F0 (zzzDelegateInputFocusLostWindowEvent.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B5194 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     NtUserZapActiveAndFocus @ 0x1C01E0330 (NtUserZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusLostWindowEventImpl(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  struct tagWND *v3; // rdx
  int v4; // ecx
  int v5; // r9d

  if ( a2 && (v3 = *(struct tagWND **)(a2 + 120)) != 0LL && v3 != a1 && *((_QWORD *)a1 + 2) == *((_QWORD *)v3 + 2) )
  {
    v4 = 35;
    v5 = 33;
  }
  else
  {
    v3 = a1;
    v4 = 51;
    v5 = 49;
  }
  if ( !gdwDeferWinEvent )
    v4 = v5;
  xxxWindowEvent(0x80000003, v3, 0, a3, v4);
}
