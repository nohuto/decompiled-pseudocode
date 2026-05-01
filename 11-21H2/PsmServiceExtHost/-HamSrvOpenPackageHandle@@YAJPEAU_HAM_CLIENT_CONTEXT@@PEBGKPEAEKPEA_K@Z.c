/*
 * XREFs of ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800704F0
 * Callers:
 *     HamRpcSrvServicingOpenPackageHandle @ 0x180073560 (HamRpcSrvServicingOpenPackageHandle.c)
 *     HamRpcSrvDebugOpenPackageHandle @ 0x1800737F0 (HamRpcSrvDebugOpenPackageHandle.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18006EF10 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_.c)
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x18007861C (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 *     CempUtilValidateAndCapturePackageInfo @ 0x18009CE58 (CempUtilValidateAndCapturePackageInfo.c)
 */

__int64 __fastcall HamSrvOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  char *v12; // rsi
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-A8h] BYREF
  char *v21; // [rsp+60h] [rbp-A0h] BYREF
  const unsigned __int16 *v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[132]; // [rsp+80h] [rbp-80h] BYREF
  char v25; // [rsp+104h] [rbp+4h] BYREF
  _BYTE v26[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF943,
      0LL,
      0LL,
      2u,
      &v27);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  v10 = *(_QWORD *)a1;
  v11 = 0LL;
  v19 = 0LL;
  v12 = (char *)(v10 + 908);
  v13 = CempUtilValidateAndCapturePackageInfo(a2, a4, a5, a3, v24);
  if ( v13 >= 0 )
  {
    v12 = &v25;
    v14 = HampClientPkgCreate((struct _HAM_PACKAGE_INFO *)v24, a1, &v19);
    v11 = v19;
    v13 = v14;
    if ( v14 >= 0 )
    {
      *a6 = v19;
      v13 = 0;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
  {
    v21 = v12;
    v20 = a3;
    v22 = a2;
    v23 = v11;
    LODWORD(v19) = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v15,
      byte_1800BE70E,
      v16,
      v17,
      (__int64)&v19,
      (__int64)&v23,
      &v22,
      (__int64)&v20,
      (__int64 *)&v21);
  }
  return (unsigned int)v13;
}
