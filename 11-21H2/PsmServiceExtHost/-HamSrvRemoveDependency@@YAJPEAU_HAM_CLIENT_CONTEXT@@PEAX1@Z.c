/*
 * XREFs of ?HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x1800711A4
 * Callers:
 *     HamRpcSrvRemoveDependency @ 0x180073780 (HamRpcSrvRemoveDependency.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18006C9CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x1800760A0 (-HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 */

__int64 __fastcall HamSrvRemoveDependency(struct _HOST_ACTIVITY_MANAGER **a1, void *a2, void *a3)
{
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  DWORD ProcessId; // [rsp+40h] [rbp-F8h] BYREF
  DWORD v11; // [rsp+44h] [rbp-F4h] BYREF
  int v12; // [rsp+48h] [rbp-F0h] BYREF
  int v13; // [rsp+4Ch] [rbp-ECh] BYREF
  _BYTE v14[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+E0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BECE6,
      0LL,
      0LL,
      2u,
      &v15);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v6 = HampDepGroupRemoveProcessDependency(*a1, a2, a3);
  if ( v6 >= 0 )
    v6 = 0;
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    ProcessId = GetProcessId(a3);
    v13 = v6;
    v11 = GetProcessId(a2);
    v12 = *((_DWORD *)a1 + 35);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DC218,
      byte_1800BFC17,
      v7,
      v8,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&ProcessId);
  }
  return (unsigned int)v6;
}
