/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C00A80EC (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00A81DC (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00A8268 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00A86E4 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, struct tagWND *a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct tagTHREADINFO *v10; // rcx
  int v11; // ebp
  __int64 v13; // rax
  __int64 v14; // r8
  _QWORD v15[3]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h]

  v15[2] = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 388LL) &= ~0x800u;
  if ( !a2 )
  {
    v13 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v13 + 120) )
      *(_DWORD *)(v13 + 388) |= 0x800u;
  }
  v4 = *(_QWORD *)(a1 + 432);
  v5 = *(struct tagWND **)(v4 + 112);
  v15[0] = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v15;
  v15[1] = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    v4 = *(_QWORD *)(a1 + 432);
  }
  v6 = v4;
  if ( a2 && v4 != *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) && *(char *)(*((_QWORD *)a2 + 5) + 19LL) >= 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    v6 = *(_QWORD *)(a1 + 432);
  }
  tagQ::LockFocusWnd(v6, a2, 1LL);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
    {
      v10 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
      v17 = 0LL;
      v11 = 0;
      v16 = 0LL;
      if ( v10 != (struct tagTHREADINFO *)gptiCurrent )
      {
        LockW32Thread((__int64)v10, (__int64)&v16);
        v10 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
        v11 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(v10, a2);
      if ( v11 )
        PopAndFreeW32ThreadLock((__int64)&v16);
    }
    v8 = *(_QWORD *)(a1 + 432);
    v7 = v8;
    if ( v8 == gpqForeground && a2 == *(struct tagWND **)(v8 + 112) )
    {
      v8 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v8 & 0x80u) == 0LL )
      {
        xxxApplyGlobalInputSettings(v8);
        v7 = *(_QWORD *)(a1 + 432);
      }
    }
    if ( v5 )
    {
      if ( v7 == gpqForeground )
        zzzInputFocusLostWindowEvent(v5, 2LL);
      xxxSendMessage((ULONG_PTR)v5);
      v8 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v5, 0, 0);
    }
    if ( a2 == *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 112LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1, 0);
      xxxWindowEvent(0x8005u, a2, -4, 0, 0);
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 1256LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
      {
        if ( v5 )
          v14 = *(_QWORD *)v5;
        else
          v14 = 0LL;
        xxxSendNotifyMessage(a2, 7LL, v14, 0LL, 1);
      }
      else
      {
        xxxSendMessage((ULONG_PTR)a2);
      }
      v7 = gpqForeground;
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 112LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEvent(v5, 3LL);
    xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
    xxxSendMessage((ULONG_PTR)v5);
    v7 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v5, 0, 0);
  }
  return ThreadUnlock1(v8, v7, v9);
}
