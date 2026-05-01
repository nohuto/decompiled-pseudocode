/*
 * XREFs of ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x1800735C4
 * Callers:
 *     ?HampInProcResetExternalResourcePriority@@YAJPEAX_KE@Z @ 0x18004AF60 (-HampInProcResetExternalResourcePriority@@YAJPEAX_KE@Z.c)
 *     HamRpcSrvResetExternalResourcePriority @ 0x18007B160 (HamRpcSrvResetExternalResourcePriority.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003DBDC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E240 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x18007BD68 (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 */

__int64 __fastcall HamSrvResetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  struct _HAM_ACTIVITY *v8; // rax
  struct _HAM_ACTIVITY *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v13[4]; // [rsp+40h] [rbp-E8h] BYREF
  int v14; // [rsp+44h] [rbp-E4h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v16[144]; // [rsp+50h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C0827,
      0LL,
      0LL,
      2u,
      &v17);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  if ( a3 < 3u || a3 > 0x30u )
  {
    v7 = -1073741583;
  }
  else if ( HampClientIsActive(a1, v6) )
  {
    v8 = HampActFindForClient(a1, a2);
    v9 = v8;
    if ( v8 )
    {
      v7 = HampActResetExternalResourcePriority(v8, a3);
      if ( v7 >= 0 )
        v7 = 0;
      CemRcObjectDereference(v9);
    }
    else
    {
      v7 = -1073741275;
    }
  }
  else
  {
    v7 = -1073741661;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v13[0] = a3;
    v15 = a2;
    v14 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800DB218,
      byte_1800C0E37,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)v13);
  }
  return (unsigned int)v7;
}
