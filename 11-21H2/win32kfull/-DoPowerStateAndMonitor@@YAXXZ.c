/*
 * XREFs of ?DoPowerStateAndMonitor@@YAXXZ @ 0x1C00767D8
 * Callers:
 *     _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator() @ 0x1C00764F8 (_lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_--operator().c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void DoPowerStateAndMonitor(void)
{
  char v0; // al
  signed int v1; // edi
  char v2; // bl
  signed int v3; // ebx
  __int64 v4; // rcx
  __int64 GlobalTickCount; // rbx
  __int128 *v6; // rcx
  __int64 v7; // rbx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  __int128 v9; // [rsp+38h] [rbp-38h] BYREF
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v11[2]; // [rsp+58h] [rbp-18h] BYREF

  v8 = 0;
  v10 = 0LL;
  if ( (gPowerState & 1) != 0 )
    return;
  if ( (gafAsyncKeyState[0] & 4) != 0 )
    return;
  if ( (gafAsyncKeyState[0] & 0x10) != 0 )
    return;
  v0 = gafAsyncKeyState[1];
  if ( (v0 & 1) != 0 || (v0 & 4) != 0 || (v0 & 0x10) != 0 )
    return;
  EtwTraceIdleStatus();
  if ( gbLockScreenAutoLockActive
    && (v1 = giPowerOffTimeOutMs - 5000, giPowerOffTimeOutMs - 5000 > 0)
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v1)
    && (GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL),
        GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals))
    && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets)
    && (int)PostWinlogonMessage(1024LL, 3LL) >= 0 )
  {
    EtwTraceIdleActionExpiration(6LL, (unsigned int)v1);
    CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
    dword_1C03361B0 = giPowerOffTimeOutMs - 5000;
  }
  else
  {
    v1 = dword_1C03361B0;
  }
  if ( v1 <= 0
    || !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v1)
    || CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, dword_1C03361B0 + 10000) )
  {
    v2 = 0;
    dword_1C03361B0 = 0;
  }
  else
  {
    v2 = 1;
  }
  if ( giPowerOffTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerOffTimeOutMs)
    && !v2
    && (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 3LL) )
  {
    EtwTraceIdleActionExpiration(2LL, giPowerOffTimeOutMs);
  }
  if ( (gPowerTransitionsState[0] || gPowerTransitionsState[5] || gPowerTransitionsState[6]) && !v2 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v8) )
    {
      if ( !gpqForeground || (v4 = *(_QWORD *)(gpqForeground + 120LL)) == 0 )
      {
        v6 = (__int128 *)v11;
        v11[1] = v8;
        v11[0] = 5LL;
LABEL_64:
        QueuePowerRequest(v6, 0LL);
        goto LABEL_17;
      }
    }
    else
    {
      if ( gPowerTransitionsState[5] || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_17;
      if ( !gpqForeground || (v4 = *(_QWORD *)(gpqForeground + 120LL)) == 0 )
      {
        *(_QWORD *)&v9 = 5LL;
        v6 = &v9;
        *((_QWORD *)&v9 + 1) = 17LL;
        goto LABEL_64;
      }
    }
    PostTransformableMessage(v4, 274, 61808, 2, 0);
  }
LABEL_17:
  if ( giPowerSessionActivityTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerSessionActivityTimeOutMs)
    && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 4LL) )
      EtwTraceIdleActionExpiration(5LL, giPowerSessionActivityTimeOutMs);
    LODWORD(v10) = 9;
    QueuePowerRequest(&v10, 0LL);
  }
  if ( giScreenSaveTimeOutMs > 0 && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giScreenSaveTimeOutMs) )
  {
    if ( gbLockConsoleActive )
    {
      v7 = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
      if ( v7 != CInputGlobals::GetLastInputTime(gpInputGlobals) )
      {
        EtwTraceIdleActionExpiration(3LL, giScreenSaveTimeOutMs);
        if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
          PostWinlogonMessage(1027LL, 0LL);
      }
    }
    else
    {
      LODWORD(v10) = 6;
      QueuePowerRequest(&v10, 0LL);
    }
  }
  v3 = giDimTimeOutMs;
  if ( giDimTimeOutMs > 0 )
  {
    if ( gbManualDimTimeOut )
      goto LABEL_74;
    v3 = 0;
    if ( giPowerOffTimeOutMs - 15000 >= 45000 )
      v3 = giPowerOffTimeOutMs - 15000;
    if ( v3 > 0 )
    {
LABEL_74:
      if ( (giPowerOffTimeOutMs <= 0 || v3 < giPowerOffTimeOutMs)
        && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v3) )
      {
        if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 5LL) )
          EtwTraceIdleActionExpiration(4LL, (unsigned int)v3);
        if ( !(unsigned int)PowerIsDisplayRequired()
          && gPowerDisplayState[16] == 1
          && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
        {
          v9 = 0LL;
          LODWORD(v9) = 7;
          QueuePowerRequest(&v9, 0LL);
        }
      }
    }
  }
}
