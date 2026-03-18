/*
 * XREFs of ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C
 * Callers:
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00AEE98 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C00CD718 (-xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z @ 0x1C023B648 (-xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C0082264 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00AE9B0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?TraceLoggingUpdateProcessedRecalcCounters@@YAXI@Z @ 0x1C00AF090 (-TraceLoggingUpdateProcessedRecalcCounters@@YAXI@Z.c)
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00B0BF8 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B1C4 (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

void __fastcall CRecalcProp::s_xxxProcessTopologyChange(int a1, __int64 a2)
{
  char v3; // di
  const struct tagWND *v4; // rax
  struct tagWND *v5; // rsi
  struct CRecalcProp *RecalcProperty; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct CRecalcProp *v10; // rbx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  int v19; // edx
  int v20; // r9d
  int v21; // r8d
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  unsigned int v24; // [rsp+A0h] [rbp+18h]

  v3 = 1;
  v4 = (const struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v5 = v4;
  if ( !v4 )
    return;
  RecalcProperty = CRecalcProp::GetRecalcProperty(v4);
  v10 = RecalcProperty;
  if ( !RecalcProperty || !*((_QWORD *)RecalcProperty + 3) )
    return;
  if ( !*((_DWORD *)RecalcProperty + 10) )
  {
    *((_DWORD *)RecalcProperty + 10) = 1;
    v23 = 0LL;
    v22 = 0LL;
    ThreadLock((__int64)v5, (__int64 *)&v22);
    v24 = CRecalcProp::xxxProcessTopologyChange(v10, v5, a2);
    if ( *((_DWORD *)v10 + 10) == 2 )
    {
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          v13,
          4,
          23,
          65,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
      }
      CRecalcProp::s_PostRecalcForWindow(v5);
    }
    *((_DWORD *)v10 + 10) = 0;
    if ( CRecalcProp::IsWindowEligibleForRecalc(v5) )
    {
      if ( *((_QWORD *)v10 + 3) || *((_QWORD *)v10 + 4) )
        goto LABEL_11;
    }
    else
    {
      LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v16,
          v17,
          3,
          23,
          66,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
      }
    }
    CRecalcProp::RemoveRecalcProperty(v5);
LABEL_11:
    v18 = ThreadUnlock1(v15, v14, v16);
    v21 = 0;
    if ( !v18 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v3 = 0;
      if ( (_BYTE)v19 || v3 )
      {
        LOBYTE(v21) = v3;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v21,
          v20,
          5,
          23,
          67,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
      }
    }
    TraceLoggingUpdateProcessedRecalcCounters(v24);
    return;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = v3;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      v9,
      3,
      23,
      64,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
  *((_DWORD *)v10 + 10) = 2;
}
