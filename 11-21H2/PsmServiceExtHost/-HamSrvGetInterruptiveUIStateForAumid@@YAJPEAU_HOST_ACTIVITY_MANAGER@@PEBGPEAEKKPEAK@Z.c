/*
 * XREFs of ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18006FCF8
 * Callers:
 *     HamRpcSrvGetInterruptiveUIStateForAumid @ 0x180073580 (HamRpcSrvGetInterruptiveUIStateForAumid.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180005C1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWrapperByVa.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180006DA4 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180009660 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x1800789E4 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 */

__int64 __fastcall HamSrvGetInterruptiveUIStateForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        PCWSTR applicationUserModelId,
        PSID SourceSid,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v6; // si
  int v11; // ebx
  struct _HAM_PACKAGE *v12; // rax
  struct _HAM_PACKAGE *v13; // rdi
  unsigned int InterruptiveUIState; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-ACh] BYREF
  UINT32 packageFamilyNameLength; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  PSID v24; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26[26]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+200h] [rbp+100h] BYREF
  WCHAR String2[72]; // [rsp+290h] [rbp+190h] BYREF

  v6 = 0;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BE57B,
      0LL,
      0LL,
      2u,
      &v28);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         applicationUserModelId,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         String2) )
  {
    v11 = -1073741585;
  }
  else
  {
    v11 = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, SourceSid, a4, a5, (__int64)v26);
    if ( v11 >= 0 )
    {
      v12 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v26);
      v13 = v12;
      if ( v12 )
      {
        InterruptiveUIState = HampPkgGetInterruptiveUIState(v12, String2);
        v6 = InterruptiveUIState;
        *a6 = InterruptiveUIState;
        v11 = 0;
        CemRcObjectDereference(v13);
      }
      else
      {
        v11 = -1073741275;
      }
    }
  }
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v19[0] = v6;
    v22 = a5;
    v24 = SourceSid;
    v25 = applicationUserModelId;
    v23 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v15,
      (int)&unk_1800BE45D,
      v16,
      v17,
      (__int64)&v23,
      &v25,
      (__int64 *)&v24,
      (__int64)&v22,
      (__int64)v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v11;
}
