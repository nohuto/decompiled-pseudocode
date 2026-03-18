/*
 * XREFs of xxxDispatchMessage @ 0x1C00429F0
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A4A14 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00A65F0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserDispatchMessage @ 0x1C00AC250 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0240F90 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C004DC40 (SfnDWORD.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ValidateTimerCallback @ 0x1C00E9EA0 (ValidateTimerCallback.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C014FA38 (RtlWCSMessageWParamCharToMB.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025A63C (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct tagWND *v5; // rbp
  __int64 v6; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 (__fastcall *i)(int, int, int, int, __int64, __int64, char); // rcx
  int v11; // eax
  char v12; // r9
  __int64 v13; // r12
  unsigned int v14; // r10d
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 (__fastcall *v21)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r15
  void (__fastcall *v25)(struct tagWND *, __int64, _QWORD, _QWORD); // rax
  __int64 *v26; // r14
  __int64 v27; // r8
  __int64 v28; // rax
  __int128 v29; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30; // [rsp+60h] [rbp-38h]

  v1 = *(_DWORD *)(a1 + 8);
  v29 = 0LL;
  v30 = 0LL;
  LOBYTE(v3) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1280);
  EtwTraceBeginDispatchMessage(v3, v1);
  v4 = 0LL;
  v5 = 0LL;
  if ( !*(_QWORD *)a1 || (v5 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1)) != 0LL )
  {
    v6 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v6 < 0x400
      && (_bittest16(&MessageTable[v6], 9u)
       || ((_DWORD)v6 == 537 || (_DWORD)v6 == 536) && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0) )
    {
      UserSetLastError(1159LL);
      goto LABEL_25;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v29 = *(_QWORD *)(ThreadWin32Thread + 416);
    i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))&v29;
    *(_QWORD *)(ThreadWin32Thread + 416) = &v29;
    *((_QWORD *)&v29 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    v11 = *(_DWORD *)(a1 + 8);
    if ( v11 == 280 || v11 == 275 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 )
      {
        if ( v11 == 280 )
        {
          v8 = gtmrListHead;
          v18 = 0LL;
          for ( i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead;
                i != (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead;
                i = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, char))i )
          {
            v24 = (_QWORD *)((char *)i - 72);
            if ( (*((_DWORD *)i - 6) & 2) != 0 && *(_QWORD *)(a1 + 16) == v24[12] && v5 == (struct tagWND *)v24[11] )
            {
              if ( i != (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))72 )
              {
                v25 = (void (__fastcall *)(struct tagWND *, __int64, _QWORD, _QWORD))v24[4];
                if ( v25
                  || (MicrosoftTelemetryAssertTriggeredNoArgsKM(i),
                      (v25 = (void (__fastcall *)(struct tagWND *, __int64, _QWORD, _QWORD))v24[4]) != 0LL) )
                {
                  v25(
                    v5,
                    280LL,
                    *(unsigned int *)(a1 + 16),
                    (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
                }
              }
              goto LABEL_24;
            }
          }
          goto LABEL_24;
        }
        i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gptiCurrent;
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
        {
          v23 = SfnDWORD(
                  (_DWORD)v5,
                  275,
                  *(_QWORD *)(a1 + 16),
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                  *(_QWORD *)(a1 + 24),
                  *(_QWORD *)(gpsi + 752LL));
          goto LABEL_31;
        }
        goto LABEL_56;
      }
    }
    if ( !v5 )
      goto LABEL_56;
    if ( v11 == 15 )
      SetOrClrWF(1LL, v5, 576LL, 1LL);
    v8 = *((_QWORD *)v5 + 5);
    v12 = *(_BYTE *)(v8 + 18);
    if ( (v12 & 4) != 0 )
    {
      v9 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v9 >= 0x400 )
        v21 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
      else
        v21 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v9]];
      i = SfnINWPARAMCHAR;
      if ( v21 == SfnINWPARAMCHAR && (v12 & 8) != 0 )
      {
        RtlMBMessageWParamCharToWCS((unsigned int)v9, a1 + 16);
        v8 = *((_QWORD *)v5 + 5);
      }
      v22 = *(_QWORD *)(v8 + 120);
      if ( v22 < 7 )
      {
        v23 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v22])(
                v5,
                *(unsigned int *)(a1 + 8),
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 24));
LABEL_31:
        v18 = v23;
LABEL_24:
        ThreadUnlock1(i, v8, v9);
        v4 = v18;
        goto LABEL_25;
      }
LABEL_56:
      v18 = 0LL;
      goto LABEL_24;
    }
    v13 = *(_QWORD *)(v8 + 120);
    v14 = *(_DWORD *)(a1 + 8);
    if ( (v12 & 8) != 0 )
    {
      v26 = (__int64 *)(a1 + 16);
      RtlWCSMessageWParamCharToMB(v14, a1 + 16);
      v16 = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)v16 != 576 && (_DWORD)v16 != 281 )
      {
        v15 = *v26;
        goto LABEL_19;
      }
      v27 = *v26;
      v28 = (unsigned __int16)v16;
    }
    else
    {
      if ( v14 >= 0x240 )
      {
        if ( v14 > 0x240 )
          goto LABEL_18;
      }
      else if ( v14 != 281 )
      {
LABEL_18:
        v15 = *(_QWORD *)(a1 + 16);
        LODWORD(v16) = *(_DWORD *)(a1 + 8);
LABEL_19:
        v17 = SfnDWORD((_DWORD)v5, v16, v15, *(_QWORD *)(a1 + 24), v13, *(_QWORD *)(gpsi + 752LL));
LABEL_20:
        v18 = v17;
        if ( *(_DWORD *)(a1 + 8) == 15
          && HMValidateHandleNoSecure(*(_QWORD *)a1, 1)
          && (*(_BYTE *)(*((_QWORD *)v5 + 5) + 18LL) & 0x40) != 0 )
        {
          SetOrClrWF(0LL, v5, 1025LL, 1LL);
          xxxSimpleDoSyncPaint(v5);
        }
        goto LABEL_24;
      }
      v27 = *(_QWORD *)(a1 + 16);
      v16 = v14;
      v28 = (unsigned __int16)v14;
    }
    v17 = ((__int64 (__fastcall *)(struct tagWND *, __int64, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[v28]])(
            v5,
            v16,
            v27,
            *(_QWORD *)(a1 + 24),
            v13,
            *(_QWORD *)(gpsi + 752LL),
            1,
            0LL);
    goto LABEL_20;
  }
LABEL_25:
  LOBYTE(v19) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1280);
  EtwTraceEndDispatchMessage(v19, v1);
  return v4;
}
