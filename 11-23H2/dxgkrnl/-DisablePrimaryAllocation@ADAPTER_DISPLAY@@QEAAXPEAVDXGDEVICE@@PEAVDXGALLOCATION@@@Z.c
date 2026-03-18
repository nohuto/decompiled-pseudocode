/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0186B84
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0001838 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00052E0 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0016E64 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C016BF90 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01727C4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0173348 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017664C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0194440 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0195D58 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02EB5F8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02ED764 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  struct DXGDEVICE *VidPnSourceOwner; // rsi
  char v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // di
  PERESOURCE **v12; // r9
  bool v13; // bl
  unsigned int v14; // r9d
  int v15; // eax
  int v16; // r8d
  struct COREDEVICEACCESS *v17; // r9
  int v18; // r8d
  int v19; // eax
  int VidPnSourceOwnerType; // eax
  __int64 v21; // rbx

  VidPnSourceOwner = a2;
  v6 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3413LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 3413LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3 )
  {
    v7 = (__int64)a3 + 48;
    if ( *(_QWORD *)v7 )
      goto LABEL_5;
  }
  else
  {
    v7 = 48LL;
  }
  WdLogSingleEntry1(1LL, 3414LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"(pDxgAllocation != NULL) && (pDxgAllocation->m_pAllocation != NULL)",
    3414LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_5:
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 3) == 0 )
  {
    WdLogSingleEntry1(1LL, 3415LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAllocation->m_pAllocation->m_CddPrimary || pDxgAllocation->m_pAllocation->m_Primary",
      3415LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3416LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3416LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3417LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3417LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = (*(_DWORD *)(*(_QWORD *)v7 + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v8 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 3420LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3420LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 235) == *(_QWORD *)(v9 + 16) && (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v9 + 16));
    if ( *(int *)(v10 + 2820) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(this, v12);
    }
    else
    {
      v13 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v8)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8) + v8 + 310) & 0x200) != 0 )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v8);
        if ( VidPnSourceOwnerType == 3 && (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 2) != 0 )
        {
          v6 = 1;
          v13 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8) == VidPnSourceOwner )
        {
          v13 = 1;
        }
      }
      else
      {
        v13 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v8, 0) == *(struct DXGADAPTERALLOCATION **)v7;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8LL, (unsigned int)v8);
        }
        else
        {
          v14 = 0;
          if ( v13 )
            v14 = 1 << v8;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v8,
            0LL,
            v14,
            0);
        }
      }
      if ( v13 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v8);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                       + 736LL)
                                                                           + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 744LL),
               (unsigned int)v8) )
        {
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
        }
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v8, v18);
        v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v8, 0, 2u, 0);
        if ( v19 < 0 )
        {
          v21 = v19;
          WdLogSingleEntry3(2LL, (unsigned int)v8, this[2], v19);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
            (unsigned int)v8,
            (__int64)this[2],
            v21,
            0LL,
            0LL);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 116) == 2 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 2) == 0 )
        {
          WdLogSingleEntry1(1LL, 3551LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDxgAllocation->m_pAllocation->m_CddPrimary",
            3551LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !*(_QWORD *)(*(_QWORD *)v7 + 8LL) )
        {
          WdLogSingleEntry1(1LL, 3552LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDxgAllocation->m_pAllocation->m_hVidMmAllocation != NULL",
            3552LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 760LL) + 8LL)
                                               + 184LL))(
          *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 768LL),
          *(_QWORD *)(*(_QWORD *)v7 + 8LL));
        *(_DWORD *)(*(_QWORD *)v7 + 4LL) |= 0x10u;
        if ( v6 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8);
      }
      v15 = *((_DWORD *)VidPnSourceOwner + 116);
      if ( v15 != 2 )
      {
        if ( v15 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v8);
          if ( *(int *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2820LL) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v8, v16, v17);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v8);
        }
      }
    }
  }
}
