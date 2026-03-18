/*
 * XREFs of SetVisible @ 0x1C001FE88
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00CB710 (xxxShowOwnedWindows.c)
 *     xxxCreateWindowStation @ 0x1C00D22F8 (xxxCreateWindowStation.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C010ADC8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01226E8 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013F388 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01DD5E8 (zzzActiveCursorTracking.c)
 *     NtUserSetVisible @ 0x1C01FE460 (NtUserSetVisible.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     DecVisWindows @ 0x1C001FD7C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020088 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     CalcWindowFullScreen @ 0x1C006C0E8 (CalcWindowFullScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     ClrFTrueVis @ 0x1C00C98CC (ClrFTrueVis.c)
 *     _IsWindowVisible @ 0x1C0111098 (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01E2470 (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01E25D4 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v9; // r14d
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject() + 25) & 1) == 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
        return v4;
      if ( (*((_DWORD *)a1 + 80) & 4) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
          || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v5) = 0;
        }
        if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v6,
            v7,
            4,
            22,
            16,
            (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids,
            (char)a1);
        }
        zzzSetWindowCompositionCloak(a1, 0LL, 2u);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            v13,
            4,
            22,
            17,
            (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids,
            (char)a1);
        }
        *((_DWORD *)a1 + 80) &= ~4u;
      }
      SetOrClrWF(1LL, a1, 3856LL, 1LL);
      SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
      IncVisWindows(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
        IncrementCompositedCount(a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen(a1);
      if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
        PostIAMShellHookMessage(17LL, *(_QWORD *)a1);
    }
    else
    {
      if ( (a2 & 2) != 0 )
        ClrFTrueVis(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
        return v4;
      if ( !(unsigned __int8)IsTrayWindow(a1, 1LL) || (v9 = 1, !(unsigned int)IsWindowVisible(a1)) )
        v9 = 0;
      SetOrClrWF(0LL, a1, 3856LL, 1LL);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1LL, a1, 2312LL, 1LL);
      }
      else
      {
        SetOrClrWF(0LL, a1, 2312LL, 1LL);
        if ( v9 )
          PostIAMShellHookMessage(22LL, *(_QWORD *)a1);
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
        DecrementCompositedCount();
      DecVisWindows(a1);
      if ( (a2 & 8) == 0 )
      {
        v10 = *((_DWORD *)a1 + 80);
        if ( (v10 & 0x400) != 0 )
        {
          *((_DWORD *)a1 + 80) = v10 & 0xFFFFFBFF;
          PostShellHookMessages(54LL, *(_QWORD *)a1);
        }
      }
    }
    return 1;
  }
  return 0LL;
}
