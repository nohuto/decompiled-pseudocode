/*
 * XREFs of SetWakeBit @ 0x1C0118350
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005B40 (xxxSystemTimerProc.c)
 *     NtUserReplyMessage @ 0x1C000C2E0 (NtUserReplyMessage.c)
 *     IPostQuitMessage @ 0x1C003C308 (IPostQuitMessage.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C005CB08 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxReceiverDied @ 0x1C006C930 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C00BC56C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     ClearSendMessages @ 0x1C00EAFAC (ClearSendMessages.c)
 *     _PostThreadMessageEx @ 0x1C0115548 (_PostThreadMessageEx.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C01180A8 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014F34E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01509BE (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C0774 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     _DelegateCapturePointers @ 0x1C01C4B28 (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C01F2B00 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C0222DD0 (IncPaintCount.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C005E080 (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C01184A0 (HasHidTable.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  BOOL v9; // esi
  __int64 v10; // r10
  int v11; // r8d

  LODWORD(v2) = *(_DWORD *)(a1 + 488);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 96LL) = a1;
      v5 = *(_QWORD *)(a1 + 432);
      if ( v5 == gpqForeground )
      {
        v6 = *(_QWORD *)(v5 + 112);
        if ( v6 )
          v7 = *(_QWORD *)(v6 + 16);
        else
          v7 = *(_QWORD *)(v5 + 96);
        v9 = 0;
        if ( (unsigned int)HasHidTable(v7) )
        {
          v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v5) + 424) + 848LL) + 100LL);
          if ( (v8 & 1) != 0 )
            v9 = 1;
        }
        *(_DWORD *)(SGDGetUserSessionState(v8) + 15956) = v9;
      }
    }
    if ( (a2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 432));
    if ( (a2 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL) = a1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), a2);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 4LL), a2);
    if ( (a2 & 0x1C07) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 424);
      v11 = *(_DWORD *)(v10 + 12);
      if ( (v11 & 0x400000) != 0
        && ((a2 & 2) == 0 || *(_DWORD *)(gpsi + 4960LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 4964LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v10 + 12) = v11 & 0xFFBFFFFF;
        ForegroundBoost::SetForegroundPriority(a1, 1LL);
      }
    }
    v2 = *(_QWORD *)(a1 + 448);
    if ( (a2 & *(_DWORD *)(v2 + 16)) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 736), 2, 0);
  }
  return v2;
}
