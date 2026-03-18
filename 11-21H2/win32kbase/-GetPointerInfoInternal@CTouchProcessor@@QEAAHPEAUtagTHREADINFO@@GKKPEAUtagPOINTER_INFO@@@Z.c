/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C01CB5F0
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0159FF0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01C9500 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  CTouchProcessor *v6; // rbp
  char v8; // r14
  __int64 v9; // rdx
  unsigned __int64 ThreadPointerData; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // bl
  int v14; // edx
  char v15; // bl
  int v16; // edx
  __int64 v17; // rcx
  int v19; // edx
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+74h] [rbp+Ch]

  v21 = HIDWORD(this);
  v6 = gpTouchProcessor;
  v20 = 0;
  v8 = a3;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1112),
                        a3,
                        &v20,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 321;
      LOBYTE(v14) = v13;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        321,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        v8);
    }
LABEL_29:
    v17 = 87LL;
LABEL_20:
    UserSetLastError(v17, v9, v11, v12);
    return 0LL;
  }
  v15 = 1;
  if ( a4 != 1 && a4 != v20 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v15 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 322;
      LOBYTE(v16) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        322,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v17 = 1629LL;
    goto LABEL_20;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerData(v6, ThreadPointerData, a4, a5, a6) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v15 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 323;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        323,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        ThreadPointerData);
    }
    goto LABEL_29;
  }
  return 1LL;
}
