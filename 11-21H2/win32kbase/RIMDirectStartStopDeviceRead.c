/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0047820
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00475F0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0044EA0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ApiSetIsRemoteConnection @ 0x1C0047B78 (ApiSetIsRemoteConnection.c)
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00C1E80 (RIMChildInputTypeIsVirtualized.c)
 *     RIMIsRawInputActive @ 0x1C00DBE44 (RIMIsRawInputActive.c)
 *     RIMHidValidExclusive @ 0x1C0199F7C (RIMHidValidExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1C01A18E4 (rimFakePnpRemoveComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(char *a1)
{
  bool v2; // dl
  int v3; // edx
  int v4; // r8d
  int v5; // r14d
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  bool v19; // dl
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      108,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( !bRimDispositionNormal((struct RawInputManagerObject *)v6) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v5 = -1073741637;
      v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          109,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    else
    {
      v8 = v6[53];
      if ( v8 )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + 40);
          v10 = RimDeviceTypeToRimInputType(v8, *(unsigned __int8 *)(v8 + 48), v7);
          v7 = v10;
          if ( (v10 & 0x3C) != 0 )
          {
            v12 = *(_DWORD *)(v8 + 184);
            if ( (v12 & 0x2000) == 0
              && (v12 & 1) == 0
              && (v12 & 2) == 0
              && (v12 & 4) == 0
              && (v12 & 8) == 0
              && (v12 & 0x400) == 0
              && (v12 & 0x10000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v8 + 32) + 64LL) || !(unsigned __int8)RIMChildInputTypeIsVirtualized(v10)) )
            {
              v13 = *(_QWORD *)(v8 + 464);
              if ( v13 )
              {
                if ( (unsigned int)RIMIsRawInputActive(v8, v11, v7) )
                {
                  if ( !*(_QWORD *)(v8 + 224) )
                  {
                    *(_DWORD *)(v8 + 184) |= 1u;
                    rimOnPnpArrived(v6, v8, -1LL);
                    if ( *(_QWORD *)(v8 + 224) )
                    {
                      if ( (*(_DWORD *)(v8 + 184) & 0x400) != 0 )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v7);
                      *(_DWORD *)(v8 + 200) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( (*(_DWORD *)(v8 + 184) & 0x20000) != 0
                    && (*(_DWORD *)(v13 + 24) || *(_DWORD *)(v13 + 32) > (unsigned int)RIMHidValidExclusive(v13)) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v7);
                  }
                  if ( *(_QWORD *)(v8 + 224) )
                  {
                    v18 = *(_DWORD *)(v8 + 200);
                    if ( (v18 & 0x80u) == 0 && (v18 & 0x100) == 0 && (v18 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v6, v8);
                  }
                }
              }
            }
          }
          v8 = v9;
        }
        while ( v9 );
      }
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v6 + 13));
    ObfDereferenceObject(v6);
  }
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      110,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
