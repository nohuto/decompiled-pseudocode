/*
 * XREFs of ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180073BA8
 * Callers:
 *     PsmHamTerminateApplication @ 0x18006C270 (PsmHamTerminateApplication.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18001374C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVa.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035AA8 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F768 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F8E4 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 */

__int64 __fastcall HamSrvTerminateApplicationForBi(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        void *a3,
        unsigned int a4,
        unsigned int a5)
{
  ULONG v9; // eax
  int v10; // ebx
  struct _HAM_APPLICATION *v11; // rax
  __int64 v12; // rdx
  struct _HAM_APPLICATION *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-ACh] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  void *v21; // [rsp+60h] [rbp-A0h] BYREF
  const unsigned __int16 *v22; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[544]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+320h] [rbp+220h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C16B9,
      0LL,
      0LL,
      2u,
      &v25);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  v9 = RtlLengthSid(a3);
  v10 = HampAppInfoValidateAndCapture(a2, (unsigned __int8 *)a3, v9, a4, (struct _HAM_APPLICATION_INFO *)v24);
  if ( v10 >= 0 )
  {
    v11 = HampAppFind(a1, (struct _HAM_APPLICATION_INFO *)v24);
    v13 = v11;
    if ( v11 )
    {
      v10 = HampAppTerminate(v11, v12, a5);
      if ( v10 >= 0 )
        v10 = 0;
      CemRcObjectDereference(v13);
    }
    else
    {
      v10 = -1073741275;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v18[0] = a5;
    v21 = a3;
    v19 = a4;
    v22 = a2;
    v20 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<1>>(
      v14,
      (int)&unk_1800C0A1D,
      v15,
      v16,
      (__int64)&v20,
      &v22,
      (__int64)&v19,
      (__int64 *)&v21,
      (__int64)v18);
  }
  return (unsigned int)v10;
}
