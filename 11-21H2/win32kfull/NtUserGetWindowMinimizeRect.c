/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C010DBA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ParkIcon @ 0x1C00CBAB0 (ParkIcon.c)
 *     xxxSendMinRectMessages @ 0x1C010DD14 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  _DWORD *Prop; // rax
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF

  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = v4;
  if ( v4 && (v5 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFFu) - 669, (v5 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v4;
    HMLockObject(v4);
    if ( a2 )
    {
      if ( IsTrayWindow(v6, 1) )
      {
        v8 = xxxSendMinRectMessages(v6, &v20);
      }
      else
      {
        Prop = (_DWORD *)GetProp(v6, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v14 = Prop[8];
          LODWORD(v20) = v14;
          v15 = Prop[9];
          DWORD1(v20) = v15;
        }
        else
        {
          ParkIcon(v6, (unsigned int *)&v20);
          v15 = DWORD1(v20);
          v14 = v20;
        }
        DWORD2(v20) = v14 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v20) = v15 + *(_DWORD *)(gpsi + 2128LL);
        v8 = 1;
      }
      v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v10 + 224) & 1) == 0 )
      {
        v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10, v9);
          v10 = 511LL;
          if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v20, &v20, 0LL, v6);
        }
      }
      if ( v8 )
      {
        v10 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v20;
      }
    }
    else
    {
      v8 = 0;
      UserSetLastError(87LL, v7);
    }
    ThreadUnlock1(v10, v9, v11);
  }
  else
  {
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v8;
}
