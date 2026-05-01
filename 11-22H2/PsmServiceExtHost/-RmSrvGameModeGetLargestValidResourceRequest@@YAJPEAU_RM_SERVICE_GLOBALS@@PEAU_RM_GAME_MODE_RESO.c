/*
 * XREFs of ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1800840B0
 * Callers:
 *     RmGameModeSrvGetLargestValidResourceRequest @ 0x180085C70 (RmGameModeSrvGetLargestValidResourceRequest.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003E578 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1800834D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x180086A44 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 */

__int64 __fastcall RmSrvGameModeGetLargestValidResourceRequest(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12; // [rsp+5Ch] [rbp-A4h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v14; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v16[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+100h] [rbp+0h] BYREF

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v14, (struct _CEM_LOCK_TRACKER *)v16);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C3EC5,
      0LL,
      0LL,
      2u,
      &v17);
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *(_DWORD *)a2 = 6;
  *((_DWORD *)a2 + 4) = 10;
  *((_DWORD *)a2 + 5) = 50;
  *((_DWORD *)a2 + 6) = 30;
  RmpAcquireGlobalLock();
  RmpCpuSetManagerGetGameModeRequestLimits(
    (struct _RM_SERVICE_GLOBALS *)((char *)v2 + 680),
    0,
    (unsigned int *)a2 + 1,
    (unsigned __int64 *)a2 + 1);
  RmpReleaseGlobalLock();
  *((_DWORD *)a2 + 4) = 10;
  *((_DWORD *)a2 + 5) = 70;
  *((_DWORD *)a2 + 6) = 30;
  *((_BYTE *)a2 + 36) = 3;
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v7 = *((_QWORD *)a2 + 1);
    v13 = 0;
    v15 = v7;
    v12 = *((_DWORD *)a2 + 1);
    v9 = 30;
    v10 = v5;
    v11 = 10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_1800C3C24,
      v5,
      v6,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v15,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  if ( v14 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
