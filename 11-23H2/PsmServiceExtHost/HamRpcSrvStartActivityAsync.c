/*
 * XREFs of HamRpcSrvStartActivityAsync @ 0x180027DB0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerIsSetForThread @ 0x180010BAC (CempLockTrackerIsSetForThread.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180029F30 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamRpcSrvStartActivityAsync(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  int v8; // r15d
  ULONGLONG v9; // rdx
  HKEY v10; // rdi
  int v11; // r14d
  int started; // ebx
  struct _HAM_ACTIVITY *v13; // rax
  struct _HAM_ACTIVITY *v14; // rsi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  HKEY v21; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v27; // [rsp+120h] [rbp+20h]
  int v28; // [rsp+128h] [rbp+28h]
  int v29; // [rsp+12Ch] [rbp+2Ch]

  v8 = 1;
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    EventDescriptor.Keyword = v9;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v27 = &unk_1800C07C9;
    UserData.Reserved = 2;
    v28 = 23;
    v29 = 1;
    LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v10 = 0LL;
  v21 = 0LL;
  if ( CempLockTrackerIsSetForThread() )
    v8 = 0;
  else
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v20 = 0;
  v11 = 0;
  if ( HampClientIsActive(a1) )
  {
    if ( a4 )
    {
      started = -1073741822;
    }
    else if ( a3 > 1 )
    {
      started = -1073741583;
    }
    else
    {
      v13 = HampActFindForClient(a1, a2);
      v14 = v13;
      if ( v13 )
      {
        started = HampActStartAsync((__int64)v13, a3, &v20, &v21);
        if ( started >= 0 )
          started = 0;
        CemRcObjectDereference(v14);
        v10 = v21;
        v11 = v20;
      }
      else
      {
        started = -1073741275;
      }
    }
  }
  else
  {
    started = -1073741661;
  }
  if ( v8 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    v19[0] = a3;
    v22 = v10;
    v20 = v11;
    v23 = a2;
    LODWORD(v21) = started;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v15,
      (unsigned int)&unk_1800C03AC,
      v16,
      v17,
      (__int64)&v21,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)v19);
  }
  return (unsigned int)started;
}
