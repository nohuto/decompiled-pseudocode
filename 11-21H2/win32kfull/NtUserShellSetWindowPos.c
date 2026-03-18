/*
 * XREFs of NtUserShellSetWindowPos @ 0x1C01FEFF0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndIAM @ 0x1C0022C00 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??9?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z @ 0x1C006A1E4 (--9-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     LeaveEditionCrit @ 0x1C011DF80 (LeaveEditionCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x1C015A8EC (WPP_RECORDER_AND_TRACE_SF_qdqd.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C02367D0 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 */

__int64 __fastcall NtUserShellSetWindowPos(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v8; // r14
  char v10; // di
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // r8
  PDEVICE_OBJECT v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  struct tagWND *v25; // r13
  PDEVICE_OBJECT v26; // rcx
  __int16 v27; // ax
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // r9d
  PDEVICE_OBJECT v31; // rcx
  __int16 v32; // ax
  unsigned int v33; // r9d
  PDEVICE_OBJECT v34; // rcx
  __int16 v35; // ax
  char v36; // al
  PDEVICE_OBJECT v37; // rcx
  __int16 v38; // ax
  int v39; // eax
  int v41; // [rsp+20h] [rbp-98h]
  int v42; // [rsp+28h] [rbp-90h]
  int v43; // [rsp+30h] [rbp-88h]
  int v44; // [rsp+38h] [rbp-80h]
  char v45; // [rsp+40h] [rbp-78h]
  char v46; // [rsp+40h] [rbp-78h]
  _BYTE v47[3]; // [rsp+61h] [rbp-57h] BYREF
  _DWORD v48[7]; // [rsp+64h] [rbp-54h] BYREF
  _OWORD v49[3]; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v51; // [rsp+D8h] [rbp+20h]

  v51 = a4;
  v8 = a2;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v47);
  v49[0] = 0LL;
  v11 = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SSWPU__private_reporting,
    0x1B1CF87u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_GdiEnableTestEscapeAPI_logged_traits,
    0,
    v43);
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    v12 = a5;
    if ( (a5 & 0xFFFFFFC0) != 0 )
    {
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v21 = 34;
      v45 = a5;
      goto LABEL_20;
    }
    if ( a4 > 3 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = v10;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          22,
          35,
          (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
          a4);
      }
      goto LABEL_21;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13, a5) & 0xF) != 2 )
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v17 = 36;
      goto LABEL_9;
    }
    v22 = ValidateHwndIAM(a1);
    v25 = (struct tagWND *)v22;
    if ( !v22 )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v27 = 37;
      goto LABEL_46;
    }
    if ( !IsTopLevelWindow(v22) )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v27 = 38;
      goto LABEL_46;
    }
    if ( *((_QWORD *)v25 + 2) == gptiCurrent )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v27 = 39;
LABEL_46:
      v46 = a1;
LABEL_47:
      LOBYTE(v12) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        v26->AttachedDevice,
        v12,
        v23,
        v24,
        2,
        22,
        v27,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
        v46);
      goto LABEL_21;
    }
    if ( v8 )
    {
      v28 = ValidateHwndIAM(v8);
      if ( !v28 )
      {
        v26 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v27 = 40;
        v24 = a2;
        v46 = a2;
        goto LABEL_47;
      }
      v48[0] = *(_DWORD *)(*(_QWORD *)(v28 + 40) + 236LL);
      if ( tagWND::RedirectedFieldzbid<enum ZBID>::operator!=((__int64)v25 + 213, v48) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qdqd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v10,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            v41,
            v42,
            0x29u,
            v44);
        goto LABEL_10;
      }
      v12 = *(unsigned __int8 *)(v29 + 24);
      if ( ((*(_BYTE *)(*((_QWORD *)v25 + 5) + 24LL) ^ (unsigned __int8)v12) & 8) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qdqd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v10,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            v41,
            v42,
            0x2Au,
            v44);
        goto LABEL_21;
      }
    }
    if ( (unsigned int)IsHungWindow(v25) )
    {
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v32 = 43;
LABEL_97:
      LOBYTE(v12) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        v31->AttachedDevice,
        v12,
        v14,
        v30,
        2,
        22,
        v32,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
        a1);
LABEL_98:
      v18 = 5023LL;
      goto LABEL_11;
    }
    v12 = **(unsigned __int16 **)(*((_QWORD *)v25 + 17) + 8LL);
    if ( (_WORD)v12 == *(_WORD *)(gpsi + 900LL) )
    {
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v32 = 44;
      goto LABEL_97;
    }
    v33 = a5;
    v12 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 && v8 )
    {
      v34 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v35 = 45;
      goto LABEL_116;
    }
    v36 = 0;
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_OWORD *)MmUserProbeAddress;
      v49[0] = *a3;
      v36 = 1;
    }
    if ( v36 )
      goto LABEL_152;
    if ( (a5 & 0xC) != 0 )
    {
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v21 = 47;
      v45 = a5;
LABEL_20:
      LOBYTE(v12) = v10;
      WPP_RECORDER_AND_TRACE_SF_D(
        v20->AttachedDevice,
        v12,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        22,
        v21,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
        v45);
LABEL_21:
      v18 = 87LL;
      goto LABEL_11;
    }
    if ( v51 != 3 )
    {
LABEL_152:
      v39 = ShellWindowPos::PositionWindowAsync(v25, v8, v49, v51, v33, a6) - 1;
      if ( !v39 )
      {
        v18 = 14LL;
        goto LABEL_11;
      }
      if ( v39 != 1 )
      {
        v11 = 1;
        goto LABEL_171;
      }
      goto LABEL_98;
    }
    if ( (a5 & 0x10) != 0 )
    {
      v37 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_149;
      v38 = 48;
    }
    else
    {
      if ( !v8 )
      {
        v34 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v35 = 50;
        goto LABEL_116;
      }
      v37 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_149:
        if ( (*(_BYTE *)(*((_QWORD *)v25 + 5) + 31LL) & 0x20) != 0 )
        {
          v51 = 0;
LABEL_151:
          v8 = a2;
          goto LABEL_152;
        }
        if ( IsSemiMaximized(v25) )
          goto LABEL_151;
        v34 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v35 = 51;
LABEL_116:
        LOBYTE(v12) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          v34->AttachedDevice,
          v12,
          v14,
          v33,
          2,
          22,
          v35,
          (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
        goto LABEL_21;
      }
      v38 = 49;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v37->AttachedDevice,
      v12,
      v14,
      a5,
      4,
      22,
      v38,
      (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
    v33 = a5;
    goto LABEL_149;
  }
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_10;
  v17 = 33;
LABEL_9:
  LOBYTE(v12) = v10;
  WPP_RECORDER_AND_TRACE_SF_(
    v16->AttachedDevice,
    v12,
    v14,
    v15,
    2,
    22,
    v17,
    (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
LABEL_10:
  v18 = 5LL;
LABEL_11:
  UserSetLastError(v18, v12);
LABEL_171:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v47, v12, v19);
  LeaveEditionCrit((__int64)v47);
  return v11;
}
