/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C0185AD0
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C0005050 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00E92C8 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMQueryDev @ 0x1C009EDA4 (RIMQueryDev.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, char *a2)
{
  char *v2; // rdi
  int v4; // edx
  int v5; // ebx
  int v6; // r8d
  struct RawInputManagerObject *v7; // rsi
  int v8; // edx
  __int64 v9; // r8
  PVOID v10; // rdi
  char *v11; // rdx
  PVOID v13; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v13 = 0LL;
  v2 = a2;
  Object = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      111,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v13);
  if ( v5 >= 0 )
  {
    v7 = (struct RawInputManagerObject *)v13;
    RIMLockExclusive((__int64)v13 + 104);
    RIMLockExclusive((__int64)v7 + 792);
    if ( bRimDispositionNormal(v7) )
    {
      v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
      if ( v5 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 88;
        else
          v11 = 0LL;
        if ( v11[48] == 2 )
          v5 = -1073741811;
        else
          v5 = RIMQueryDev((__int64)v7, (__int64)v11, v9);
        ObfDereferenceObject(v10);
      }
    }
    else
    {
      v5 = -1073741637;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          112,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    *((_QWORD *)v7 + 100) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 792, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
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
      113,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
