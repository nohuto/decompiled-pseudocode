/*
 * XREFs of ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180073B3C
 * Callers:
 *     ?HampInProcTerminateApplicationHost@@YAJPEAXPEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x18004AF20 (-HampInProcTerminateApplicationHost@@YAJPEAXPEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REA.c)
 *     HamRpcSrvTerminateApplicationHost @ 0x18007AE40 (HamRpcSrvTerminateApplicationHost.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D510 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035A78 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18003600C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180037FE4 (-HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180055256 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180055256.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F428 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 */

__int64 __fastcall HamSrvTerminateApplicationHost(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7)
{
  int v10; // r12d
  struct _HAM_APPLICATION *v11; // r14
  __int64 v12; // rbx
  char *v13; // r13
  int v14; // edi
  unsigned int v15; // ebx
  struct _HAM_APPLICATION *v16; // rax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE v26[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int16 *v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  char *v30; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v31; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[144]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v33[464]; // [rsp+110h] [rbp+10h] BYREF
  char v34; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+330h] [rbp+230h] BYREF

  v28 = a2;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C0DEE,
      0LL,
      0LL,
      2u,
      &v35);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = (char *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) + 1196);
  v14 = HampAppInfoValidateAndCapture(v28, a3, a4, *(_DWORD *)(a1 + 168), (struct _HAM_APPLICATION_INFO *)v33);
  if ( v14 < 0 )
    goto LABEL_22;
  v13 = &v34;
  v15 = a6;
  if ( HamSrvAreTerminateParametersValid(a5, a6, a7) )
  {
    v16 = HampAppFind(
            (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *(unsigned __int8 *)(a1 + 164)
                                            - 16),
            (struct _HAM_APPLICATION_INFO *)v33);
    v11 = v16;
    if ( !v16 )
    {
      v14 = -1073741275;
      goto LABEL_31;
    }
    v17 = HampAppTryReferenceMixedHost(v16);
    v12 = (__int64)v17;
    if ( !v17 )
    {
      v14 = -1073741275;
      goto LABEL_29;
    }
    v10 = 1;
    HampHostAcquireLockExclusiveEx(v17, 0);
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v12);
    if ( !FirstActivity )
    {
LABEL_17:
      v14 = -1073741275;
      v20 = v12;
LABEL_23:
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v12);
LABEL_24:
      if ( !v12 )
        goto LABEL_28;
      goto LABEL_25;
    }
    v19 = *(_QWORD *)(v12 + 816);
    while ( *((_QWORD *)FirstActivity + 64) != v19
         || *((_BYTE *)FirstActivity + 562) == 4
         || (*((_DWORD *)FirstActivity + 28) & 0x10000) == 0 )
    {
      FirstActivity = HampHostGetNextActivity(FirstActivity);
      if ( !FirstActivity )
        goto LABEL_17;
    }
    v14 = HampHostQueueTerminateEx(v12, a5, a6, (struct _HAM_CLIENT_CONTEXT *)a1, 1, 0, a7, &v27);
    if ( v14 >= 0 )
    {
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v12);
      if ( v27 )
        HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v12 + 704));
      v14 = 0;
      v20 = v12;
LABEL_25:
      RmpAcquireGlobalLock();
      if ( (*(_QWORD *)(v12 + 600))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v20 - 64) & -(__int64)(v12 != 0)));
      RmpReleaseGlobalLock();
LABEL_28:
      if ( !v11 )
      {
LABEL_30:
        v15 = a6;
        goto LABEL_31;
      }
LABEL_29:
      CemRcObjectDereference(v11);
      goto LABEL_30;
    }
LABEL_22:
    v20 = v12;
    if ( !v10 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v14 = -1073741811;
LABEL_31:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v26[0] = a5;
    v29 = *(_DWORD *)(a1 + 168);
    v31 = v28;
    v27 = v15;
    v30 = v13;
    LODWORD(v28) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v22,
      byte_1800C08E0,
      v23,
      v24,
      (__int64)&v28,
      (const unsigned __int16 **)&v31,
      (__int64 *)&v30,
      (__int64)&v29,
      (__int64)v26,
      (__int64)&v27);
  }
  return (unsigned int)v14;
}
