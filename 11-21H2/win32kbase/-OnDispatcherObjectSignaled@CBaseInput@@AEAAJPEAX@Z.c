/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003480C
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C0034720 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0034740 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00347A4 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152710 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C01DC294 (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  void **v4; // rax
  unsigned int v5; // esi
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO **v15; // rsi
  struct tagTHREADINFO *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct tagKERNELHANDLETABLEENTRY *v26; // rsi
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  LARGE_INTEGER *v36; // rdi
  struct tagKERNELHANDLETABLEENTRY *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // [rsp+38h] [rbp-99h] BYREF
  __int64 v40; // [rsp+40h] [rbp-91h] BYREF
  __int64 v41; // [rsp+48h] [rbp-89h] BYREF
  int v42; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+68h] [rbp-69h] BYREF
  __int64 *v45; // [rsp+88h] [rbp-49h]
  __int64 v46; // [rsp+90h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-39h] BYREF
  __int64 *v48; // [rsp+B8h] [rbp-19h]
  __int64 v49; // [rsp+C0h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+C8h] [rbp-9h] BYREF
  __int64 *v51; // [rsp+E8h] [rbp+17h]
  __int64 v52; // [rsp+F0h] [rbp+1Fh]

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  v4 = (void **)((char *)this + 216);
  v5 = 0;
  while ( *v4 != a2 )
  {
    ++v5;
    v4 += 8;
    if ( v5 >= 0x11 )
      goto LABEL_68;
  }
  v6 = (unsigned __int64)v5 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)this + v6 + 168)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  v10 = *(_DWORD *)((char *)this + v6 + 184);
  if ( v5 != v10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    v10 = *(_DWORD *)((char *)this + v6 + 184);
  }
  if ( v10 == 17 )
  {
LABEL_68:
    v27 = -1073741823;
    goto LABEL_35;
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v40,
    "DispatcherObjectSignaled",
    0LL);
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
  {
    v39 = InputTraceLogging::DispatcherHandleNameToString(v10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C028EE70,
      (__int64)&v39);
  }
  if ( v10 != *((_DWORD *)&unk_1C024A420 + 6 * v10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( *((_BYTE *)&unk_1C024A420 + 24 * v10 + 16) )
  {
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    else
      CurrentThreadWin32Thread = 0LL;
    v41 = CurrentThreadWin32Thread;
    v42 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v46 = 4LL;
        LODWORD(v39) = v42 == 1;
        v45 = &v39;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v44);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v36 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v36 )
        v36[1] = KeQueryPerformanceCounter(0LL);
    }
    v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v15 )
    {
      v16 = *v15;
      if ( IsThreadCrossSessionAttached() )
        v16 = 0LL;
      if ( v41 )
      {
        v18 = *(unsigned int *)(v41 + 24);
        if ( *(_DWORD *)(v41 + 48) || (int)v18 > 0 )
        {
          *(_DWORD *)(v41 + 44) = 1;
          *(GUID *)(v41 + 28) = ActivityId;
          v19 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v49 = 4LL;
              LODWORD(v39) = v42 == 1;
              v48 = &v39;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD22,
                (int)&ActivityId,
                0,
                3u,
                &v47);
              v19 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v19 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v52 = 4LL;
              LODWORD(v39) = v42 == 1;
              v51 = &v39;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD4F,
                (int)&ActivityId,
                0,
                3u,
                &v50);
            }
          }
        }
      }
      gptiCurrent = v16;
      v21 = v10;
      if ( v16 )
      {
        *((_DWORD *)v16 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19, v20);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v26 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v37 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v38 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v37;
              if ( !*(_DWORD *)(v38 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v23, v24);
                v38 = *(_QWORD *)v26;
              }
              HMUnlockObject(v38, v23, v24, v25);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v41);
      gptiCurrent = 0LL;
      v21 = v10;
    }
    v27 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C024A420 + 3 * v10 + 1))(this);
    UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  }
  else
  {
    v27 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C024A420 + 3 * v10 + 1))(this);
    v21 = v10;
  }
  if ( v27 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
  CRIMBase::SignalMarshalingCompleted((__int64)this, v21, v34);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v40);
LABEL_35:
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 120LL))(this);
  return (unsigned int)v27;
}
