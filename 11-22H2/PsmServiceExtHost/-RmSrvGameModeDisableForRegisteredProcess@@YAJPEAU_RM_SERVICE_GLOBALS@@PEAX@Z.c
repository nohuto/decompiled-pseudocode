/*
 * XREFs of ?RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180083F80
 * Callers:
 *     RmGameModeRSrvDisableForRegisteredProcess @ 0x180085A00 (RmGameModeRSrvDisableForRegisteredProcess.c)
 *     RmGameModeSrvDisableForRegisteredProcess @ 0x180085C60 (RmGameModeSrvDisableForRegisteredProcess.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003E578 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180055166 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180088A20 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 */

__int64 __fastcall RmSrvGameModeDisableForRegisteredProcess(struct _RM_SERVICE_GLOBALS *a1, void *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  DWORD ProcessId; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+D0h] [rbp-38h] BYREF

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v10, (struct _CEM_LOCK_TRACKER *)v11);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C377C,
      0LL,
      0LL,
      2u,
      &v12);
  v4 = RmpGameModeDisableForRegisteredProcess((struct _RM_SERVICE_GLOBALS *)((char *)v2 + 2096), a2);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v9 = v4;
    ProcessId = GetProcessId(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DB1E0,
      byte_1800C3713,
      v5,
      v6,
      (__int64)&v9,
      (__int64)&ProcessId);
  }
  if ( v10 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return v4;
}
