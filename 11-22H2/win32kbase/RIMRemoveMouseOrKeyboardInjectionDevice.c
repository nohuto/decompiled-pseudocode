/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C017ABDC
 * Callers:
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C0170F70 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  char v2; // dl
  int v3; // esi
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  char v19; // dl
  char v20; // dl
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      47,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  Object = 0LL;
  v3 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v20 = 0;
    }
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        3,
        1,
        49,
        (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  else
  {
    v4 = Object;
    if ( *((_BYTE *)Object + 120) >= 2u )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1436);
    }
    v5 = v4[51];
    RIMLockExclusive(v5 + 104);
    if ( v5 )
    {
      if ( (*(_QWORD *)(v5 + 832) || *(_DWORD *)(v5 + 1056)) && *(_QWORD *)(v5 + 32) != PsGetCurrentProcess(v7, v6, v8) )
      {
        *((_DWORD *)v4 + 64) |= 0x100000u;
        v13 = SGDGetUserSessionState(v10, v9, v11, v12);
        RIMLockExclusive(v13 + 240);
        *((_DWORD *)v4 + 68) |= 4u;
        v18 = SGDGetUserSessionState(v15, v14, v16, v17);
        *(_QWORD *)(v18 + 248) = 0LL;
        ExReleasePushLockExclusiveEx(v18 + 240, 0LL);
        KeLeaveCriticalRegion();
        if ( (v4[32] & 0x800000) != 0 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1457);
        }
        *((_DWORD *)v4 + 64) |= 0x800000u;
        ZwSetEvent(*(HANDLE *)(v5 + 344), 0LL);
        v3 = 0;
      }
      else if ( *(_BYTE *)(v5 + 81) || *(_BYTE *)(v5 + 82) )
      {
        v3 = -1073741637;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          v19 = 0;
        }
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v19,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (_DWORD)gRimLog,
            3,
            1,
            48,
            (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      else
      {
        v3 = RIMFreeDev(v5, (__int64)(v4 + 9));
      }
    }
    *(_QWORD *)(v5 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
