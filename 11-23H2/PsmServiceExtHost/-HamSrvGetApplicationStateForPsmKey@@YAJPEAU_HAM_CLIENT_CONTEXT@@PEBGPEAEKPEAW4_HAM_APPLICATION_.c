/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800720A0
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x180055540 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18003300C (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035A78 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180055256 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180055256.c)
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18005556C (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F428 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  const unsigned __int16 *v7; // r14
  char v9; // si
  int v10; // edi
  int v11; // ebx
  struct _HAM_APPLICATION *v12; // rax
  struct _HAM_APPLICATION *v13; // r14
  int RegistryTerminateReason; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int16 *v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v23; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v24; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v26[232]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v27[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+330h] [rbp+230h] BYREF

  v7 = a2;
  v23 = a3;
  v22 = a2;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C0BE8,
      0LL,
      0LL,
      2u,
      &v28);
  v9 = 4;
  v10 = 6912;
  v21 = 4;
  v20 = 6912;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v11 = HampAppInfoValidateAndCapture(v7, v23, a4, *((_DWORD *)a1 + 42), (struct _HAM_APPLICATION_INFO *)v26);
  if ( v11 >= 0 )
  {
    v12 = HampAppFind(
            (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *((unsigned __int8 *)a1 + 164)
                                            - 16),
            (struct _HAM_APPLICATION_INFO *)v26);
    v13 = v12;
    if ( v12 )
    {
      HampAppGetActivationState(v12, (enum _HAM_APPLICATION_EXECUTION_STATE *)&v21, (enum _HAM_TERMINATE_REASON *)&v20);
      v9 = v21;
      v11 = 0;
      v10 = v20;
      *(_DWORD *)a5 = v21;
      *(_DWORD *)a6 = v10;
      CemRcObjectDereference(v13);
    }
    else
    {
      RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(v26, v27, (enum _HAM_TERMINATE_REASON *)&v20);
      v10 = v20;
      v11 = RegistryTerminateReason;
      if ( RegistryTerminateReason >= 0 )
      {
        v9 = 3;
        v11 = 0;
        *(_DWORD *)a5 = 3;
        *(_DWORD *)a6 = v10;
      }
    }
    v7 = v22;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v20 = *((_DWORD *)a1 + 42);
    v21 = v10;
    v19[0] = v9;
    v24 = v7;
    LODWORD(v22) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v15,
      byte_1800C012D,
      v16,
      v17,
      (__int64)&v22,
      &v24,
      (__int64 *)&v23,
      (__int64)&v20,
      (__int64)v19,
      (__int64)&v21);
  }
  return (unsigned int)v11;
}
