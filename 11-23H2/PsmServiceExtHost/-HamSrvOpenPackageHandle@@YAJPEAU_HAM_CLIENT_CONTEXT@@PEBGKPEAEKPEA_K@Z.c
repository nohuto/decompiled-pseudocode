/*
 * XREFs of ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x180036DEC
 * Callers:
 *     HamRpcSrvServicingOpenPackageHandle @ 0x1800371B0 (HamRpcSrvServicingOpenPackageHandle.c)
 *     HamRpcSrvDebugOpenPackageHandle @ 0x18007AFA0 (HamRpcSrvDebugOpenPackageHandle.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempUtilValidateAndCapturePackageInfo @ 0x180036CC4 (CempUtilValidateAndCapturePackageInfo.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180036FA8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_.c)
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180037090 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  char *v13; // rsi
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-A8h]
  char *v20; // [rsp+60h] [rbp-A0h]
  const unsigned __int16 *v21; // [rsp+68h] [rbp-98h]
  unsigned __int64 v22; // [rsp+70h] [rbp-90h]
  _BYTE v23[132]; // [rsp+80h] [rbp-80h] BYREF
  char v24; // [rsp+104h] [rbp+4h] BYREF
  _BYTE v25[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1787,
      0LL,
      0LL,
      2u,
      &v26);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v10 = *((unsigned __int8 *)a1 + 164);
  v11 = 0LL;
  v12 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = 0LL;
  v13 = (char *)(v12 - 48 * v10 + 1196);
  v14 = CempUtilValidateAndCapturePackageInfo(a2, a4, a5, a3, (__int64)v23);
  if ( v14 >= 0 )
  {
    v13 = &v24;
    v15 = HampClientPkgCreate((struct _HAM_PACKAGE_INFO *)v23, a1, &v18);
    v11 = v18;
    v14 = v15;
    if ( v15 >= 0 )
    {
      *a6 = v18;
      v14 = 0;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v20 = v13;
    v19 = a3;
    v21 = a2;
    v22 = v11;
    LODWORD(v18) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v16,
      &unk_1800C0636);
  }
  return (unsigned int)v14;
}
