/*
 * XREFs of ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800728A4
 * Callers:
 *     HamRpcSrvTerminateSelfOnRequiredProcessExit @ 0x1800737D0 (HamRpcSrvTerminateSelfOnRequiredProcessExit.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
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

__int64 __fastcall HamSrvTerminateSelfOnProcessExit(__int64 *a1, void *a2, int a3, char a4)
{
  void *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  int v11; // eax
  struct _RM_HAM_ACTIVITY_HOST *v12; // rdi
  int v13; // esi
  __int64 v14; // rcx
  int v15; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rbx
  bool v17; // zf
  DWORD ProcessId; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+28h] [rbp-D8h]
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  unsigned __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v32[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+120h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BE82B,
      0LL,
      0LL,
      2u,
      &v33);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  v8 = (void *)a1[21];
  v9 = *a1;
  v27 = -1LL;
  v29 = -1LL;
  v10 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v11 = HampHostFindByProcessHandle(v9, v8, 0, &v25, &v28);
  v12 = v25;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v14 = *a1;
    v29 = *((_QWORD *)v25 - 4);
    v15 = HampHostFindByProcessHandle(v14, a2, 0, &v24, &v26);
    v16 = v24;
    v13 = v15;
    v10 = v26;
    if ( v15 >= 0 )
    {
      LOBYTE(v23) = a4;
      v27 = *((_QWORD *)v24 - 4);
      v13 = HampDepGroupAddTerminateDependency(v12, v28, v24, v26, a3, v23);
      if ( v13 >= 0 )
        v13 = 0;
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
  if ( v12 )
  {
    RmpAcquireGlobalLock();
    v17 = (*((_QWORD *)v12 + 75))-- == 1LL;
    if ( v17 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v12 - 64));
    RmpReleaseGlobalLock();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v26 = v10;
    ProcessId = GetProcessId(a2);
    LODWORD(v25) = v13;
    LODWORD(v24) = ProcessId;
    v30 = v28;
    v31 = v29;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v19,
      byte_1800BEB69,
      v20,
      v21,
      (__int64)&v25,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v24,
      (__int64)&v27,
      (__int64)&v26);
  }
  return (unsigned int)v13;
}
