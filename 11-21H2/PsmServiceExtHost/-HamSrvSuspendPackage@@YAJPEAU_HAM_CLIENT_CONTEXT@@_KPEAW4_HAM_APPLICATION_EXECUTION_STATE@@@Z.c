/*
 * XREFs of ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800718AC
 * Callers:
 *     HamRpcSrvDebugSuspendPackage @ 0x180073830 (HamRpcSrvDebugSuspendPackage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800788BC (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180078C24 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 */

__int64 __fastcall HamSrvSuspendPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v6; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v7; // rdi
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF532,
      0LL,
      0LL,
      2u,
      &v15);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v6 = HampClientPkgFindByPackageHandle(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    v8 = HampPkgSuspend(*((struct _HAM_PACKAGE **)v6 + 7), a1, (enum _HAM_APPLICATION_EXECUTION_STATE *)&v12);
    if ( v8 >= 0 )
    {
      v8 = 0;
      *(_DWORD *)a3 = v12;
    }
    CemRcObjectDereference(v7);
  }
  else
  {
    v8 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v13 = a2;
    v12 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1800DC218,
      (int)&unk_1800BE89E,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v13);
  }
  return (unsigned int)v8;
}
