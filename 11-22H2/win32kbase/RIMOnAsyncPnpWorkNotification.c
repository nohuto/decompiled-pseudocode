/*
 * XREFs of RIMOnAsyncPnpWorkNotification @ 0x1C0179C70
 * Callers:
 *     NtRIMOnAsyncPnpWorkNotification @ 0x1C0174EF0 (NtRIMOnAsyncPnpWorkNotification.c)
 *     ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C01DCD90 (-OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1C0073158 (WPP_RECORDER_AND_TRACE_SF_qqDdS.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDoAsyncPnpWorkItem @ 0x1C00756D4 (RIMDoAsyncPnpWorkItem.c)
 *     RIMApiSetIsRemoteConnection @ 0x1C0075764 (RIMApiSetIsRemoteConnection.c)
 *     RIMFreeAsyncPnpWorkItem @ 0x1C00B505C (RIMFreeAsyncPnpWorkItem.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC9DC (rimDoRimDevChangeAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetProcessHidRawInput @ 0x1C00E77E2 (ApiSetProcessHidRawInput.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0174548 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?WorkItemTypeToString@InputTraceLogging@@CAPEBDW4tagASYNCPNP_TYPE@@@Z @ 0x1C017460C (-WorkItemTypeToString@InputTraceLogging@@CAPEBDW4tagASYNCPNP_TYPE@@@Z.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x1C019A740 (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1C01A03D4 (rimDoUpdateInputGlobalsWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A2238 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01A28E4 (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceRootPnpEndSyncAsyncWorkItem @ 0x1C01A2C8C (RIMVirtDeviceRootPnpEndSyncAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C020804C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C02080A4 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 */

__int64 __fastcall RIMOnAsyncPnpWorkNotification(char *a1)
{
  int v2; // r14d
  _QWORD *v3; // rsi
  CInpPushLock *v4; // rbx
  _QWORD *v5; // rdx
  int *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  const wchar_t *v14; // rax
  unsigned int v15; // ecx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edx
  int v27; // r8d
  int v28; // eax
  PDEVICE_OBJECT v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  char v38; // dl
  int v40; // [rsp+20h] [rbp-50h]
  int v41; // [rsp+28h] [rbp-48h]
  int v42; // [rsp+30h] [rbp-40h]
  int v43; // [rsp+38h] [rbp-38h]
  __int64 v44; // [rsp+40h] [rbp-30h]
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v46; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+58h] BYREF

  Object = 0LL;
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_82;
  }
  v3 = Object;
  v4 = (CInpPushLock *)((char *)Object + 352);
  RIMLockExclusive((__int64)Object + 352);
  v5 = v3 + 47;
  v6 = (int *)v3[47];
  if ( *((_QWORD **)v6 + 1) != v3 + 47 || (v7 = *(_QWORD *)v6, *(int **)(*(_QWORD *)v6 + 8LL) != v6) )
    __fastfail(3u);
  *v5 = v7;
  *(_QWORD *)(v7 + 8) = v5;
  CInpPushLock::UnLockExclusive(v4);
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
  {
    Object = (PVOID)InputTraceLogging::WorkItemTypeToString(v6[4]);
    v46 = (__int64)v6;
    v47 = (__int64)v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0289810,
      byte_1C025834F,
      v11,
      v12,
      (__int64)&v47,
      (__int64)&v46,
      &Object);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v44) = HIDWORD(v3);
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x46u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *((_QWORD *)v6 + 7);
    if ( v13 )
      v14 = *(const wchar_t **)(v13 + 288);
    else
      v14 = (const wchar_t *)*((_QWORD *)v6 + 6);
    WPP_RECORDER_AND_TRACE_SF_qqDdS(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v9,
      v10,
      v40,
      v41,
      v42,
      v43,
      *((_QWORD *)v6 + 3),
      v13,
      v6[8],
      v6[4],
      v14);
  }
  v15 = v6[4];
  if ( v15 - 2 <= 2 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&Object);
    if ( !RIMApiSetIsRemoteConnection(v34, v33, v35, v36) || isChildPartition() )
    {
      RIMLockExclusive((__int64)(v3 + 13));
      if ( !*((_BYTE *)v3 + 80) && !*((_BYTE *)v3 + 81) )
      {
        v37 = v6[4];
        if ( v37 == 2 )
        {
          RIMVirtDeviceClassNotifyAsyncWorkItem(v6);
        }
        else if ( v37 == 3 )
        {
          RIMVirtDeviceNotifyAsyncWorkItem(v6);
        }
        else
        {
          RIMVirtDeviceRootPnpEndSyncAsyncWorkItem(v6);
        }
      }
    }
    if ( (_BYTE)Object )
      goto LABEL_79;
    goto LABEL_78;
  }
  if ( v15 <= 1 )
  {
    v2 = RIMDoAsyncPnpWorkItem((__int64)v3, (__int64)v6);
  }
  else if ( v15 - 5 <= 4 )
  {
    v16 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v8, v9, v10);
    gptiCurrent = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 387) = 1;
      if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v18) )
      {
        while ( 1 )
        {
          v21 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v22 = *v21;
          v21[2] = 0LL;
          if ( !*(_DWORD *)(v22 + 8) )
          {
            LODWORD(Object) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          }
          HMUnlockObject(*v21);
        }
      }
    }
    if ( RIMApiSetIsRemoteConnection(v18, v17, v19, v20) )
    {
      v29 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v23) = 0;
      }
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v23,
          v24,
          (_DWORD)gRimLog,
          3,
          1,
          73,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      v2 = 0;
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 13));
      if ( *((_BYTE *)v3 + 80) || *((_BYTE *)v3 + 81) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v26,
            v27,
            (_DWORD)gRimLog,
            3,
            1,
            72,
            (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
            (char)v3);
        }
      }
      else
      {
        v28 = v6[4];
        switch ( v28 )
        {
          case 5:
            if ( !v6[32] )
              rimDoRimDevChangeAsyncWorkItem((__int64)v6);
            break;
          case 6:
            ApiSetProcessHidRawInput(
              (*((_QWORD *)v6 + 7) + 72LL) & -(__int64)(*((_QWORD *)v6 + 7) != 0LL),
              *((_QWORD *)v6 + 15),
              v6[29]);
            break;
          case 7:
            v30 = *((_QWORD *)v6 + 7);
            v31 = v30 + 544;
            if ( !v30 )
              v31 = 472LL;
            v32 = *(_QWORD *)v31;
            if ( v6[28] )
              ApiSetPostPointerDeviceInRangeMessage(v32);
            else
              ApiSetPostPointerDeviceOutOfRangeMessage(v32);
            break;
          case 8:
            rimDoUpdateInputGlobalsWorkItem(v6);
            break;
          case 9:
            rimDoHandleAnyPnpRemovePendingDevicesWorkItem(v6);
            break;
        }
      }
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v3 + 13));
    }
LABEL_78:
    UserSessionSwitchLeaveCrit((__int64)v29, v23, v24, v25);
  }
LABEL_79:
  RIMFreeAsyncPnpWorkItem(v6);
  ObfDereferenceObject(v3);
LABEL_82:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v38 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v38 = 0;
  }
  if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v44) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v38,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x4Au,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v44);
  }
  return (unsigned int)v2;
}
