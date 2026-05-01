/*
 * XREFs of ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18000718C
 * Callers:
 *     HamRpcSrvGetApplicationInterruptiveUIState @ 0x180006F60 (HamRpcSrvGetApplicationInterruptiveUIState.c)
 * Callees:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800053F8 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180005C1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWrapperByVa.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180006FA8 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007348 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v10; // si
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _HAM_APPLICATION *v15; // rax
  struct _HAM_APPLICATION *v16; // rdi
  unsigned int InterruptiveUIState; // eax
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 *v22; // [rsp+60h] [rbp-A0h] BYREF
  const unsigned __int16 *v23; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[544]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+320h] [rbp+220h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DC218, (int)&dword_1800BE430, 0, 0, 2u, &v26);
  v10 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v12 = HampAppInfoValidateAndCapture(a2, a3, a4, a5, (struct _HAM_APPLICATION_INFO *)v25);
  if ( v12 >= 0 )
  {
    v15 = HampAppFind(a1, (struct _HAM_APPLICATION_INFO *)v25);
    v16 = v15;
    if ( v15 )
    {
      InterruptiveUIState = HampAppGetInterruptiveUIState(v15);
      v10 = InterruptiveUIState;
      *a6 = InterruptiveUIState;
      v12 = 0;
      CemRcObjectDereference(v16);
    }
    else
    {
      v12 = -1073741275;
    }
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v19[0] = v10;
    v20 = a5;
    v22 = a3;
    v23 = a2;
    v21 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v11,
      (int)&unk_1800BF158,
      v13,
      v14,
      (__int64)&v21,
      &v23,
      (__int64 *)&v22,
      (__int64)&v20,
      (__int64)v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v12;
}
