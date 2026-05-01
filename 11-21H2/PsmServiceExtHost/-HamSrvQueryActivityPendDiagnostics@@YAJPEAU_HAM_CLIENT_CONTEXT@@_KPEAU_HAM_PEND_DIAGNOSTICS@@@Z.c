/*
 * XREFs of ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x180070A24
 * Callers:
 *     HamRpcSrvQueryActivityPendDiagnostics @ 0x180073630 (HamRpcSrvQueryActivityPendDiagnostics.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002C900 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180044C94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampActGetPendDurations@@YAXPEAU_HAM_ACTIVITY_START_PERFORMANCE@@PEAT_HAM_PEND_DURATIONS@@@Z @ 0x1800779A8 (-HampActGetPendDurations@@YAXPEAU_HAM_ACTIVITY_START_PERFORMANCE@@PEAT_HAM_PEND_DURATIONS@@@Z.c)
 */

__int64 __fastcall HamSrvQueryActivityPendDiagnostics(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_PEND_DIAGNOSTICS *a3)
{
  struct _HAM_ACTIVITY *v6; // rax
  struct _HAM_ACTIVITY *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rbx
  struct _HAM_ACTIVITY_START_PERFORMANCE *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // xmm1_8
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v21[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-10h]

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BE652,
      0LL,
      0LL,
      2u,
      &v22);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  v23 = 0LL;
  v22 = 0LL;
  v6 = HampActFindForClient(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v6 + 10), 0LL);
    if ( *((_BYTE *)v7 + 562) == 2 )
    {
      v11 = (struct _HAM_ACTIVITY_START_PERFORMANCE *)*((_QWORD *)v7 + 66);
      LODWORD(v22.Ptr) = *((unsigned __int8 *)v7 + 563);
      HampActGetPendDurations(v11, (union _HAM_PEND_DURATIONS *)((char *)&v22.Ptr + 4));
      v12 = *((_QWORD *)v7 + 10);
      CempLockTrackerMarkReleased(HampLockTrackerId, v13, 1u);
      RtlReleaseSRWLockShared(v12);
      v14 = v23;
      *(struct _EVENT_DATA_DESCRIPTOR *)a3 = v22;
      *((_QWORD *)a3 + 2) = v14;
      v8 = 0;
    }
    else
    {
      v10 = *((_QWORD *)v7 + 10);
      v8 = -1073741436;
      CempLockTrackerMarkReleased(HampLockTrackerId, v9, 1u);
      RtlReleaseSRWLockShared(v10);
    }
    CemRcObjectDereference(v7);
  }
  else
  {
    v8 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v18[0] = v22.Ptr;
    v20 = a2;
    v19 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800DC218,
      byte_1800BED4F,
      v15,
      v16,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)v18);
  }
  return v8;
}
