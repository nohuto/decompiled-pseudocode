/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017664C
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0186B84 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0195BF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0001838 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002AE8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00165B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x1C0041D28 (-RemovePending@DXGADAPTER@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C016BF90 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0194440 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0194BE8 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0195D58 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02EB5F8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02ED764 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, PERESOURCE **a2)
{
  unsigned int v4; // ebp
  bool v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbp
  struct ADAPTER_RENDER **v10; // rdi
  int v11; // r8d
  struct COREDEVICEACCESS *v12; // r9
  int v13; // r8d
  int v14; // eax
  DXGDODPRESENT *v15; // rcx
  __int64 v16; // rdi
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rbx

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3851LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderCore != NULL", 3851LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    WdLogSingleEntry1(1LL, 3852LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderCore->IsCoreResourceExclusiveOwner()",
      3852LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3853LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3853LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[2][366] )
  {
    if ( *((_DWORD *)a2[2] + 50) != 1 && !DXGADAPTER::RemovePending((DXGADAPTER *)a2[2]) )
    {
      WdLogSingleEntry1(1LL, 3863LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
        3863LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v15 = (DXGDODPRESENT *)this[56];
    if ( v15 )
      DXGDODPRESENT::Flush(v15);
  }
  if ( *((_DWORD *)a2[2] + 50) == 1 )
    ADAPTER_RENDER::FlushScheduler(a2, 8LL, 0xFFFFFFFFLL);
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      v5 = this[2][366] == 0LL;
      do
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v4) )
        {
          if ( !v5 )
          {
            DXGADAPTER::IncrementVSyncWaiter((DXGADAPTER *)a2[2], v4);
            if ( (*(unsigned __int8 (__fastcall **)(PERESOURCE *, _QWORD))&a2[92][1][5].ActiveCount)(a2[93], v4) )
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
            DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a2[2], v4, v13);
            v5 = 1;
          }
          v14 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v4, 0, 4u, 0);
          if ( v14 < 0 )
          {
            v16 = v14;
            WdLogSingleEntry3(2LL, v14, this[2], v4);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"NTSTATUS:0x%I64x ADAPTER_DISPLAY:0x%I64x SetVidPnSourceVisibility failed disabling VidPnSourceId 0x%I64x",
              v16,
              (__int64)this[2],
              v4,
              0LL,
              0LL);
          }
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 24) );
    }
  }
  v6 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( this[16][500 * v6 + 11] )
      {
        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
        if ( NumDifferentPhysicalAdapters )
        {
          v19 = v18 + 88;
          v20 = NumDifferentPhysicalAdapters;
          do
          {
            v21 = *(__int64 *)((char *)this[16] + v19);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 48);
              if ( !v22 )
              {
                WdLogSingleEntry1(1LL, 3939LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 3939LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (*(_DWORD *)(v22 + 4) & 2) == 0 )
              {
                WdLogSingleEntry1(1LL, 3940LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pAllocation->m_CddPrimary",
                  3940LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( ((*(_DWORD *)(v22 + 4) >> 6) & 0xF) != v6 )
              {
                WdLogSingleEntry1(1LL, 3941LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pAllocation->m_VidPnSourceId == VidPnSourceId",
                  3941LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( !*(_QWORD *)(v22 + 8) )
              {
                WdLogSingleEntry1(1LL, 3942LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pAllocation->m_hVidMmAllocation != NULL",
                  3942LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(v22 + 4) & 0x10) == 0 )
              {
                if ( *((_DWORD *)a2[2] + 50) != 1 && !DXGADAPTER::RemovePending((DXGADAPTER *)a2[2]) )
                {
                  WdLogSingleEntry1(1LL, 3953LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
                    3953LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                ((void (__fastcall *)(PERESOURCE *, _QWORD))a2[95][1][1].Reserved2)(a2[96], *(_QWORD *)(v22 + 8));
                *(_DWORD *)(v22 + 4) |= 0x10u;
              }
            }
            v19 += 8LL;
            --v20;
          }
          while ( v20 );
        }
      }
      v7 = *((_DWORD *)this + 24);
      ++v6;
    }
    while ( v6 < v7 );
    v8 = 0;
    if ( v7 )
    {
      do
      {
        v9 = 500LL * v8;
        v10 = (struct ADAPTER_RENDER **)this[16][v9 + 91];
        if ( v10 )
        {
          if ( a2 != (PERESOURCE **)v10[2] )
          {
            WdLogSingleEntry1(1LL, 3973LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pRenderCore == pDevice->GetRenderCore()",
              3973LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( LODWORD(this[16][v9 + 91][4].OwnerEntry.OwnerThread) )
          {
            DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v10, v8);
            if ( *(int *)(*((_QWORD *)v10[2] + 2) + 2820LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v10, v8, v11, v12);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v10, v8);
          }
        }
        ++v8;
      }
      while ( v8 < *((_DWORD *)this + 24) );
    }
  }
}
