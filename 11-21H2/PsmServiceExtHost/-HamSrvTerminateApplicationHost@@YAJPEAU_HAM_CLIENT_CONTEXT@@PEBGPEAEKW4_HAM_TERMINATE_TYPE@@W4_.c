/*
 * XREFs of ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180071BAC
 * Callers:
 *     HamRpcSrvTerminateApplicationHost @ 0x180073660 (HamRpcSrvTerminateApplicationHost.c)
 * Callees:
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18000551C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180006FA8 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007348 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180044600 (-HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180045DE8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180045DE8.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HamSrvTerminateApplicationHost(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7)
{
  const unsigned __int16 *v9; // rsi
  char *v11; // r15
  int v12; // ebx
  struct _HAM_APPLICATION *v13; // rax
  struct _HAM_APPLICATION *v14; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v15; // rax
  __int64 v16; // rdi
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  const unsigned __int16 *v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  char *v28; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[144]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[464]; // [rsp+110h] [rbp+10h] BYREF
  char v32; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+330h] [rbp+230h] BYREF

  v26 = a2;
  v9 = a2;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BEFC4,
      0LL,
      0LL,
      2u,
      &v33);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  v11 = (char *)(*(_QWORD *)a1 + 908LL);
  v12 = HampAppInfoValidateAndCapture(v9, a3, a4, *(_DWORD *)(a1 + 144), (struct _HAM_APPLICATION_INFO *)v31);
  if ( v12 >= 0 )
  {
    v11 = &v32;
    if ( !HamSrvAreTerminateParametersValid(a5, a6, a7) )
    {
      v12 = -1073741811;
      goto LABEL_24;
    }
    v13 = HampAppFind(*(struct _HOST_ACTIVITY_MANAGER **)a1, (struct _HAM_APPLICATION_INFO *)v31);
    v14 = v13;
    if ( !v13 )
    {
      v12 = -1073741275;
LABEL_23:
      v9 = v26;
      goto LABEL_24;
    }
    v15 = HampAppTryReferenceMixedHost(v13);
    v16 = (__int64)v15;
    if ( !v15 )
    {
      v12 = -1073741275;
LABEL_22:
      CemRcObjectDereference(v14);
      goto LABEL_23;
    }
    HampHostAcquireLockExclusiveEx(v15, 0);
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v16);
    if ( FirstActivity )
    {
      v18 = *(_QWORD *)(v16 + 816);
      while ( *((_QWORD *)FirstActivity + 64) != v18
           || *((_BYTE *)FirstActivity + 562) == 4
           || (*((_DWORD *)FirstActivity + 28) & 0x10000) == 0 )
      {
        FirstActivity = HampHostGetNextActivity(FirstActivity);
        if ( !FirstActivity )
          goto LABEL_17;
      }
      v12 = HampHostQueueTerminateEx(v16, a5, a6, a1, 1, 0, a7, &v25);
      if ( v12 >= 0 )
      {
        HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v16);
        if ( v25 )
          HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v16 + 704));
        v12 = 0;
        goto LABEL_19;
      }
    }
    else
    {
LABEL_17:
      v12 = -1073741275;
    }
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v16);
LABEL_19:
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v16 + 600))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v16 - 64));
    RmpReleaseGlobalLock();
    goto LABEL_22;
  }
LABEL_24:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v27 = *(_DWORD *)(a1 + 144);
    v25 = a6;
    v24[0] = a5;
    v28 = v11;
    v29 = v9;
    LODWORD(v26) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v20,
      byte_1800BE9F5,
      v21,
      v22,
      (__int64)&v26,
      &v29,
      (__int64 *)&v28,
      (__int64)&v27,
      (__int64)v24,
      (__int64)&v25);
  }
  return (unsigned int)v12;
}
