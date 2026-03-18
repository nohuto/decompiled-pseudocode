/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC
 * Callers:
 *     xxxDesktopWndProc @ 0x1C00A3B60 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     SetRITTimer @ 0x1C0078D60 (SetRITTimer.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     xxxEndPaint @ 0x1C00C4E2C (xxxEndPaint.c)
 *     xxxSetWindowLong @ 0x1C00E4444 (xxxSetWindowLong.c)
 *     SetDesktopPattern @ 0x1C00F2908 (SetDesktopPattern.c)
 *     xxxDWP_UpdateUIState @ 0x1C00FB224 (xxxDWP_UpdateUIState.c)
 *     xxxInternalPaintDesktop @ 0x1C0110D3C (xxxInternalPaintDesktop.c)
 *     GreRealizeDefaultPalette @ 0x1C0116400 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0119758 (GreGetSystemPaletteUse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015A2B0 (xxxValidateClassAndSize.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01E43AC (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 i; // rbx
  __int64 v16; // rbx
  _BYTE v17[8]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v18; // [rsp+48h] [rbp-61h] BYREF
  __int128 v19; // [rsp+50h] [rbp-59h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h]
  _BYTE v21[80]; // [rsp+70h] [rbp-39h] BYREF

  memset(v21, 0, 0x48uLL);
  v18 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, 669, 1, (__int64)&v18) )
    return v18;
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      return xxxDefWindowProc(a1);
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          return xxxDefWindowProc(a1);
        case 0x30Fu:
          goto LABEL_46;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_46:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) && !*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
            *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = SetRITTimer(0LL, 0x14u, (__int64)HideMouseTrails, 0);
          return 0LL;
        default:
          return xxxDefWindowProc(a1);
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      v19 = 0LL;
      v20 = 0LL;
      v16 = CreateProfileUserName(&v19, v8, v10, v11);
      SetDesktopPattern(v16, 0LL);
      FreeProfileUserName(v16, &v19);
      xxxSendNotifyMessage(a1, 21LL, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0);
      PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v21);
      xxxEndPaint(a1);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( a2 != 20 )
  {
    switch ( a2 )
    {
      case 0x15u:
        xxxRedrawWindow(a1, 0LL, 0LL, 133);
        break;
      case 0x3Au:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
            GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL));
          if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
          {
            xxxSendNotifyMessage(-1LL, 785LL, *(_QWORD *)a1, 0LL, 1);
            *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
          }
        }
        break;
      case 0x51u:
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          xxxSendNotifyMessage(i, 81LL, a3, a4, 1);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17, v13, v14);
        break;
      default:
        return xxxDefWindowProc(a1);
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
