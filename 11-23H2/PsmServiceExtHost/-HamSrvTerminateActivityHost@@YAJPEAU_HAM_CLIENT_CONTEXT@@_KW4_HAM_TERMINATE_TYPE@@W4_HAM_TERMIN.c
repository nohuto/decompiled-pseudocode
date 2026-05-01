/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18003FE9C
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x18003FE90 (HamRpcSrvTerminateActivityHost.c)
 *     ?HampInProcTerminateActivityHost@@YAJPEAX_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18004AF10 (-HampInProcTerminateActivityHost@@YAJPEAX_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180037FE4 (-HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x1800400F4 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@34433@Z @ 0x180071488 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@U2@U2@U1@.c)
 */

__int64 __fastcall HamSrvTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6,
        int a7)
{
  __int64 v7; // rdi
  int v11; // ebx
  unsigned int v12; // eax
  bool v13; // zf
  struct _HAM_ACTIVITY *v14; // rax
  struct _HAM_ACTIVITY *v15; // r15
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  _BYTE v20[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+78h] [rbp-88h] BYREF
  int v25; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+120h] [rbp+20h] BYREF

  v7 = 0LL;
  v23 = a2;
  v21 = a4;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C0E78,
      0LL,
      0LL,
      2u,
      &v29);
  if ( a5 )
    v22 = *a5;
  else
    v22 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( !HampClientIsActive(a1) )
  {
    v11 = -1073741661;
    goto LABEL_25;
  }
  if ( !HamSrvAreTerminateParametersValid(a3, a4, a5) )
  {
    v11 = -1073741811;
    goto LABEL_25;
  }
  if ( a3 != 2 )
  {
    v13 = a6 == 0;
LABEL_15:
    if ( !v13 )
    {
      v11 = -1073741776;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  v12 = a4 & 0xFFFFFF00;
  if ( (a4 & 0xFFFFFF00) != 0x100 && v12 != 3328 )
  {
    v13 = v12 == 5120;
    goto LABEL_15;
  }
LABEL_18:
  if ( (a7 & 1) == a7 )
  {
    v14 = HampActFindForClient(a1, v23);
    v15 = v14;
    if ( v14 )
    {
      v11 = HampActTerminate(v14, a3, a4);
      if ( v11 >= 0 )
        v11 = 0;
      CemRcObjectDereference(v15);
    }
    else
    {
      v11 = -1073741275;
    }
  }
  else
  {
    v11 = -1073741580;
  }
LABEL_25:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v24 = a7;
    v25 = a6;
    if ( a5 )
      v7 = *a5;
    v27 = v22;
    v26 = v7;
    v20[0] = a3;
    LODWORD(v22) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      (unsigned int)&unk_1800C02EF,
      v17,
      v18,
      (__int64)&v22,
      (__int64)&v23,
      (__int64)v20,
      (__int64)&v21,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
  return (unsigned int)v11;
}
