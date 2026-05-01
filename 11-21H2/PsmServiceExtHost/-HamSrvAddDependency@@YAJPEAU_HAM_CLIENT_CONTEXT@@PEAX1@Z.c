/*
 * XREFs of ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18006F154
 * Callers:
 *     HamRpcSrvAddDependency @ 0x180073740 (HamRpcSrvAddDependency.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18006C9CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x1800744F8 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 */

void __fastcall __noreturn HamSrvAddDependency(struct _HOST_ACTIVITY_MANAGER **a1, void *a2, void *a3)
{
  _BYTE v6[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+E0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC218,
        (unsigned __int8 *)dword_1800BE306,
        0LL,
        0LL,
        2u,
        &v7);
  }
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  HampDepGroupAddProcessDependency(*a1, a2, a3);
}
