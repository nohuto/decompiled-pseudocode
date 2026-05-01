/*
 * XREFs of ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x180036418
 * Callers:
 *     HamRpcSrvGetStateSnapshotForAumid @ 0x180036840 (HamRpcSrvGetStateSnapshotForAumid.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180035DFC (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x18003662C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWrapperByVa.c)
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180037D5C (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetStateSnapshotForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        PCWSTR applicationUserModelId,
        PSID SourceSid,
        unsigned int a4,
        unsigned int a5,
        union _HAM_STATE_SNAPSHOT *a6)
{
  int v10; // edi
  struct _HAM_PACKAGE *v11; // rax
  struct _HAM_PACKAGE *v12; // rsi
  __int64 v13; // rcx
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-ACh] BYREF
  UINT32 packageFamilyNameLength[4]; // [rsp+58h] [rbp-A8h] BYREF
  PSID v17; // [rsp+68h] [rbp-98h]
  PCWSTR v18; // [rsp+70h] [rbp-90h]
  wchar_t v19[104]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v20[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+200h] [rbp+100h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+290h] [rbp+190h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C181A,
      0LL,
      0LL,
      2u,
      &v21);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  packageFamilyNameLength[0] = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         applicationUserModelId,
         packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v10 = -1073741585;
  }
  else
  {
    v10 = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, SourceSid, a4, a5, (__int64)v19);
    if ( v10 >= 0 )
    {
      v11 = HampPkgFindInManager(a1, v19);
      v12 = v11;
      if ( v11 )
      {
        *(_BYTE *)a6 = HampPkgGetStateSnapshot(v11, packageRelativeApplicationId);
        v10 = 0;
        CemRcObjectDereference(v12);
      }
      else
      {
        v10 = -1073741275;
      }
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    packageFamilyNameLength[1] = a5;
    v17 = SourceSid;
    v18 = applicationUserModelId;
    packageFamilyNameLength[2] = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v13,
      &unk_1800C0C2C);
  }
  return (unsigned int)v10;
}
