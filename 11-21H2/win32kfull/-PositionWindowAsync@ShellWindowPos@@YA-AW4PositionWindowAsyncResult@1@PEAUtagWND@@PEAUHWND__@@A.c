/*
 * XREFs of ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C02367D0
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00056A0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01DBF00 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddDq @ 0x1C0237FA0 (WPP_RECORDER_AND_TRACE_SF_qdddddDq.c)
 */

__int64 __fastcall ShellWindowPos::PositionWindowAsync(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6)
{
  const struct tagRECT *v7; // r15
  __int64 v8; // r12
  unsigned int v10; // ebx
  char v11; // si
  unsigned int v12; // ebp
  int v13; // edx
  char v14; // di
  int v15; // r8d
  const char *v16; // rax
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rdi
  struct tagRECT v20; // xmm0
  __int64 v21; // rax
  const char *v23; // rax
  int v24; // edx

  v7 = (const struct tagRECT *)a3;
  v8 = a2;
  if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v10 = 0;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v12 = a5;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdddddDq(WPP_GLOBAL_Control->AttachedDevice, a2, a3, 11);
  if ( (a5 & 0x10) != 0 )
  {
    v14 = RunForegroundAccessCheck((__int64)a1, 3LL, a3);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = "Granted";
      if ( !v14 )
        v16 = "Denied";
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        25,
        12,
        (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
        (__int64)v16);
    }
    if ( !v14 )
      return 2LL;
    v12 = a5 & 0xFFFFFFFC;
  }
  v17 = Win32AllocPoolZInit(40LL, 1886872405LL);
  v19 = v17;
  if ( v17 )
  {
    v20 = *v7;
    *(_QWORD *)(v17 + 16) = v8;
    *(_DWORD *)(v17 + 24) = a4;
    *(_DWORD *)(v17 + 28) = v12;
    *(struct tagRECT *)v17 = v20;
    *(_DWORD *)(v17 + 32) = a6;
    if ( v8 && v12 == 1 && IsRectEmptyInl(v7) )
    {
      v21 = HMValidateHandleNoSecure(v8, 1);
      if ( v21
        && (unsigned int)PostEventMessageEx(
                           *(struct tagTHREADINFO **)(v21 + 16),
                           *(struct tagQ **)(*(_QWORD *)(v21 + 16) + 432LL),
                           0x1Bu,
                           a1,
                           0,
                           0LL,
                           v19,
                           0LL) )
      {
        goto LABEL_33;
      }
    }
    else if ( PostEventMessageWindow((struct tagTHREADINFO **)a1, 0x1Bu, 0LL, v19) )
    {
      goto LABEL_33;
    }
    Win32FreePool(v19);
  }
  v19 = 0LL;
LABEL_33:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = "Succeeded";
    if ( !v19 )
      v23 = "Failed";
    v24 = 13;
    LOBYTE(v24) = v11;
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v24,
      v18,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      25,
      13,
      (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
      (__int64)v23);
  }
  LOBYTE(v10) = v19 == 0;
  return v10;
}
