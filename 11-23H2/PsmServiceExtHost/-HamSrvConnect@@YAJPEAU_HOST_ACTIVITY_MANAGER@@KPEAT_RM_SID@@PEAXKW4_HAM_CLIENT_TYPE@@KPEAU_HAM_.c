/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004C4B8
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x180004B10 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x180041CA0 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180042630 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180042BA0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectSessionState @ 0x180042CD0 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectServicing @ 0x180042DD0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectFullTrust @ 0x180074E40 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x180001500 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@_ea_180001500.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180027D5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientAreArgumentsValidForType@@YAKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004DB4C (-HampClientAreArgumentsValidForType@@YAKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_CLIENT_CONNECTION_PARAMETE.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DCE8 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 */

__int64 __fastcall HamSrvConnect(
        const unsigned __int16 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        const unsigned __int16 **a10,
        __int64 a11)
{
  int **v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r14
  const unsigned __int16 *v14; // r12
  int v15; // r15d
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE v21[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-9Ch] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  const unsigned __int16 *v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  int *v28; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v29[144]; // [rsp+B0h] [rbp-50h] BYREF

  v11 = (int **)a10;
  v25 = a4;
  v24 = a3;
  v22 = a2;
  v26 = a1;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)&dword_1800DB218,
      (int)&unk_1800C189B);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !a6 )
    v14 = *a10;
  LOBYTE(v12) = a6;
  if ( (unsigned int)HampClientAreArgumentsValidForType(v12, a7, a10) )
  {
    if ( a6 == 6 && !a10 )
    {
      v23 = 15;
      v28 = &v23;
      v11 = &v28;
    }
    v16 = HampClientCreate(v26, v22, v24, v25, a5, a6, a7, 0LL, 0LL, v11, a11);
    if ( v16 >= 0 )
    {
      if ( !a6 )
        v15 = *((_DWORD *)v11 + 4);
      v16 = 0;
      v13 = *(_QWORD *)(*(_QWORD *)a11 + 152LL);
    }
  }
  else
  {
    v16 = -1073741583;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    LODWORD(v24) = v16;
    LODWORD(v25) = v15;
    v26 = v14;
    v27 = v13;
    v21[0] = a6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (int)&unk_1800C0575,
      v18,
      v19,
      (__int64)&v22,
      (__int64)v21,
      (__int64)&v27,
      &v26,
      (__int64)&v25,
      (__int64)&v24);
  }
  return (unsigned int)v16;
}
