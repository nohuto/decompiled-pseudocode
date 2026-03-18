/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C0177190
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0174CC0 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1C0019514 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0019774 (RIMFreeQDCActivePathsData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006E118 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetDeviceLocationInfo @ 0x1C0188F30 (RIMGetDeviceLocationInfo.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C018FA50 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C018FED8 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01907FC (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, _QWORD *a4)
{
  int v6; // r14d
  _BYTE *v7; // rbx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // r8
  PVOID v12; // r13
  char *v13; // r15
  PVOID v14; // rbx
  int v15; // edx
  _UNKNOWN **v16; // r8
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  PVOID v19; // r15
  _UNKNOWN **v20; // r8
  char v21; // dl
  PVOID v23; // [rsp+58h] [rbp-70h] BYREF
  PVOID v24; // [rsp+60h] [rbp-68h] BYREF
  PVOID Object; // [rsp+68h] [rbp-60h] BYREF
  _BYTE *v26; // [rsp+70h] [rbp-58h]
  PVOID v27; // [rsp+78h] [rbp-50h]
  HANDLE Handle; // [rsp+80h] [rbp-48h] BYREF
  PVOID v29; // [rsp+88h] [rbp-40h] BYREF
  __int128 v30; // [rsp+90h] [rbp-38h] BYREF
  char *v31; // [rsp+D8h] [rbp+10h]
  int v32; // [rsp+E0h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v23 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  v29 = 0LL;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      148,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v23);
  if ( v6 >= 0 )
  {
    v7 = v23;
    v26 = v23;
    RIMLockExclusive((__int64)v23 + 104);
    if ( v7[81] )
    {
      v6 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (_DWORD)gRimLog,
          3,
          1,
          151,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      goto LABEL_54;
    }
    v6 = RawInputManagerDeviceObjectResolveHandle(v31, 3u, 1, &v24);
    if ( v6 < 0 )
    {
LABEL_54:
      *((_QWORD *)v7 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v7);
      goto LABEL_55;
    }
    v12 = v24;
    v13 = (char *)v24 + 72;
    if ( !v24 )
      v13 = 0LL;
    if ( v13[48] != 2
      || (*((_DWORD *)v13 + 50) & 0x80u) != 0
      || (*((_DWORD *)v13 + 46) & 0x2000) != 0
      || *((_DWORD *)v13 + 334) )
    {
      v6 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      v20 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          (_DWORD)v20,
          (_DWORD)gRimLog,
          3,
          1,
          149,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      goto LABEL_39;
    }
    v6 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)v13 + 13,
           v10,
           v11,
           &Handle,
           &v29,
           (PDEVICE_OBJECT *)&Object);
    if ( v6 < 0 )
    {
LABEL_39:
      ObfDereferenceObject(v12);
      goto LABEL_54;
    }
    v14 = Object;
    v27 = Object;
    ObfReferenceObject(Object);
    v6 = RIMGetDeviceLocationInfo(v14, v13 + 2120);
    if ( v6 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4818);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v15) = 0;
      }
      v16 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          (_DWORD)v16,
          (_DWORD)gRimLog,
          3,
          1,
          150,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      v6 = 0;
    }
    *((_DWORD *)v13 + 334) = 1;
    RIMReadDigitizerToMonitorMappings(v13, v13 + 1336);
    v30 = 0LL;
    v17 = RIMGetQDCActivePathsData((unsigned int *)&v30);
    rimFindMonitorForDigitizerWithQDCData(v13, v17, 0LL);
    RIMSetDeviceOutputConfig((struct RIMDEV *)v13, 0LL);
    RIMFreeQDCActivePathsData((__int64)v17);
    if ( a4 )
    {
      if ( *((_QWORD *)v13 + 59) || *((_DWORD *)v13 + 334) )
        v18 = *((_QWORD *)v13 + 168);
      else
        v18 = -1LL;
      if ( v32 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_QWORD *)MmUserProbeAddress;
        *a4 = v18;
        v7 = v26;
        v19 = v27;
        goto LABEL_38;
      }
      *a4 = v18;
    }
    v19 = v27;
    v7 = v26;
LABEL_38:
    ZwClose(Handle);
    ObfDereferenceObject(v29);
    ObfDereferenceObject(v19);
    goto LABEL_39;
  }
LABEL_55:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v21 = 0;
  }
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x98u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v6);
  return (unsigned int)v6;
}
