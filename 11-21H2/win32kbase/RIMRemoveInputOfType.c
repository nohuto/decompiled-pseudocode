/*
 * XREFs of RIMRemoveInputOfType @ 0x1C00B6F70
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B6F30 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0044CE0 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RimInputTypeToDeviceType @ 0x1C00483D0 (RimInputTypeToDeviceType.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B713C (RIMRemoveDevOfInputType.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall RIMRemoveInputOfType(char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int v4; // edx
  int v5; // edi
  int v6; // r8d
  _DWORD *v7; // rsi
  int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // eax
  PDEVICE_OBJECT v12; // rcx
  bool v13; // r8
  __int16 v14; // ax
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      21,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v7) )
    {
      if ( v2 && (((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0) )
      {
        if ( (v2 & v7[21]) != 0 )
        {
          RIMRemoveDevOfInputType(v9, v2);
          v10 = RimInputTypeToDeviceType(v2);
          v5 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v7, v10);
          v7[21] &= ~v2;
LABEL_14:
          *((_QWORD *)v7 + 14) = 0LL;
          ExReleasePushLockExclusiveEx(v7 + 26, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v7);
          goto LABEL_15;
        }
        v5 = -1073741637;
        v12 = WPP_GLOBAL_Control;
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_14;
        v14 = 22;
      }
      else
      {
        v5 = -1073741811;
        v12 = WPP_GLOBAL_Control;
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_14;
        v14 = 23;
      }
    }
    else
    {
      v5 = -1073741637;
      v12 = WPP_GLOBAL_Control;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v14 = 24;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v8,
      v13,
      (_DWORD)gRimLog,
      3,
      1,
      v14,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    goto LABEL_14;
  }
LABEL_15:
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      25,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
