/*
 * XREFs of ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180070D48
 * Callers:
 *     HamRpcSrvQueryPackageStateSummary @ 0x1800736A0 (HamRpcSrvQueryPackageStateSummary.c)
 * Callees:
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180006DA4 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180009660 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@33@Z @ 0x18006EBF0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U1@@-$_tlgWriteTem.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800789A8 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078BEC (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HamSrvQueryPackageStateSummary(
        struct _HOST_ACTIVITY_MANAGER **a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        union _HAM_EXTERNAL_STATE_SUMMARY *a5)
{
  char *v9; // r14
  int v10; // ebx
  struct _HAM_PACKAGE *v11; // rax
  struct _HAM_PACKAGE *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  char *v20; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22[16]; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+F4h] [rbp-Ch] BYREF
  _BYTE v24[144]; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+1D0h] [rbp+D0h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF7CD,
      0LL,
      0LL,
      2u,
      &v25);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v9 = (char *)*a1 + 908;
  v10 = CempUtilValidateAndCapturePackageInfoWithFamilyName(a2, a3, a4, *((unsigned int *)a1 + 36), (__int64)v22);
  if ( v10 >= 0 )
  {
    v9 = &v23;
    v11 = HampPkgFindInManager(*a1, (struct _HAM_PACKAGE_INFO *)v22);
    v12 = v11;
    if ( v11 )
    {
      HampPkgAcquireLockShared(v11);
      *(_DWORD *)a5 = *((_DWORD *)v12 + 86);
      HampPkgReleaseLockShared(v12);
      v10 = 0;
      CemRcObjectDereference(v12);
    }
    else
    {
      v10 = -1073741275;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v17 = *(_DWORD *)a5;
    v18 = *((_DWORD *)a1 + 36);
    v20 = v9;
    v21 = a2;
    v19 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      byte_1800BEF5D,
      v14,
      v15,
      (__int64)&v19,
      (const unsigned __int16 **)&v21,
      (__int64 *)&v20,
      (__int64)&v18,
      (__int64)&v17);
  }
  return (unsigned int)v10;
}
