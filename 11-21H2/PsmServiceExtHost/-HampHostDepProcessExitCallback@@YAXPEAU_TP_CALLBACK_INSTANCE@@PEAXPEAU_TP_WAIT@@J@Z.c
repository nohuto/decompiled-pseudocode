/*
 * XREFs of ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18007BCC0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18006E8E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180075750 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepProcessExitCallback(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_WAIT *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  DWORD ProcessId; // eax
  void *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DWORD v10; // [rsp+40h] [rbp-E8h] BYREF
  DWORD v11; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+F0h] [rbp-38h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C1798,
      0LL,
      0LL,
      2u,
      &v15);
  HampDepGroupInvalidateDependency((struct _HAM_HOST_DEPENDENCY *)a2, v4);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v5 = *((_QWORD *)a2 + 6);
    v12 = *(_QWORD *)(*((_QWORD *)a2 + 7) - 32LL);
    v13 = *(_QWORD *)(v5 - 32);
    ProcessId = GetProcessId(*((HANDLE *)a2 + 9));
    v7 = (void *)*((_QWORD *)a2 + 8);
    v10 = ProcessId;
    v11 = GetProcessId(v7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800DC218,
      byte_1800C17BE,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v13,
      (__int64)&v12);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
