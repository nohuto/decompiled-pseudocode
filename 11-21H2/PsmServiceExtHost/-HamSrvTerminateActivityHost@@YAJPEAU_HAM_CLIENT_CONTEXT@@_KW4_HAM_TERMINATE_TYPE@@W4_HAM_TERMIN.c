/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x1800443CC
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x1800443C0 (HamRpcSrvTerminateActivityHost.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002C900 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180044524 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180044600 (-HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@34433@Z @ 0x18006EFF8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@U2@U2@U1@.c)
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
  bool v11; // zf
  struct _HAM_ACTIVITY *v12; // rax
  struct _HAM_ACTIVITY *v13; // r15
  int v14; // ebx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v19; // eax
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
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BEFED,
      0LL,
      0LL,
      2u,
      &v29);
  if ( a5 )
    v22 = *a5;
  else
    v22 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( !(unsigned int)HamSrvAreTerminateParametersValid(a3, a4, a5) )
  {
    v14 = -1073741811;
    goto LABEL_15;
  }
  if ( a3 != 2 )
  {
    v11 = a6 == 0;
    goto LABEL_9;
  }
  v19 = a4 & 0xFFFFFF00;
  if ( (a4 & 0xFFFFFF00) != 0x100 && v19 != 3328 )
  {
    v11 = v19 == 5120;
LABEL_9:
    if ( !v11 )
    {
      v14 = -1073741776;
      goto LABEL_15;
    }
  }
  if ( (a7 & 1) == a7 )
  {
    v12 = HampActFindForClient(a1, v23);
    v13 = v12;
    if ( v12 )
    {
      v14 = HampActTerminate(v12, a3, a4);
      if ( v14 >= 0 )
        v14 = 0;
      CemRcObjectDereference(v13);
    }
    else
    {
      v14 = -1073741275;
    }
  }
  else
  {
    v14 = -1073741580;
  }
LABEL_15:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v24 = a7;
    v25 = a6;
    if ( a5 )
      v7 = *a5;
    v27 = v22;
    v26 = v7;
    v20[0] = a3;
    LODWORD(v22) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1800BF062,
      v16,
      v17,
      (__int64)&v22,
      (__int64)&v23,
      (__int64)v20,
      (__int64)&v21,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
  return (unsigned int)v14;
}
