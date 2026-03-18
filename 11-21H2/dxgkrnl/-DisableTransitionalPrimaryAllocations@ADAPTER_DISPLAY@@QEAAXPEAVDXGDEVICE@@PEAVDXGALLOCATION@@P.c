/*
 * XREFs of ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02C02D4
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0013D10 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C02E7CAC (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rcx
  unsigned int v9; // edi
  char *v10; // rdx

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3543LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 3543LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3544LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      3544LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3545LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 3545LL, 0LL, 0LL, 0LL, 0LL);
  }
  while ( a3 )
  {
    v8 = *((_QWORD *)a3 + 6);
    if ( !v8 )
    {
      WdLogSingleEntry1(1LL, 3551LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_pAllocation != NULL",
        3551LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = *((_QWORD *)a3 + 6);
    }
    if ( (*(_DWORD *)(v8 + 4) & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 3552LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_pAllocation->m_Primary",
        3552LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = *((_QWORD *)a3 + 6);
    }
    v9 = (*(_DWORD *)(v8 + 4) >> 6) & 0xF;
    if ( v9 >= *((_DWORD *)this + 24) )
    {
      WdLogSingleEntry1(1LL, 3555LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < GetNumVidPnSources()",
        3555LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)a2 + 231) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
    {
      WdLogSingleEntry1(1LL, 3557LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice->IsFullWDDMDevice(VidPnSourceId)",
        3557LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, v9) == a3 )
    {
      WdLogSingleEntry1(1LL, 3558LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice->GetDisplayedPrimary(VidPnSourceId) != pCurrentAlloc",
        3558LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) != 0 )
    {
      WdLogSingleEntry1(1LL, 3559LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pCurrentAlloc->m_pAllocation->m_Invalidated",
        3559LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v9) == a2 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 648LL)
                                                                                 + 8LL)
                                                                     + 704LL))(
             *(_QWORD *)(*((_QWORD *)a2 + 2) + 656LL),
             *((_QWORD *)a3 + 3),
             0LL) )
      {
        COREDEVICEACCESS::Release(a4);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 648LL) + 8LL)
                                                       + 712LL))(
          *(_QWORD *)(*((_QWORD *)a2 + 2) + 656LL),
          *((_QWORD *)a3 + 3),
          v9);
        COREDEVICEACCESS::AcquireSharedUncheck(a4, v10);
      }
    }
    DXGDEVICE::UnpinTransitionalPrimaryAllocation(a2, a3, v9);
    a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
  }
}
