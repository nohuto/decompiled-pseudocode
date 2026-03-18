/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BEA4C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02BEC54 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BEF88 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0001838 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0004118 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ClearPrimaryVidPnSource@DXGDEVICE@@QEAAXI@Z @ 0x1C0016BD4 (-ClearPrimaryVidPnSource@DXGDEVICE@@QEAAXI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0016E64 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage @ 0x1C0024CD8 (Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C016BF90 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01727C4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017664C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0194440 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0195D58 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02EB5F8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02ED764 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned int v4; // r12d
  unsigned __int8 v5; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // r13
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned int i; // ebp
  int v16; // edi
  unsigned int j; // ebp
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rbx
  int v21; // r8d
  struct COREDEVICEACCESS *v22; // r9

  v4 = 0;
  v5 = a4;
  if ( !a2 || *((_DWORD *)a2 + 116) == 2 )
  {
    WdLogSingleEntry1(1LL, 3687LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDevice != NULL) && !pDevice->IsCddDevice()",
      3687LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 3688LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_ALL) || (VidPnSourceId < GetNumVidPnSources())",
      3688LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3689LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3689LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 3690LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3690LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *((_QWORD *)a2 + 2);
  v10 = *(_QWORD *)(v9 + 16);
  if ( *((_QWORD *)a2 + 235) == v10 )
  {
    if ( *(int *)(v10 + 2820) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((PERESOURCE **)this, (PERESOURCE **)v9);
    }
    else
    {
      v11 = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v9 + 16));
      if ( *(_DWORD *)(v13 + 200) == 1 && !v5 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)a2 + 2), 8u, a3, 0);
        }
        else
        {
          v14 = 0;
          for ( i = 0; v14 < *((_DWORD *)this + 24); ++v14 )
          {
            if ( a3 == -3 || v14 == a3 )
            {
              v16 = 1 << v14;
              if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v14) == a2 )
                v4 |= v16;
              i |= v16;
            }
          }
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*((ADAPTER_RENDER **)a2 + 2), i, 0LL, v4, 0);
          v5 = a4;
        }
      }
      for ( j = 0; j < *((_DWORD *)this + 24); ++j )
      {
        if ( a3 == -3 || j == a3 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, j) == a2 )
          {
            if ( !v11 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)a2 + 2));
              DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), j);
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 736LL)
                                                                                 + 8LL)
                                                                     + 544LL))(
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 744LL),
                     j) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
              }
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), j, v18);
              v11 = 1;
            }
            v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, j, 0, 8, v5);
            if ( v19 < 0 )
            {
              v20 = v19;
              WdLogSingleEntry3(2LL, j, *((_QWORD *)this + 2), v19);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
                j,
                *((_QWORD *)this + 2),
                v20,
                0LL,
                0LL);
            }
          }
          if ( *((_DWORD *)a2 + 116) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, j);
            if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2820LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations(a2, j, v21, v22);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations(a2, j);
          }
        }
        v5 = a4;
      }
    }
  }
  else if ( (unsigned int)Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage() )
  {
    DXGDEVICE::ClearPrimaryVidPnSource((struct _KTHREAD **)a2, a3);
    DXGDEVICE::SetDisplayedPrimary(a2, a3, 0LL, 0, 1u);
  }
}
