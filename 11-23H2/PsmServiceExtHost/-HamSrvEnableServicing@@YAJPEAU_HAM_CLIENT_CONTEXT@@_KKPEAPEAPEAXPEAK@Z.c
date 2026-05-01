/*
 * XREFs of ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z @ 0x18004C6A0
 * Callers:
 *     HamRpcSrvServicingEnableServicing @ 0x1800143F0 (HamRpcSrvServicingEnableServicing.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180027D5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036230 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180036C28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x18004EC38 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 */

__int64 __fastcall HamSrvEnableServicing(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  int v9; // ebx
  int v10; // ebx
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp-F8h] BYREF
  int v17; // [rsp+44h] [rbp-F4h] BYREF
  int v18; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v20[144]; // [rsp+60h] [rbp-D8h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)&dword_1800DB218,
      (int)&unk_1800C0462);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  v9 = a3 & 1;
  if ( v9 == a3 )
  {
    v11 = HampClientPkgFindByPackageHandle(a1, a2);
    if ( v11 )
    {
      v10 = HampClientPkgEnableServicing(
              v11,
              a1,
              (void ***)(a4 & -(__int64)(v9 != 0)),
              (unsigned int *)((unsigned __int64)a5 & -(__int64)(v9 != 0)));
      if ( v10 >= 0 )
        v10 = 0;
      CemRcObjectDereference(v11);
    }
    else
    {
      v10 = -1073741275;
    }
  }
  else
  {
    v10 = -1073741583;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v17 = *a5;
    v16 = a3;
    v19 = a2;
    v18 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_1800C10B6,
      v13,
      v14,
      (__int64)&v18,
      (__int64)&v19,
      (__int64)&v17,
      (__int64)&v16);
  }
  return (unsigned int)v10;
}
