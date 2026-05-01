/*
 * XREFs of ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180072020
 * Callers:
 *     HamRpcSrvTerminateHostOnProcessExit @ 0x180073670 (HamRpcSrvTerminateHostOnProcessExit.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800045C4 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000A610 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004650C (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4344@Z @ 0x18006EDA4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180074744 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 */

__int64 __fastcall HamSrvTerminateHostOnProcessExit(__int64 *a1, __int64 a2, __int64 a3, void *a4, int a5, char a6)
{
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  int Host; // eax
  __int64 v13; // rsi
  int ProcessFullIdentity; // ebx
  int v15; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rdi
  bool v17; // zf
  DWORD ProcessId; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+28h] [rbp-D8h]
  unsigned int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+110h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BE9A3,
      0LL,
      0LL,
      2u,
      &v31);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  v10 = *a1;
  v26 = 0LL;
  v25 = 0LL;
  v11 = 0LL;
  v27 = 0LL;
  Host = RmHamFindHost(v10, a2, 0LL, &v25);
  v13 = v25;
  ProcessFullIdentity = Host;
  if ( Host >= 0 )
  {
    ProcessFullIdentity = HampSystemGetProcessFullIdentity(a4, &v24, 0LL);
    if ( ProcessFullIdentity >= 0 )
    {
      ProcessFullIdentity = 0;
      if ( v24 )
      {
        v15 = HampHostFindByProcessHandle(*a1, a4, 0, (struct _RM_HAM_ACTIVITY_HOST **)&v26, &v27);
        v16 = (struct _RM_HAM_ACTIVITY_HOST *)v26;
        ProcessFullIdentity = v15;
        v11 = v27;
        if ( v15 >= 0 )
        {
          LOBYTE(v23) = a6;
          ProcessFullIdentity = HampDepGroupAddTerminateDependency(v13, a3, v26, v27, a5, v23);
          if ( ProcessFullIdentity >= 0 )
            ProcessFullIdentity = 0;
        }
        if ( v16 )
        {
          RmpAcquireGlobalLock();
          v17 = (*((_QWORD *)v16 + 75))-- == 1LL;
          if ( v17 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v16 - 64));
          RmpReleaseGlobalLock();
        }
      }
    }
  }
  if ( v13 )
  {
    RmpAcquireGlobalLock();
    v17 = (*(_QWORD *)(v13 + 600))-- == 1LL;
    if ( v17 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v13 - 64));
    RmpReleaseGlobalLock();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v26 = -1LL;
    v27 = v11;
    ProcessId = GetProcessId(a4);
    v28 = a3;
    v24 = ProcessId;
    v29 = a2;
    LODWORD(v25) = ProcessFullIdentity;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v19,
      byte_1800BEE34,
      v20,
      v21,
      (__int64)&v25,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v24,
      (__int64)&v26,
      (__int64)&v27);
  }
  return (unsigned int)ProcessFullIdentity;
}
