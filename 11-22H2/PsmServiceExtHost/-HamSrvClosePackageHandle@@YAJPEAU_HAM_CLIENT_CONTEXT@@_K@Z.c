/*
 * XREFs of ?HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036AD8
 * Callers:
 *     HamRpcSrvDebugClosePackageHandle @ 0x1800371B0 (HamRpcSrvDebugClosePackageHandle.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036260 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180036C08 (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvClosePackageHandle(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v4; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rdi
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1A71,
      0LL,
      0LL,
      2u,
      &v13);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = HampClientPkgFindByPackageHandle(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = HampClientPkgClose(v4);
    if ( v6 >= 0 )
      v6 = 0;
    CemRcObjectDereference(v5);
  }
  else
  {
    v6 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v11 = a2;
    v10 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800DB218,
      byte_1800C12DD,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v11);
  }
  return (unsigned int)v6;
}
