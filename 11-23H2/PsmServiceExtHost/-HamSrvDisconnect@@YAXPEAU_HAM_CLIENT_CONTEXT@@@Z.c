/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012B04
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x180004B10 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvDisconnectServicing @ 0x180012AE0 (HamRpcSrvDisconnectServicing.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180040A30 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnect @ 0x180041CA0 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180042630 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180042BA0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectSessionState @ 0x180042CD0 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectServicing @ 0x180042DD0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectFullTrust @ 0x180074E40 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001434 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapS.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DE7C (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E100 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800748BC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  unsigned int Pid; // eax
  char v3; // si
  __int64 v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 *v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v15[64]; // [rsp+110h] [rbp+10h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C1635, 0, 0, 2u, &v14);
  Pid = HampClientGetPid(a1);
  v3 = *((_BYTE *)a1 + 164);
  v4 = *((_QWORD *)a1 + 19);
  v5 = Pid;
  RtlStringCchCopyW(v15, 0x40uLL, (const unsigned __int16 *)a1 + 110);
  HampClientDisconnect(a1);
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    v12 = v4;
    v11 = v15;
    v9[0] = v3;
    v10 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v6,
      (int)&unk_1800C0B17,
      v7,
      v8,
      (__int64)&v10,
      (__int64)v9,
      (__int64)&v12,
      (const unsigned __int16 **)&v11);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
