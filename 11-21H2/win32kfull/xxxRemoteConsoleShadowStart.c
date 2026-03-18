/*
 * XREFs of xxxRemoteConsoleShadowStart @ 0x1C0220350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C021F844 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     bDrvReconnect @ 0x1C02BF390 (bDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  _QWORD *RemoteContext; // r14
  char v9; // si
  __int64 v10; // xmm0_8
  void *v11; // rax
  NTSTATUS MirrorDriver; // edi
  NTSTATUS v13; // eax
  PVOID v14; // rcx
  int v15; // r8d
  int v16; // r9d
  void *v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // xmm0_8
  __int64 HDEV; // rax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v23; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v24; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v27[56]; // [rsp+70h] [rbp-90h] BYREF
  _DISPLAY_DEVICEW v28; // [rsp+150h] [rbp+50h] BYREF

  memset(v27, 0, 0xDCuLL);
  memset(&v28, 0, sizeof(v28));
  DestinationString = 0LL;
  RemoteContext = (_QWORD *)GreGetRemoteContext();
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      12,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( gbConnected && !gProtocolType )
  {
    gConsoleShadowhDev = 0LL;
    Object = 0LL;
    gfRemotingConsole = 0;
    v10 = *(_QWORD *)(a1 + 268);
    gpConsoleShadowThinWireCache = ThinWireCache;
    ghConsoleShadowVideoChannel = *(HANDLE *)(a1 + 32);
    ghConsoleShadowBeepChannel = *(HANDLE *)(a1 + 40);
    ghConsoleShadowKeyboardChannel = *(HANDLE *)(a1 + 56);
    v11 = *(void **)(a1 + 64);
    gRemoteClientKeyboardType = v10;
    ghConsoleShadowThinwireChannel = v11;
    *((_DWORD *)&gRemoteClientKeyboardType + 2) = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    MirrorDriver = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 72), 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    gpConsoleShadowDisplayChangeEvent = Object;
    if ( MirrorDriver >= 0 )
    {
      v23 = 0LL;
      MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowVideoChannel, 0, 0LL, 0, &v23, 0LL);
      if ( MirrorDriver >= 0 )
      {
        gConsoleShadowVideoFileObject = v23;
        IoGetRelatedDeviceObject((PFILE_OBJECT)v23);
        v24 = 0LL;
        v13 = ObReferenceObjectByHandle(ghConsoleShadowThinwireChannel, 0, 0LL, 0, &v24, 0LL);
        v14 = v24;
        MirrorDriver = v13;
        gConsoleShadowThinwireFileObject = v24;
        if ( v13 >= 0 )
        {
          G_SaveRemoteVideoFileObject = (struct _FILE_OBJECT *)RemoteContext[1];
          G_SaveRemoteConnectionFileObject = (struct _FILE_OBJECT *)RemoteContext[2];
          G_SavePerformanceStatistics = (unsigned __int8 *)RemoteContext[4];
          G_SaveRemoteConnectionChannel = (void *)RemoteContext[3];
          RemoteContext[1] = gConsoleShadowVideoFileObject;
          RemoteContext[4] = gpConsoleShadowThinWireCache;
          RemoteContext[3] = ghConsoleShadowThinwireChannel;
          RemoteContext[2] = v14;
          v25 = 0LL;
          MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowBeepChannel, 0, 0LL, 0, &v25, 0LL);
          gpConsoleShadowBeepDevice = v25;
          if ( MirrorDriver >= 0 )
          {
            MirrorDriver = FindMirrorDriver(a2, &v28);
            if ( MirrorDriver >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, v28.DeviceName);
              v27[18] = 1835040;
              LOWORD(v27[17]) = 220;
              v27[42] = *(_DWORD *)(a1 + 248);
              v18 = *(_QWORD *)(*gpDispInfo + 24LL);
              v19 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8).m128i_u64[0];
              v27[19] = *(_OWORD *)(*gpDispInfo + 24LL);
              v27[20] = HIDWORD(v18);
              v27[44] = HIDWORD(v19) - HIDWORD(v18);
              v27[43] = v19 - v18;
              if ( !(unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v27, 0LL, 268435457LL, 0LL, 0, a3)
                && !(unsigned int)xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, a3) )
              {
                HDEV = DrvGetHDEV(&DestinationString);
                gConsoleShadowhDev = HDEV;
                if ( HDEV )
                {
                  gfRemotingConsole = 1;
                  if ( (unsigned int)bDrvReconnect(
                                       HDEV,
                                       ghConsoleShadowThinwireChannel,
                                       gConsoleShadowThinwireFileObject,
                                       0LL) )
                  {
                    HDXDrvEscape(gConsoleShadowhDev, 2LL, gptmrWD, 8LL);
                    return (unsigned int)MirrorDriver;
                  }
                }
              }
              MirrorDriver = -1073741823;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                v9 = 0;
              }
              if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v17 = &WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids;
                LOBYTE(v17) = v9;
                LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v17,
                  v15,
                  v16,
                  4,
                  9,
                  13,
                  (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
              }
            }
          }
        }
      }
    }
    if ( gConsoleShadowVideoFileObject )
    {
      ObfDereferenceObject(gConsoleShadowVideoFileObject);
      gConsoleShadowVideoFileObject = 0LL;
    }
    if ( gConsoleShadowThinwireFileObject )
    {
      ObfDereferenceObject(gConsoleShadowThinwireFileObject);
      gConsoleShadowThinwireFileObject = 0LL;
    }
    if ( gpConsoleShadowBeepDevice )
    {
      ObfDereferenceObject(gpConsoleShadowBeepDevice);
      gpConsoleShadowBeepDevice = 0LL;
    }
    if ( gpConsoleShadowDisplayChangeEvent )
    {
      ObfDereferenceObject(gpConsoleShadowDisplayChangeEvent);
      gpConsoleShadowDisplayChangeEvent = 0LL;
    }
    return (unsigned int)MirrorDriver;
  }
  return 3221225473LL;
}
