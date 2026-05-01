/*
 * XREFs of ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180072264
 * Callers:
 *     HamRpcSrvTerminateIfSuspendedByProcess @ 0x1800736B0 (HamRpcSrvTerminateIfSuspendedByProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000A610 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x1800422CC (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18006E850 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall HamSrvTerminateIfSuspendedByProcess(struct _HAM_CLIENT_CONTEXT *a1, void *a2, unsigned __int8 *a3)
{
  DWORD ProcessId; // edi
  int ProcessFullIdentity; // ebx
  unsigned int v8; // r8d
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v12; // [rsp+20h] [rbp-E0h]
  _BYTE v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[144]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[560]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+310h] [rbp+210h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF340,
      0LL,
      0LL,
      2u,
      &v18);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  ProcessId = GetProcessId(a2);
  if ( ProcessId )
  {
    ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, 0LL, (struct _RM_PSM_HOST_INFO *)v17);
    if ( ProcessFullIdentity >= 0 )
    {
      HampManagerTerminateHostIfSuspended(*(_QWORD *)a1, ProcessId, v8, 0x1200u, v12, v13);
      ProcessFullIdentity = 0;
      *a3 = v13[0];
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    ProcessFullIdentity = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    ProcessFullIdentity = GetLastError();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v14 = *((_DWORD *)a1 + 36);
    v15 = ProcessFullIdentity;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800DC218,
      byte_1800BE952,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)v13);
  }
  return (unsigned int)ProcessFullIdentity;
}
