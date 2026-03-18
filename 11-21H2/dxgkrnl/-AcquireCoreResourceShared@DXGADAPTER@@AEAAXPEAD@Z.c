/*
 * XREFs of ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60
 * Callers:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     DxgkReclaimAllocations @ 0x1C015AE00 (DxgkReclaimAllocations.c)
 *     DxgkLock @ 0x1C016C080 (DxgkLock.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C016F250 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C016F940 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0174BD0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C01779E0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0178000 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0179A80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     DxgkUnlock2 @ 0x1C017CC60 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C017D050 (DxgkLock2.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C018DB90 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80 (DxgkPresentMultiPlaneOverlay3.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0195D50 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B070 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019CBB0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B468C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C01C60A0 (DxgkSetQueuedLimit.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C9BF0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01CA5F0 (DxgkMapGpuVirtualAddress.c)
 *     DxgkUnlock @ 0x1C01CAE30 (DxgkUnlock.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C01CB520 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     DxgkOfferAllocations @ 0x1C01CBA90 (DxgkOfferAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1C01CC650 (DxgkReclaimAllocations2.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD9C0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkGetPresentStats @ 0x1C01CF460 (DxgkGetPresentStats.c)
 *     DxgkGetScanLine @ 0x1C01EB450 (DxgkGetScanLine.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C000BBF0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C016ED6C (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1C01E07D0 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1C01E1A34 (--1DXGDEADLOCK_TRACKER@@QEAA@XZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C02BEBA0 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FADA0 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceShared(DXGADAPTER *this, char *a2)
{
  struct DXGGLOBAL *Global; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // esi
  __int64 v18; // r8
  struct DXGTHREAD *DxgThread; // rax
  bool v20; // zf
  __int64 v21; // rcx
  int FirstProfilerInterface; // eax
  int v23; // r9d
  __int64 v24; // [rsp+20h] [rbp-1E8h]
  _BYTE v25[16]; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE v26[400]; // [rsp+60h] [rbp-1A8h] BYREF
  struct DXGTHREAD *v27; // [rsp+210h] [rbp+8h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    WdLogSingleEntry1(1LL, 4049LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4049LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  Global = DXGGLOBAL_GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  v10 = *((_QWORD *)this + 29);
  v11 = CurrentProcess;
  if ( v10 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 538) )
      {
        if ( *((_BYTE *)Global + 304408) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGGLOBAL *)((char *)Global + 2160), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::AddProcessEntry((char *)Global + 2328, v10, a2, v11, FirstProfilerInterface);
          if ( v25[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 510LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 504LL);
  }
  v12 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 104, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v23 = *((_DWORD *)this + 32);
      if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v23);
    }
    ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
  }
  if ( *((_DWORD *)this + 40) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(this);
    v12 = 1;
  }
  else
  {
    v15 = *((_QWORD *)this + 27);
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 64) + 4088LL));
  }
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( bTracingEnabled
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    LODWORD(v24) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v16, this, v24);
  }
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v26, this, v12 != 0);
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 1u);
    DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v26);
  }
  *((_DWORD *)this + 1147) = 0;
  v17 = -1;
  v27 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v27) >= 0 )
  {
    DxgThread = v27;
    if ( v27 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v27 = DxgThread) != 0LL) )
      v17 = *((_DWORD *)DxgThread + 14);
  }
  v20 = bTracingEnabled == 0;
  *((_DWORD *)this + 1148) = v17;
  if ( !v20
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    LODWORD(v24) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v18, this, v24);
  }
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 4088), 0xFFFFFFFF) == 1 )
      DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v21);
  }
}
