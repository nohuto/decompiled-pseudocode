/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C01EE334 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C18E4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C1AEC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00025BC (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C015D620 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C5A1C (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01C71C4 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02E5840 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E7898 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
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
  int v18; // eax
  __int64 v19; // rbx
  int v20; // r8d
  struct COREDEVICEACCESS *v21; // r9

  v4 = 0;
  v5 = a4;
  if ( !a2 || *((_DWORD *)a2 + 108) == 2 )
  {
    WdLogSingleEntry1(1LL, 3612LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDevice != NULL) && !pDevice->IsCddDevice()",
      3612LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 3613LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_ALL) || (VidPnSourceId < GetNumVidPnSources())",
      3613LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3614LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3614LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 3615LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3615LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *((_QWORD *)a2 + 2);
  v10 = *(_QWORD *)(v9 + 16);
  if ( *((_QWORD *)a2 + 231) == v10 )
  {
    if ( *(int *)(v10 + 2692) < 2000 )
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
                                                                                             + 624LL)
                                                                                 + 8LL)
                                                                     + 544LL))(
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 632LL),
                     j) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
              }
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), j);
              v11 = 1;
            }
            v18 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, j, 0, 8, v5);
            if ( v18 < 0 )
            {
              v19 = v18;
              WdLogSingleEntry3(2LL, j, *((_QWORD *)this + 2), v18);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
                j,
                *((_QWORD *)this + 2),
                v19,
                0LL,
                0LL);
            }
          }
          if ( *((_DWORD *)a2 + 108) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, j);
            if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2692LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations(a2, j, v20, v21);
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
}
