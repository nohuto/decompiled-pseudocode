/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002E148
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x1800323F0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvDisconnectServicing @ 0x18003ECC0 (HamRpcSrvDisconnectServicing.c)
 *     HamRpcSrvConnect @ 0x1800426E0 (HamRpcSrvConnect.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180044DB0 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180046620 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180046DB0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x180046ED0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180046FD0 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x1800733D0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005798 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18003E4EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  int v2; // edi
  char v3; // si
  int v4; // ebp
  int v5; // r8d
  int v6; // r9d
  _BYTE v7[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v8; // [rsp+44h] [rbp-D4h] BYREF
  int v9; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v10[144]; // [rsp+50h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+E0h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF7F6,
      0LL,
      0LL,
      2u,
      &v11);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  v2 = *((_DWORD *)a1 + 35);
  v3 = *((_BYTE *)a1 + 136);
  v4 = *((_DWORD *)a1 + 37);
  HampClientDestroy(a1);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
    {
      v8 = v4;
      v7[0] = v3;
      v9 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800DC218,
        (unsigned int)&unk_1800BEC79,
        v5,
        v6,
        (__int64)&v9,
        (__int64)v7,
        (__int64)&v8);
    }
  }
}
