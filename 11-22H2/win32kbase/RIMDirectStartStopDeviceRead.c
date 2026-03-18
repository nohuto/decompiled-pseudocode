/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0176DF0
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C01E26E0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMApiSetIsRemoteConnection @ 0x1C0075764 (RIMApiSetIsRemoteConnection.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0075E94 (RIMChildInputTypeIsVirtualized.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsRawInputActive @ 0x1C0171108 (RIMIsRawInputActive.c)
 *     RIMHidValidExclusive @ 0x1C0191970 (RIMHidValidExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1C019A7A0 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(char *a1)
{
  char v2; // dl
  int v3; // ebp
  _QWORD *v4; // rsi
  CInpPushLock *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r14
  int v12; // r8d
  int v13; // ecx
  __int64 v14; // rdi
  int v15; // eax
  char v16; // dl
  char v17; // dl
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h]

  Object = 0LL;
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
      108,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    v5 = (CInpPushLock *)((char *)Object + 104);
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v4 + 81) || *((_BYTE *)v4 + 82) || RIMApiSetIsRemoteConnection(v7, v6, v8, v9) )
    {
      v3 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        v16 = 0;
      }
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          109,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
    }
    else
    {
      v10 = v4[53];
      if ( v10 )
      {
        do
        {
          v11 = *(_QWORD *)(v10 + 40);
          v12 = RimDeviceTypeToRimInputType(v10, *(unsigned __int8 *)(v10 + 48));
          if ( (v12 & 0x3C) != 0 )
          {
            v13 = *(_DWORD *)(v10 + 184);
            if ( (v13 & 0x2000) == 0
              && (v13 & 1) == 0
              && (v13 & 2) == 0
              && (v13 & 4) == 0
              && (v13 & 8) == 0
              && (v13 & 0x400) == 0
              && (v13 & 0x10000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v10 + 32) + 64LL) || !RIMChildInputTypeIsVirtualized(v12)) )
            {
              v14 = *(_QWORD *)(v10 + 464);
              if ( v14 )
              {
                if ( (unsigned int)RIMIsRawInputActive(v10) )
                {
                  if ( !*(_QWORD *)(v10 + 224) )
                  {
                    *(_DWORD *)(v10 + 184) |= 1u;
                    rimOnPnpArrived((__int64)v4, v10, -1LL);
                    if ( *(_QWORD *)(v10 + 224) )
                    {
                      if ( (*(_DWORD *)(v10 + 184) & 0x400) != 0 )
                      {
                        LODWORD(Object) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3359);
                      }
                      *(_DWORD *)(v10 + 200) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( (*(_DWORD *)(v10 + 184) & 0x20000) != 0
                    && (*(_DWORD *)(v14 + 24) || *(_DWORD *)(v14 + 32) > (unsigned int)RIMHidValidExclusive(v14)) )
                  {
                    v20 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3374);
                  }
                  if ( *(_QWORD *)(v10 + 224) )
                  {
                    v15 = *(_DWORD *)(v10 + 200);
                    if ( (v15 & 0x80u) == 0 && (v15 & 0x100) == 0 && (v15 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v4, v10);
                  }
                }
              }
            }
          }
          v10 = v11;
        }
        while ( v11 );
        v5 = (CInpPushLock *)(v4 + 13);
      }
    }
    CInpPushLock::UnLockExclusive(v5);
    ObfDereferenceObject(v4);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v17 = 0;
  }
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v17,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x6Eu,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v3);
  return (unsigned int)v3;
}
