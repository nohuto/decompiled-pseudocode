/*
 * XREFs of ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180070BF0
 * Callers:
 *     HamRpcSrvDebugQueryPackageState @ 0x180073820 (HamRpcSrvDebugQueryPackageState.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180044C94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800788BC (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800789A8 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078BEC (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HamSrvQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  int v3; // edi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v7; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[4]; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-F4h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v17[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+E0h] [rbp-58h] BYREF

  LOBYTE(v3) = 4;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BEF3B,
      0LL,
      0LL,
      2u,
      &v18);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v7 = HampClientPkgFindByPackageHandle(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    v10 = *((_QWORD *)v7 + 7);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v10);
    v3 = (*(_DWORD *)(v10 + 344) >> 5) & 7;
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v10);
    v9 = 0;
    *(_DWORD *)a3 = v3;
    CemRcObjectDereference(v8);
  }
  else
  {
    v9 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v14[0] = v3;
    v16 = a2;
    v15 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800DC218,
      byte_1800BF8FB,
      v11,
      v12,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)v14);
  }
  return v9;
}
