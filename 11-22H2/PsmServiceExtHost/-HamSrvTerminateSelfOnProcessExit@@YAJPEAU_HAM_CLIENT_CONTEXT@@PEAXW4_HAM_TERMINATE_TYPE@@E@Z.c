/*
 * XREFs of ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007484C
 * Callers:
 *     HamRpcSrvTerminateSelfOnRequiredProcessExit @ 0x18007B2C0 (HamRpcSrvTerminateSelfOnRequiredProcessExit.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A284 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BDD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4344@Z @ 0x18007153C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007C934 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 */

__int64 __fastcall HamSrvTerminateSelfOnProcessExit(__int64 a1, void *a2, int a3, char a4)
{
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  int v9; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rbx
  int v11; // esi
  char *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rdi
  char *v16; // rax
  bool v17; // zf
  DWORD ProcessId; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+28h] [rbp-D8h]
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Process; // [rsp+68h] [rbp-98h] BYREF
  void *v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v32[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+120h] [rbp+20h] BYREF

  Process = a2;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C0710,
      0LL,
      0LL,
      2u,
      &v33);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  v24 = 0LL;
  v29 = -1LL;
  v25 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v7 = -1LL;
  v8 = 0LL;
  v9 = HampHostFindByClient(a1, 0, &v25, (unsigned __int64 *)&v28);
  v10 = v25;
  v11 = v9;
  v12 = 0LL;
  if ( v11 >= 0 )
  {
    if ( v25 )
      v12 = (char *)v25 - 64;
    v13 = *(_QWORD *)(a1 + 32);
    v29 = *((_QWORD *)v12 + 4);
    v14 = HampHostFindByProcessHandle(
            (v13 & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) - 16,
            Process,
            0LL,
            &v24,
            &v26);
    v15 = v24;
    v11 = v14;
    v8 = v26;
    v16 = 0LL;
    if ( v11 >= 0 )
    {
      if ( v24 )
        v16 = (char *)v24 - 64;
      v7 = *((_QWORD *)v16 + 4);
      LOBYTE(v23) = a4;
      v11 = HampDepGroupAddTerminateDependency(v10, v28, v24, v26, a3, v23);
      if ( v11 >= 0 )
        v11 = 0;
    }
    if ( v15 )
    {
      RmpAcquireGlobalLock();
      v17 = (*((_QWORD *)v15 + 75))-- == 1LL;
      if ( v17 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v15 - 64) & -(__int64)(v15 != 0LL)));
      RmpReleaseGlobalLock();
    }
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v17 = (*((_QWORD *)v10 + 75))-- == 1LL;
    if ( v17 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v10 - 64) & -(__int64)(v10 != 0LL)));
    RmpReleaseGlobalLock();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v26 = v8;
    v30 = v7;
    ProcessId = GetProcessId(Process);
    LODWORD(v25) = v11;
    LODWORD(v24) = ProcessId;
    Process = v28;
    v31 = v29;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v19,
      byte_1800C0A74,
      v20,
      v21,
      (__int64)&v25,
      (__int64)&v31,
      (__int64)&Process,
      (__int64)&v24,
      (__int64)&v30,
      (__int64)&v26);
  }
  return (unsigned int)v11;
}
