/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C01A7B8C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     rimAllocPointerInfoNodeList @ 0x1C00E683E (rimAllocPointerInfoNodeList.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     rimFindHoldingFrame @ 0x1C01A6DDC (rimFindHoldingFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C01B6870 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v16; // zf
  __int64 v17; // rdx
  __int64 ButtonContact; // rsi
  __int64 v19; // r8
  __int64 v20; // rcx
  _OWORD *v21; // rax
  _OWORD *v22; // rax
  int v23; // r9d
  __int64 active; // rax
  __int64 v25; // r8
  __int64 v26; // xmm1_8
  __int64 v27; // rcx
  __int64 v28; // rsi
  int v29; // eax
  _OWORD *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rdx
  _OWORD *v33; // rax
  __int128 v34; // [rsp+50h] [rbp-30h] BYREF
  __int64 v35; // [rsp+60h] [rbp-20h]
  __int64 v36; // [rsp+68h] [rbp-18h] BYREF
  int v37; // [rsp+70h] [rbp-10h]
  __int64 v38; // [rsp+78h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 472);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !(_DWORD)v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  v11 = rimAllocPointerInfoNodeList(v8, v7, a3);
  HoldingFrame[9] = v11;
  if ( !v11 )
  {
    LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v14,
        (_DWORD)gRimLog,
        4,
        1,
        46,
        (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
    }
    return 0LL;
  }
  v16 = *((_DWORD *)HoldingFrame + 11) == 0;
  *((_DWORD *)HoldingFrame + 10) = a3;
  if ( !v16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    v20 = *(unsigned int *)(ButtonContact + 32);
    if ( (v20 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v17, v19);
      v20 = *(unsigned int *)(ButtonContact + 32);
    }
    if ( (v20 & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v17, v19);
    if ( (*(_DWORD *)(ButtonContact + 2420) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v17, v19);
      v21 = (_OWORD *)HoldingFrame[9];
      HoldingFrame[10] = v21;
    }
    else
    {
      v21 = (_OWORD *)HoldingFrame[9];
    }
    *v21 = *(_OWORD *)(ButtonContact + 2392);
    v21[1] = *(_OWORD *)(ButtonContact + 2408);
    v21[2] = *(_OWORD *)(ButtonContact + 2424);
    v21[3] = *(_OWORD *)(ButtonContact + 2440);
    v21[4] = *(_OWORD *)(ButtonContact + 2456);
    v21[5] = *(_OWORD *)(ButtonContact + 2472);
    v21[6] = *(_OWORD *)(ButtonContact + 2488);
    v22 = v21 + 8;
    *(v22 - 1) = *(_OWORD *)(ButtonContact + 2504);
    *v22 = *(_OWORD *)(ButtonContact + 2520);
    v22[1] = *(_OWORD *)(ButtonContact + 2536);
    v22[2] = *(_OWORD *)(ButtonContact + 2552);
    v22[3] = *(_OWORD *)(ButtonContact + 2568);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v36, v4);
    v26 = *(_QWORD *)(active + 16);
    v34 = *(_OWORD *)active;
    v35 = v26;
    while ( 1 )
    {
      RIMCmActiveContactsEnd((__int64)&v36, v4, v25);
      v28 = v35;
      if ( (_QWORD)v34 == v36 && DWORD2(v34) == v37 && v35 == v38 )
        break;
      v29 = *(_DWORD *)(v35 + 16);
      v30 = (_OWORD *)(v35 + 2376);
      if ( (v29 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v17, v19);
        v29 = *(_DWORD *)(v28 + 16);
      }
      if ( (v29 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v17, v19);
      if ( (*(_DWORD *)(v28 + 2324) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v28 + 2404) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v17, v19);
          v31 = *((unsigned int *)HoldingFrame + 11);
          v32 = HoldingFrame[9];
          HoldingFrame[10] = v32 + 192 * v31;
        }
        else
        {
          LODWORD(v31) = *((_DWORD *)HoldingFrame + 11);
          v32 = HoldingFrame[9];
        }
        v33 = (_OWORD *)(v32 + 192LL * (unsigned int)v31);
        *v33 = *v30;
        v33[1] = *(_OWORD *)(v28 + 2392);
        v33[2] = *(_OWORD *)(v28 + 2408);
        v33[3] = *(_OWORD *)(v28 + 2424);
        v33[4] = *(_OWORD *)(v28 + 2440);
        v33[5] = *(_OWORD *)(v28 + 2456);
        v33[6] = *(_OWORD *)(v28 + 2472);
        v33 += 8;
        *(v33 - 1) = *(_OWORD *)(v28 + 2488);
        *v33 = *(_OWORD *)(v28 + 2504);
        v33[1] = *(_OWORD *)(v28 + 2520);
        v33[2] = *(_OWORD *)(v28 + 2536);
        v33[3] = *(_OWORD *)(v28 + 2552);
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v34);
    }
  }
  v23 = *((_DWORD *)HoldingFrame + 11);
  if ( v23 != *((_DWORD *)HoldingFrame + 10) )
  {
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v19,
        (_DWORD)gRimLog,
        4,
        1,
        47,
        (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids,
        v23,
        *((_DWORD *)HoldingFrame + 10));
    }
    return 0LL;
  }
  return 1LL;
}
