/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180039380
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x18000FFF4 (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampInProcStartActivityAsync@@YAJPEAX_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004AEF0 (-HampInProcStartActivityAsync@@YAJPEAX_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x18007AF50 (HamRpcSrvStartExtendedExecutionAsync.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerIsSetForThread @ 0x180010BAC (CempLockTrackerIsSetForThread.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180029F30 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  HKEY v8; // rsi
  int v9; // r14d
  int v10; // r15d
  int started; // ebx
  struct _HAM_ACTIVITY *v12; // rax
  struct _HAM_ACTIVITY *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  HKEY v20; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+100h] [rbp+0h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)&unk_1800C07BE,
      0LL,
      0LL,
      2u,
      &v24);
  v8 = 0LL;
  v20 = 0LL;
  if ( CempLockTrackerIsSetForThread() )
  {
    v9 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
    v9 = 1;
  }
  v10 = 0;
  v19 = 0;
  if ( HampClientIsActive(a1) )
  {
    if ( a4 )
    {
      started = -1073741822;
    }
    else if ( a3 > 1 )
    {
      started = -1073741583;
    }
    else
    {
      v12 = HampActFindForClient(a1, a2);
      v13 = v12;
      if ( v12 )
      {
        started = HampActStartAsync((__int64)v12, a3, &v19, &v20);
        if ( started >= 0 )
          started = 0;
        CemRcObjectDereference(v13);
        v8 = v20;
        v10 = v19;
      }
      else
      {
        started = -1073741275;
      }
    }
  }
  else
  {
    started = -1073741661;
  }
  if ( v9 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v18[0] = a3;
    v21 = v8;
    v19 = v10;
    v22 = a2;
    LODWORD(v20) = started;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v14,
      byte_1800C03AC,
      v15,
      v16,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v19,
      (__int64)&v21,
      (__int64)v18);
  }
  return (unsigned int)started;
}
