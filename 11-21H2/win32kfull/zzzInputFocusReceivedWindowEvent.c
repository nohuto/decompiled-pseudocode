/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C00A86E4
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusReceivedWindowEvent(unsigned int a1)
{
  struct tagWND *v2; // r10
  __int64 v3; // rdx
  int v4; // ecx

  v2 = *(struct tagWND **)(gpqForeground + 112LL);
  v3 = *(_QWORD *)(*((_QWORD *)v2 + 2) + 440LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 40);
  v4 = 35;
  if ( !gdwDeferWinEvent )
    v4 = 33;
  xxxWindowEvent(0x80000002, v2, v3, a1, v4);
}
