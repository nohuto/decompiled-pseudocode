/*
 * XREFs of ?HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18004C818
 * Callers:
 *     HamRpcSrvQueryHostStateSummary @ 0x18004D660 (HamRpcSrvQueryHostStateSummary.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013F28 (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180027D5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18004BDDC (-HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x180071278 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall HamSrvQueryHostStateSummary(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_HOST_STATE_SUMMARY *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int Host; // ebx
  int v10; // r8d
  int v11; // r9d
  struct _RM_HAM_ACTIVITY_HOST *v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[144]; // [rsp+70h] [rbp-90h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)&dword_1800DB218,
      (int)&unk_1800C18B6);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v6 = *((unsigned __int8 *)a1 + 164);
  v7 = *((_QWORD *)a1 + 4);
  LOBYTE(v8) = 2;
  v13 = 0LL;
  Host = RmHamFindHost((v7 & 0xFFFFFFFFFFFFFFFCuLL) - 48 * v6 - 16, a2, v8, &v13);
  if ( Host >= 0 )
  {
    HampHostGetStateSummary(v13, a3);
    Host = 0;
  }
  if ( v13 )
    RmHamHostDereference(v13);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v16 = *(_QWORD *)a3;
    v14 = *((_DWORD *)a3 + 3);
    v15 = *((_DWORD *)a3 + 2);
    v17 = a2;
    LODWORD(v13) = Host;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800DB218,
      (unsigned int)&unk_1800C1456,
      v10,
      v11,
      (__int64)&v13,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v16);
  }
  return (unsigned int)Host;
}
