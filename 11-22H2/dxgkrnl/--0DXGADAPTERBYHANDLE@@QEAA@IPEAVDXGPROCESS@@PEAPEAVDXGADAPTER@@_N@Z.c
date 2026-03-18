/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998
 * Callers:
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C01787D0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0178BC0 (DxgkGetPostCompositionCaps.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C017B640 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C0194860 (DxgkFlushPresentHistory.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01A1184 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C01A5B7C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkGetDisplayModeList @ 0x1C01A7B20 (DxgkGetDisplayModeList.c)
 *     DxgkFlushHeapTransitions @ 0x1C01E0790 (DxgkFlushHeapTransitions.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01E6D04 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01EB820 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01EE580 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C01F16B0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01F1940 (DxgkCheckMonitorPowerState.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B5BA4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CF990 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02D08B0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetScanLine @ 0x1C02D1910 (DxgkGetScanLine.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1FF0 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkQueryClockCalibration @ 0x1C02D4240 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C02D5720 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C02D6150 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D924C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C02D9A00 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C02DB0A0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetMultisampleMethodList @ 0x1C03016B0 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0301DA0 (DxgkInvalidateActiveVidPn.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C032B4D0 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C032F9F8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkGetPresentStats @ 0x1C034148C (DxgkGetPresentStats.c)
 *     DxgkSetStablePowerState @ 0x1C0347500 (DxgkSetStablePowerState.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037E560 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  struct _KTHREAD *v13; // rdx
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  struct _KTHREAD *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  _BYTE v29[8]; // [rsp+60h] [rbp-38h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-30h]
  int v31; // [rsp+70h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  if ( !a4 )
    return this;
  v30 = (DXGPUSHLOCK *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1453LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DXGPUSHLOCK::AcquireShared(v30);
  v9 = (a2 >> 6) & 0xFFFFFF;
  v10 = *((_DWORD *)a3 + 106) >> 8;
  v31 = 1;
  if ( (v10 & 1) != 0 )
  {
    v22 = a3[76];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v22 + 248));
    if ( (unsigned int)v9 < *((_DWORD *)v22 + 74) )
    {
      v23 = *((_QWORD *)v22 + 35);
      v24 = 2 * v9;
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v23 + 8 * v24 + 8) & 0x60)
        && (*(_DWORD *)(v23 + 8 * v24 + 8) & 0x2000) == 0 )
      {
        v25 = *(_DWORD *)(v23 + 8 * v24 + 8) & 0x1F;
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            v11 = *(_QWORD *)(v23 + 8 * v24);
            goto LABEL_33;
          }
          if ( a5 )
          {
            WdLogSingleEntry1(2LL, 316LL);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v27,
                  v26,
                  v28,
                  0,
                  0,
                  -1,
                  (__int64)L"Handle type mismatch",
                  316LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
        }
      }
    }
    v11 = 0LL;
LABEL_33:
    _InterlockedDecrement((volatile signed __int32 *)v22 + 66);
    ExReleasePushLockSharedEx((char *)v22 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_7;
  }
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 74) )
  {
    v13 = a3[35];
    v14 = 2 * v9;
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v13 + 8 * v14 + 8) & 0x60) && (*((_DWORD *)v13 + 2 * v14 + 2) & 0x2000) == 0 )
    {
      v15 = *((_DWORD *)v13 + 2 * v14 + 2) & 0x1F;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v11 = *((_QWORD *)v13 + v14);
          goto LABEL_7;
        }
        if ( a5 )
        {
          WdLogSingleEntry1(2LL, 316LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v17,
                v16,
                v18,
                0,
                0,
                -1,
                (__int64)L"Handle type mismatch",
                316LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
      }
    }
  }
  v11 = 0LL;
LABEL_7:
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
    *((_QWORD *)this + 1) = -1LL;
  }
  *a4 = *(struct DXGADAPTER **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return this;
}
