/*
 * XREFs of ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x180072C50
 * Callers:
 *     ?HampInProcQueryActivityPendDiagnostics@@YAJPEAX_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x18004AF50 (-HampInProcQueryActivityPendDiagnostics@@YAJPEAX_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z.c)
 *     HamRpcSrvQueryActivityPendDiagnostics @ 0x18007B150 (HamRpcSrvQueryActivityPendDiagnostics.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003DBDC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E240 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActGetPendDurations@@YAXPEAU_HAM_ACTIVITY_START_PERFORMANCE@@PEAT_HAM_PEND_DURATIONS@@@Z @ 0x18007B7F8 (-HampActGetPendDurations@@YAXPEAU_HAM_ACTIVITY_START_PERFORMANCE@@PEAT_HAM_PEND_DURATIONS@@@Z.c)
 */

__int64 __fastcall HamSrvQueryActivityPendDiagnostics(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_PEND_DIAGNOSTICS *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  struct _HAM_ACTIVITY *v8; // rax
  struct _HAM_ACTIVITY *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  struct _HAM_ACTIVITY_START_PERFORMANCE *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // xmm1_8
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v22[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-10h]

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C053F,
      0LL,
      0LL,
      2u,
      &v23);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  v24 = 0LL;
  v23 = 0LL;
  if ( HampClientIsActive(a1, v6) )
  {
    v8 = HampActFindForClient(a1, a2);
    v9 = v8;
    if ( v8 )
    {
      HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v8 + 10));
      if ( *((_BYTE *)v9 + 562) == 2 )
      {
        v12 = (struct _HAM_ACTIVITY_START_PERFORMANCE *)*((_QWORD *)v9 + 66);
        LODWORD(v23.Ptr) = *((unsigned __int8 *)v9 + 563);
        HampActGetPendDurations(v12, (union _HAM_PEND_DURATIONS *)((char *)&v23.Ptr + 4));
        v13 = *((_QWORD *)v9 + 10);
        CempLockTrackerMarkReleased(HampLockTrackerId, v14, 1u);
        RtlReleaseSRWLockShared(v13);
        v15 = v24;
        *(struct _EVENT_DATA_DESCRIPTOR *)a3 = v23;
        *((_QWORD *)a3 + 2) = v15;
        v7 = 0;
      }
      else
      {
        v11 = *((_QWORD *)v9 + 10);
        v7 = -1073741436;
        CempLockTrackerMarkReleased(HampLockTrackerId, v10, 1u);
        RtlReleaseSRWLockShared(v11);
      }
      CemRcObjectDereference(v9);
    }
    else
    {
      v7 = -1073741275;
    }
  }
  else
  {
    v7 = -1073741661;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v19[0] = v23.Ptr;
    v21 = a2;
    v20 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800DB218,
      byte_1800C175A,
      v16,
      v17,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)v19);
  }
  return v7;
}
