/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180045BCC
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x180045BC0 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180006FA8 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007348 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000BF54 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180045DE8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180045DE8.c)
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180045ED8 (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  int v9; // edi
  int v10; // ebx
  struct _HAM_APPLICATION *v11; // rax
  struct _HAM_APPLICATION *v12; // rbx
  __int64 v13; // rcx
  int RegistryTerminateReason; // eax
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-A0h]
  unsigned __int8 *v19; // [rsp+68h] [rbp-98h]
  const unsigned __int16 *v20; // [rsp+70h] [rbp-90h]
  _BYTE v21[144]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v22[232]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v23[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+330h] [rbp+230h] BYREF

  v18 = a3;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BED9C,
      0LL,
      0LL,
      2u,
      &v24);
  v9 = 6912;
  v17 = 4;
  v16 = 6912;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  v10 = HampAppInfoValidateAndCapture(a2, v18, a4, *((_DWORD *)a1 + 36), (struct _HAM_APPLICATION_INFO *)v22);
  if ( v10 >= 0 )
  {
    v11 = HampAppFind(*(struct _HOST_ACTIVITY_MANAGER **)a1, (struct _HAM_APPLICATION_INFO *)v22);
    v12 = v11;
    if ( v11 )
    {
      HampAppGetActivationState(v11, (enum _HAM_APPLICATION_EXECUTION_STATE *)&v17, (enum _HAM_TERMINATE_REASON *)&v16);
      v9 = v16;
      *(_DWORD *)a5 = v17;
      *(_DWORD *)a6 = v9;
      CemRcObjectDereference(v12);
    }
    else
    {
      RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(v22, v23, (enum _HAM_TERMINATE_REASON *)&v16);
      v9 = v16;
      v10 = RegistryTerminateReason;
      if ( RegistryTerminateReason < 0 )
        goto LABEL_8;
      *(_DWORD *)a5 = 3;
      *(_DWORD *)a6 = v9;
    }
    v10 = 0;
  }
LABEL_8:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v16 = *((_DWORD *)a1 + 36);
    v19 = v18;
    v17 = v9;
    v20 = a2;
    LODWORD(v18) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v13,
      &unk_1800BE3C4);
  }
  return (unsigned int)v10;
}
