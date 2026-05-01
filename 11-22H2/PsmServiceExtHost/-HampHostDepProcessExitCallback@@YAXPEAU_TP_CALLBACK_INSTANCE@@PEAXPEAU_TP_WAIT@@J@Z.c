/*
 * XREFs of ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800804F0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180070E0C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007CD64 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepProcessExitCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_HOST_DEPENDENCY *a2,
        struct _TP_WAIT *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  void *v11; // rcx
  DWORD ProcessId; // eax
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DWORD v17; // [rsp+40h] [rbp-E8h] BYREF
  DWORD v18; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v19; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v21[144]; // [rsp+60h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-38h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C2E88,
      0LL,
      0LL,
      2u,
      &v22);
  HampDepGroupInvalidateDependency(a2, v4);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v5 = *((_QWORD *)a2 + 7);
    v6 = 32LL;
    v7 = 32LL;
    if ( v5 )
      v7 = v5 - 32;
    v8 = *((_QWORD *)a2 + 6);
    v9 = v8 == 0;
    v19 = *(_QWORD *)v7;
    v10 = v8 - 32;
    v11 = (void *)*((_QWORD *)a2 + 9);
    if ( !v9 )
      v6 = v10;
    v20 = *(_QWORD *)v6;
    ProcessId = GetProcessId(v11);
    v13 = (void *)*((_QWORD *)a2 + 8);
    v17 = ProcessId;
    v18 = GetProcessId(v13);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v14,
      byte_1800C2EAE,
      v15,
      v16,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)&v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
