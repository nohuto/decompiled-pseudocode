/*
 * XREFs of ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00ABB1C
 * Callers:
 *     EditionWakeSomeone @ 0x1C0005420 (EditionWakeSomeone.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00AAD40 (EditionHandleAndPostKeyEvent.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     EditionWakeThreadForInput @ 0x1C00ABAF0 (EditionWakeThreadForInput.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01DBF48 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5DA0 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?CancelForegroundActivate@@YAXXZ @ 0x1C0078BF8 (-CancelForegroundActivate@@YAXXZ.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     PtiMouseFromQ @ 0x1C00ABFA8 (PtiMouseFromQ.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00ABFFC (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     IsProcessedByInputService @ 0x1C00ADE20 (IsProcessedByInputService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall WakeSomeone(__int64 a1, __int64 a2, unsigned __int64 a3, struct tagQMSG *a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  int v7; // ebx
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  struct tagTHREADINFO *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v8 = (struct tagTHREADINFO *)a2;
  v9 = a1;
  if ( (unsigned int)a3 > 0x207 )
  {
    if ( (unsigned int)a3 <= 0x20E )
    {
      if ( (_DWORD)a3 != 526 )
      {
        if ( (_DWORD)a3 == 520 )
          goto LABEL_37;
        if ( (_DWORD)a3 == 521 )
          goto LABEL_49;
        if ( (_DWORD)a3 != 522 )
        {
          if ( (_DWORD)a3 == 524 )
            goto LABEL_37;
          goto LABEL_49;
        }
      }
      if ( (*(_DWORD *)(a1 + 388) & 0x2000000) != 0 )
      {
        v12 = PtiMouseFromQ(a1, a2, a3, a4);
LABEL_27:
        v8 = (struct tagTHREADINFO *)v12;
        if ( ((v7 - 522) & 0xFFFFFFFB) != 0 )
        {
          v5 = 1;
          goto LABEL_10;
        }
        goto LABEL_40;
      }
      goto LABEL_26;
    }
    if ( (_DWORD)a3 != 568 )
    {
      if ( (_DWORD)a3 != 576 )
      {
        if ( (unsigned int)a3 <= 0x244
          || (unsigned int)a3 > 0x247
          && ((unsigned int)a3 <= 0x248 || (unsigned int)a3 > 0x24A && (unsigned int)(a3 - 593) > 2) )
        {
          goto LABEL_51;
        }
        v5 = 4096;
      }
LABEL_84:
      if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
      if ( !v5 )
        v5 = 2048;
      goto LABEL_42;
    }
    v5 = 4096;
  }
  else
  {
    if ( (unsigned int)a3 >= 0x206 )
      goto LABEL_49;
    if ( (unsigned int)a3 > 0x106 )
    {
      if ( (_DWORD)a3 == 512 )
      {
        if ( !a2 )
        {
          v10 = *(_QWORD *)(a1 + 104);
          if ( v10 )
            v8 = *(struct tagTHREADINFO **)(v10 + 16);
          else
            v8 = *(struct tagTHREADINFO **)(a1 + 88);
        }
        v5 = 2;
        if ( (unsigned int)ShouldAddPointerWakeFlag(v8, a4) )
          v5 = 4098;
        goto LABEL_10;
      }
      if ( (_DWORD)a3 != 513 )
      {
        if ( (_DWORD)a3 != 283 )
        {
          if ( (_DWORD)a3 == 514 )
          {
LABEL_37:
            v13 = *(_QWORD *)(v9 + 104);
            if ( v13 && (unsigned int)(v7 - 512) <= 0xE )
              v8 = *(struct tagTHREADINFO **)(v13 + 16);
            else
              v8 = *(struct tagTHREADINFO **)(v9 + 88);
LABEL_40:
            v5 = 4;
            if ( (unsigned int)ShouldAddPointerWakeFlag(v8, a4) )
              v5 = 4100;
            goto LABEL_10;
          }
          if ( (unsigned int)a3 > 0x202 )
          {
            if ( (unsigned int)a3 > 0x204 )
              goto LABEL_37;
            goto LABEL_49;
          }
LABEL_51:
          CancelForegroundActivate(a1, a2, a3, (int)a4);
          goto LABEL_37;
        }
        goto LABEL_84;
      }
LABEL_49:
      if ( a4 )
        v4 = (~*((_DWORD *)a4 + 25) & 0x20000u) >> 17;
      else
        v4 = 1;
      goto LABEL_51;
    }
    if ( (_DWORD)a3 == 262 )
      goto LABEL_25;
    if ( (unsigned int)a3 < 0xFE )
      goto LABEL_51;
    if ( (unsigned int)a3 > 0xFF )
    {
      if ( (_DWORD)a3 != 257 )
      {
        if ( (_DWORD)a3 != 256 )
        {
          if ( (_DWORD)a3 == 258 )
          {
LABEL_25:
            CancelForegroundActivate(a1, a2, a3, (int)a4);
            goto LABEL_26;
          }
          if ( (_DWORD)a3 != 260 )
          {
            if ( (_DWORD)a3 != 261 )
              goto LABEL_51;
            goto LABEL_26;
          }
        }
        if ( a4 )
        {
          if ( (unsigned __int64)(*((_QWORD *)a4 + 4) - 16LL) > 2
            || (a3 = (unsigned __int64)*((unsigned __int8 *)a4 + 32) >> 2,
                v17 = *((_BYTE *)a4 + 32) & 3,
                a1 = (unsigned int)(2 * v17),
                a2 = (unsigned int)(1 << (2 * v17)),
                ((unsigned __int8)a2 & *(_BYTE *)(a3 + v9 + 228)) == 0) )
          {
            v4 = (*((_DWORD *)a4 + 25) & 0x20000) == 0;
          }
        }
        else
        {
          v4 = 1;
        }
        goto LABEL_25;
      }
LABEL_26:
      v12 = PtiKbdFromQ(v9);
      goto LABEL_27;
    }
  }
LABEL_42:
  if ( !v8 )
  {
    v14 = *((_QWORD *)a4 + 2);
    if ( !v14 || (v15 = ValidateHwnd(v14)) == 0 || (v8 = *(struct tagTHREADINFO **)(v15 + 16)) == 0LL )
      v8 = (struct tagTHREADINFO *)PtiKbdFromQ(v9);
  }
  if ( !v5 )
    v5 = 1024;
LABEL_10:
  if ( v8 )
  {
    if ( a4
      && *((_QWORD *)a4 + 13)
      && ((unsigned int)IsProcessedByInputService(a4) || (*((_DWORD *)a4 + 25) & 0x10000) != 0) )
    {
      v8 = v16;
    }
    SetWakeBit(v8, v5);
    *((_QWORD *)v8 + 157) |= 0x80000000uLL;
    EtwTraceProcessWindowInfo(v8);
    if ( a4 )
      *((_QWORD *)a4 + 13) = v8;
    if ( v4 )
    {
      if ( a4 )
      {
        if ( (*((_DWORD *)a4 + 25) & 0x20000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v8, 0);
      *((_QWORD *)v8 + 157) |= 0x200000000uLL;
      EtwTraceProcessWindowInfo(v8);
    }
  }
}
