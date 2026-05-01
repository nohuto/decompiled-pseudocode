/*
 * XREFs of ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180073514
 * Callers:
 *     HamRpcSrvRetrieveDynamicIdForHostId @ 0x18007AEE0 (HamRpcSrvRetrieveDynamicIdForHostId.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800713CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWra.c)
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x18008007C (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x18009761C (CempUtilValidateAndCaptureSid.c)
 */

__int64 __fastcall HamSrvRetrieveDynamicIdForHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _GUID *a6)
{
  int v9; // ebx
  char *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  struct _GUID *v17; // [rsp+58h] [rbp-A8h] BYREF
  char *v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v20; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+160h] [rbp+60h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1850,
      0LL,
      0LL,
      2u,
      &v23);
  v20 = 0LL;
  if ( (int)CempUtilValidateAndCaptureSid(a2) >= 0 )
  {
    v10 = v21;
    v9 = HampHostIdStoreRetrieveDynamicId(
           (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800),
           (union _RM_SID *)v21,
           a4,
           a5,
           &v20);
    if ( v9 >= 0 )
    {
      v9 = 0;
      *a6 = v20;
    }
  }
  else
  {
    v9 = -1073741585;
    v10 = (char *)a1 + 1212;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v15 = a4;
    v17 = &v20;
    v18 = v10;
    v19 = a5;
    v16 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v11,
      byte_1800C09A5,
      v12,
      v13,
      (__int64)&v16,
      (__int64)&v19,
      (__int64 *)&v18,
      (__int64)&v15,
      (__int64 *)&v17);
  }
  return (unsigned int)v9;
}
