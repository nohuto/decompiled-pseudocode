/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00FE2A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010F65C (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00CD884 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0238D30 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

char __fastcall xxxActivateWindowWithOptions(const struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  const struct tagWND *v4; // rbp
  bool v5; // r12
  int v7; // r14d
  char v8; // si
  int v9; // ebx
  struct tagWND *v10; // r15
  __int64 v11; // rcx
  void *v12; // r9
  PDEVICE_OBJECT Timer_high; // rcx
  char v14; // bp
  int v16; // ebx
  PDEVICE_OBJECT v17; // rcx
  unsigned int v18; // r14d
  int v19; // r9d
  const char *v20; // rax
  __int16 v21; // ax
  int v22; // edx
  PDEVICE_OBJECT v23; // rcx
  __int16 v24; // ax
  char v25; // [rsp+50h] [rbp-68h]
  char v26; // [rsp+51h] [rbp-67h]
  bool v27; // [rsp+52h] [rbp-66h]
  __int128 v28; // [rsp+58h] [rbp-60h] BYREF
  __int128 v29; // [rsp+68h] [rbp-50h] BYREF
  __int64 v30; // [rsp+78h] [rbp-40h]
  bool v31; // [rsp+C0h] [rbp+8h]

  v4 = a1;
  v5 = 0;
  v29 = 0LL;
  v27 = 0;
  v30 = 0LL;
  v25 = 0;
  v31 = 0;
  v7 = 2;
  v26 = 0;
  LOBYTE(a1) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
  if ( (_BYTE)a1 == 64 )
    return 0;
  v8 = 1;
  if ( (_DWORD)a2 )
  {
    v28 = 0LL;
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(v4, a2, a3, &v28) )
    {
LABEL_71:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v8 = 0;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 74;
        LOBYTE(v22) = v8;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          a3,
          a4,
          4,
          2,
          74,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      }
      return 0;
    }
    v10 = (struct tagWND *)v28;
    if ( !(_QWORD)v28 || (v9 = DWORD2(v28)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v9 = DWORD2(v28);
      v10 = (struct tagWND *)v28;
    }
    v5 = v4 != v10;
    v27 = v4 != v10;
  }
  else
  {
    if ( (_DWORD)a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v9 = 1;
    v10 = v4;
    v26 = a4 == 1;
  }
  if ( !v10 )
    goto LABEL_71;
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( v5 )
  {
    *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v29;
    *((_QWORD *)&v29 + 1) = v10;
    HMLockObject(v10);
  }
  v11 = *((_QWORD *)v10 + 2);
  v12 = &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids;
  if ( *(_QWORD *)(v11 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        4,
        2,
        75,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    v14 = anonymous_namespace_::FAllowForegroundActivate(v10, a2, a3, v12);
    if ( v14 )
    {
      v31 = *(_DWORD *)(gptiCurrent + 900LL) == 0;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (Timer_high = (PDEVICE_OBJECT)HIDWORD(WPP_GLOBAL_Control->Timer),
                    ((unsigned __int8)Timer_high & 2) != 0)
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          76,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          *(_DWORD *)(gptiCurrent + 900LL) == 0);
      LOBYTE(v12) = 0;
    }
    else
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          77,
          4,
          2,
          77,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      }
      LOBYTE(v12) = anonymous_namespace_::xxxLocalActivateWindow(v10);
    }
    LOBYTE(a2) = v31;
    v25 = (char)v12;
    if ( !v14 )
      goto LABEL_27;
    goto LABEL_48;
  }
  if ( v11 == gptiCurrent )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v12 = &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids;
  }
  if ( v9 == 5 )
  {
    v7 = 31;
    v23 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v24 = 78;
LABEL_109:
    WPP_RECORDER_AND_TRACE_SF_(
      v23->AttachedDevice,
      a2,
      a3,
      (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      4,
      2,
      v24,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    goto LABEL_48;
  }
  if ( v9 == 6 )
  {
    v7 = 31;
    v23 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v24 = 79;
    goto LABEL_109;
  }
  Timer_high = (PDEVICE_OBJECT)gpqForeground;
  if ( gpqForeground != *(_QWORD *)(gptiCurrent + 432LL) && gpqForeground )
    goto LABEL_27;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 900LL) || (v31 = 0, v26) )
    v31 = 1;
  v16 = v9 - 3;
  if ( v16 )
  {
    if ( v16 == 1 )
      v7 = 3;
  }
  else
  {
    v7 = 3;
    if ( (unsigned int)CoreWindowProp::IsComponent(v4) && !CoreWindowProp::GetHost(v4) )
      v7 = 11;
  }
LABEL_48:
  v17 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)v12,
      4,
      2,
      80,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
  }
  v18 = v7 | 4;
  if ( *(_QWORD *)(*((_QWORD *)v10 + 2) + 432LL) == gpqForeground && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
  LOBYTE(v19) = xxxSetForegroundWindowWithOptions(v10, v18, 0LL, v26);
  v25 = v19;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = "Success";
    if ( !(_BYTE)v19 )
      v20 = "Failure";
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      81,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      (__int64)v20);
  }
  if ( v31 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
    Timer_high = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v21 = 82;
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
    Timer_high = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v21 = 83;
  }
  LOBYTE(a2) = v8;
  WPP_RECORDER_AND_TRACE_SF_q(
    Timer_high->AttachedDevice,
    a2,
    a3,
    v19,
    4,
    2,
    v21,
    (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
    gptiCurrent);
LABEL_27:
  if ( v27 )
    ThreadUnlock1(Timer_high, a2, a3);
  return v25;
}
