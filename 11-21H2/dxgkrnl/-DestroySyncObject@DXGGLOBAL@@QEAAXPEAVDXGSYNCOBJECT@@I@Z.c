/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0057EEC (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C018692C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C019D6D0 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C01A5DA0 (DxgkShareObjectsInternal.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DCBD0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01E7E90 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01EC868 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C3330 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C49B8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F890 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     DxgkCreateProtectedSession @ 0x1C033A220 (DxgkCreateProtectedSession.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A370 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A404 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C03627DC (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380B10 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380E20 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C019A330 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C033FABC (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C033FD90 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0376DA0 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  __int64 v3; // r15
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rbx
  int v8; // eax
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r9
  struct DXGSYNCOBJECT *v28; // rcx
  struct DXGSYNCOBJECT **v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v36; // rax
  struct DXGSYNCOBJECT *v37; // rax
  char *v38; // rdx
  __int64 v39; // rax
  unsigned int HostHandle; // r14d
  unsigned int v41; // ebx
  struct DXGGLOBAL *v42; // rax
  int v43; // r9d
  struct DXGGLOBAL *v44; // [rsp+50h] [rbp-20h]
  char v45; // [rsp+58h] [rbp-18h]
  _BYTE v46[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v47; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2739LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject != NULL", 2739LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[79]) )
  {
    WdLogSingleEntry1(1LL, 2740LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!IsSyncObjectLockExclusiveOwner()",
      2740LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL_GetGlobal();
  v44 = Global;
  v45 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2725LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
  {
    WdLogSingleEntry1(1LL, 2730LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = v44;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v7 + 79), 1u);
  v8 = *((_DWORD *)a2 + 51) >> 2;
  v45 = 1;
  if ( (v8 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 50) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v46, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
    v37 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 37);
    v38 = (char *)v37 - 48;
    if ( v37 == (struct DXGSYNCOBJECT *)((char *)a2 + 296) )
      v38 = 0LL;
    if ( v38 )
    {
      v48 = *((_QWORD *)v38 + 4);
      if ( v48 )
      {
        v39 = *((_QWORD *)v38 + 2);
        v47 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v39 + 624) + 8LL)
                                                                                                  + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v48,
          0,
          &v47);
      }
    }
    if ( v46[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v46);
  }
  v9 = DXGGLOBAL_GetGlobal();
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v9 + 79)) )
  {
    WdLogSingleEntry1(1LL, 2476LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockExclusiveOwner()",
      2476LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v19 = ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v20 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v21 = *((_QWORD *)Current + 3)) == 0 )
  {
    v21 = v19;
  }
  if ( (_DWORD)v3 )
  {
    if ( (*((_DWORD *)a2 + 71) & 2) != 0 )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(a2, v3, v17);
      if ( HostHandle )
      {
        v41 = *(_DWORD *)(v21 + 504);
        v42 = DXGGLOBAL_GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v42 + 218), v41, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(a2, v3);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v43 = *(_DWORD *)(v21 + 272);
        if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, (const EVENT_DESCRIPTOR *)"g", v23, v43);
      }
      ExAcquirePushLockExclusiveEx(v21 + 248, 0LL);
    }
    *(_QWORD *)(v21 + 256) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v21 + 280), v3);
    *(_QWORD *)(v21 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v21 + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)a2 + 6) )
  {
    WdLogSingleEntry1(1LL, 2502LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 2502LL, 0LL, 0LL, 0LL, 0LL);
  }
  v24 = PsGetCurrentProcess(v20, v16, v17, v18);
  v25 = PsGetProcessDxgProcess(v24);
  v26 = v25;
  if ( v25 && (*(_DWORD *)(v25 + 424) & 0x80) == 0
    || (v36 = DXGTHREAD::GetCurrent()) == 0LL
    || (v27 = *((_QWORD *)v36 + 3)) == 0 )
  {
    v27 = v26;
  }
  WdLogSingleEntry3(4LL, a2, v3, v27);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 6, 0xFFFFFFFF) == 1 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 71));
    v28 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v29 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v29 != a2) )
    {
      __fastfail(3u);
    }
    *v29 = v28;
    *((_QWORD *)v28 + 1) = v29;
    if ( this[74] != (PERESOURCE)KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, this + 71, 0LL, 0LL);
    v30 = *((_DWORD *)this + 150);
    if ( v30 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
      v30 = *((_DWORD *)this + 150);
    }
    v31 = v30 - 1;
    *((_DWORD *)this + 150) = v31;
    if ( !v31 )
    {
      this[74] = 0LL;
      ExReleasePushLockExclusiveEx(this + 72, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGSYNCOBJECT::Destroy(a2, v32, v33, v34);
  }
  if ( v45 )
  {
    v45 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v44 + 79));
    KeLeaveCriticalRegion();
  }
}
