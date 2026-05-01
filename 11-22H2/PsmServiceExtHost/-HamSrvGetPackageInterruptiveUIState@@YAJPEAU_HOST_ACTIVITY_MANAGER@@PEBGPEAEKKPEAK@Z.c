/*
 * XREFs of ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800726F0
 * Callers:
 *     HamRpcSrvGetPackageInterruptiveUIState @ 0x18007B0F0 (HamRpcSrvGetPackageInterruptiveUIState.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180035DFC (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800712E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_1800712E4.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x18007EF88 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 */

__int64 __fastcall HamSrvGetPackageInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int16 *a2,
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
  unsigned int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  PSID v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v23; // [rsp+68h] [rbp-98h] BYREF
  wchar_t v24[104]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[144]; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+1D0h] [rbp+D0h] BYREF

  v6 = 0;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C056C,
      0LL,
      0LL,
      2u,
      &v26);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v11 = CempUtilValidateAndCapturePackageInfoWithFamilyName(a2, SourceSid, a4, a5, (__int64)v24);
  if ( v11 >= 0 )
  {
    v12 = HampPkgFindInManager(a1, v24);
    v13 = v12;
    if ( v12 )
    {
      InterruptiveUIState = HampPkgGetInterruptiveUIState(v12, 0LL);
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
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v19[0] = v6;
    v20 = a5;
    v22 = SourceSid;
    v23 = a2;
    v21 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v15,
      byte_1800C138B,
      v16,
      v17,
      (__int64)&v21,
      (const unsigned __int16 **)&v23,
      (__int64 *)&v22,
      (__int64)&v20,
      (__int64)v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v11;
}
