/*
 * XREFs of ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180074018
 * Callers:
 *     ?HampInProcTerminateHostOnProcessExit@@YAJPEAX_K10W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18004AF30 (-HampInProcTerminateHostOnProcessExit@@YAJPEAX_K10W4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     HamRpcSrvTerminateHostOnProcessExit @ 0x18007AE50 (HamRpcSrvTerminateHostOnProcessExit.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C820 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A204 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4344@Z @ 0x18007131C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007C5F4 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 */

__int64 __fastcall HamSrvTerminateHostOnProcessExit(__int64 a1, __int64 a2, __int64 a3, void *a4, int a5, char a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r15
  int Host; // eax
  __int64 v14; // rsi
  int ProcessFullIdentity; // ebx
  int v16; // eax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rdi
  bool v18; // zf
  DWORD ProcessId; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+28h] [rbp-D8h]
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v31[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+110h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C088E,
      0LL,
      0LL,
      2u,
      &v32);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v31);
  v10 = *(unsigned __int8 *)(a1 + 164);
  v11 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  v27 = 0LL;
  v26 = 0LL;
  v12 = 0LL;
  v28 = 0LL;
  Host = RmHamFindHost(v11 - 48 * v10 - 16, a2, 0LL, &v26);
  v14 = v26;
  ProcessFullIdentity = Host;
  if ( Host >= 0 )
  {
    ProcessFullIdentity = HampSystemGetProcessFullIdentity(a4, &v25, 0LL);
    if ( ProcessFullIdentity >= 0 )
    {
      ProcessFullIdentity = 0;
      if ( v25 )
      {
        v16 = HampHostFindByProcessHandle(
                (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) - 16,
                a4,
                0LL,
                (struct _RM_HAM_ACTIVITY_HOST **)&v27,
                &v28);
        v17 = (struct _RM_HAM_ACTIVITY_HOST *)v27;
        ProcessFullIdentity = v16;
        v12 = v28;
        if ( v16 >= 0 )
        {
          LOBYTE(v24) = a6;
          ProcessFullIdentity = HampDepGroupAddTerminateDependency(v14, a3, v27, v28, a5, v24);
          if ( ProcessFullIdentity >= 0 )
            ProcessFullIdentity = 0;
        }
        if ( v17 )
        {
          RmpAcquireGlobalLock();
          v18 = (*((_QWORD *)v17 + 75))-- == 1LL;
          if ( v18 )
            RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v17 - 64) & -(__int64)(v17 != 0LL)));
          RmpReleaseGlobalLock();
        }
      }
    }
  }
  if ( v14 )
  {
    RmpAcquireGlobalLock();
    v18 = (*(_QWORD *)(v14 + 600))-- == 1LL;
    if ( v18 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v14 - 64) & -(__int64)(v14 != 0)));
    RmpReleaseGlobalLock();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v27 = -1LL;
    v28 = v12;
    ProcessId = GetProcessId(a4);
    v29 = a3;
    v25 = ProcessId;
    v30 = a2;
    LODWORD(v26) = ProcessFullIdentity;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v20,
      byte_1800C0C80,
      v21,
      v22,
      (__int64)&v26,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v25,
      (__int64)&v27,
      (__int64)&v28);
  }
  return (unsigned int)ProcessFullIdentity;
}
