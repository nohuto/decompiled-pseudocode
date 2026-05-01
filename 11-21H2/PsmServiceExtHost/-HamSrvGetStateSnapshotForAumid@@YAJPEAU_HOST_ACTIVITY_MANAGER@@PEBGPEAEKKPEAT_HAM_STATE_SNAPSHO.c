/*
 * XREFs of ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18002D468
 * Callers:
 *     HamRpcSrvGetStateSnapshotForAumid @ 0x18002E290 (HamRpcSrvGetStateSnapshotForAumid.c)
 * Callees:
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180001A44 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x180006328 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180006328.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180006DA4 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180009660 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetStateSnapshotForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        PCWSTR applicationUserModelId,
        PSID SourceSid,
        __int64 a4,
        unsigned int a5,
        union _HAM_STATE_SNAPSHOT *a6)
{
  char StateSnapshot; // bl
  unsigned int v7; // edi
  int v11; // edi
  struct _HAM_PACKAGE *v12; // rax
  struct _HAM_PACKAGE *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[3]; // [rsp+51h] [rbp-AFh] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-ACh] BYREF
  UINT32 packageFamilyNameLength; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  int v25; // [rsp+60h] [rbp-A0h] BYREF
  PSID v26; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28[26]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+200h] [rbp+100h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+290h] [rbp+190h] BYREF

  StateSnapshot = 0;
  v7 = a4;
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, SourceSid, a4) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF987,
      0LL,
      0LL,
      2u,
      &v30);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         applicationUserModelId,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v11 = -1073741585;
  }
  else
  {
    v11 = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, SourceSid, v7, a5, (__int64)v28);
    if ( v11 >= 0 )
    {
      v12 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v28);
      v13 = v12;
      if ( v12 )
      {
        StateSnapshot = HampPkgGetStateSnapshot(v12, packageRelativeApplicationId);
        *(_BYTE *)a6 = StateSnapshot;
        v11 = 0;
        CemRcObjectDereference(v13);
      }
      else
      {
        v11 = -1073741275;
      }
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v14, v15) )
  {
    v24 = a5;
    v26 = SourceSid;
    v20 = (StateSnapshot & 2) != 0;
    v21[0] = StateSnapshot & 1;
    v27 = applicationUserModelId;
    v25 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v16,
      (int)&unk_1800BEDC0,
      v17,
      v18,
      (__int64)&v25,
      &v27,
      (__int64 *)&v26,
      (__int64)&v24,
      (__int64)v21,
      (__int64)&v20);
  }
  return (unsigned int)v11;
}
