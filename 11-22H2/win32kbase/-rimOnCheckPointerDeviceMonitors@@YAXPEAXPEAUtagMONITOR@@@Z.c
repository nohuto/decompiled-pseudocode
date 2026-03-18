/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0174734
 * Callers:
 *     DestroyMonitor @ 0x1C00A04C0 (DestroyMonitor.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  struct tagMONITOR *v2; // r14
  int v4; // r15d
  _QWORD *v5; // rdi
  int v6; // edx
  __int64 i; // rbx
  __int64 v8; // rax
  char v9; // dl
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      82,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) )
    {
      v4 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v6) = 0;
      }
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          83,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 95));
      for ( i = v5[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 1336) )
        {
          v8 = 0LL;
          if ( v2 )
            v8 = *(_QWORD *)v2;
          if ( *(_QWORD *)(i + 1344) == v8 )
          {
            if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 472) + 24LL) == 6 )
            {
              LODWORD(Object) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2510);
            }
            *(_QWORD *)(i + 1344) = 0LL;
            *(_DWORD *)(i + 1352) = 0;
          }
        }
      }
      v5[96] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 95, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x54u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v4);
}
