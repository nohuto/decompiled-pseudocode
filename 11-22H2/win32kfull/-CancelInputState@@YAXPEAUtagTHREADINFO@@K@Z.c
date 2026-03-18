/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B5194
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C005C644 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C004BB10 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0066CF0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UnlockCaptureWindow @ 0x1C00A6420 (UnlockCaptureWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A930 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     QueueNotifyMessage @ 0x1C01FBCA0 (QueueNotifyMessage.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // edi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  tagQ *v10; // rcx
  struct tagWND *v11; // rdi
  __int64 v12; // rdi
  tagQ *v13; // rcx
  PETHREAD *v14; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  char v19; // [rsp+88h] [rbp+28h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
  if ( !a2 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 128LL);
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v12;
    if ( v12 )
      HMLockObject(v12);
    QueueNotifyMessage(v12, 134, 0, 0, 0);
    QueueNotifyMessage(v12, 6, (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x20) << 16, 0, 0);
    v13 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v12 == *((_QWORD *)v13 + 16) )
      tagQ::SetActiveWindow(v13, 0LL);
    v14 = *(PETHREAD **)(v12 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*v14);
    v16 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v14);
    goto LABEL_21;
  }
  v6 = a2 - 1;
  if ( !v6 )
  {
    v11 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 120LL);
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v11;
    if ( v11 )
      HMLockObject(v11);
    QueueNotifyMessage((_DWORD)v11, 8, 0, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v11, 0, 1);
    v10 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v11 == *((struct tagWND **)v10 + 15) )
    {
      tagQ::UnlockFocusWnd(v10);
      if ( v11 )
      {
        v8 = gpqForeground;
        if ( *((_QWORD *)a1 + 54) == gpqForeground )
          zzzInputFocusLostWindowEventImpl(0LL, gpqForeground, 5u);
      }
    }
    goto LABEL_21;
  }
  if ( v6 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 54) + 396LL) &= ~0x100000u;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 112LL);
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v7;
    if ( v7 )
      HMLockObject(v7);
    QueueNotifyMessage(v7, 31, 0, 0, 0);
    v10 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v7 == *((_QWORD *)v10 + 14) )
      UnlockCaptureWindow((__int64)v10);
LABEL_21:
    ThreadUnlock1(v10, v8, v9);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19, v4, v5);
}
