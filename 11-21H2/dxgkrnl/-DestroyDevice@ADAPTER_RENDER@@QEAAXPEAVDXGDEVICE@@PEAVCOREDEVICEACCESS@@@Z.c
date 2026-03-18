/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016E59C
 * Callers:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C0166A30 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00093C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C000A6C8 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016DF90 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C03574B4 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, PERESOURCE **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v8; // rsi
  ADAPTER_DISPLAY *v9; // rcx
  struct DXGDEVICE **v10; // rcx
  struct DXGDEVICE **v11; // rdx
  struct DXGDEVICE *v12; // rax
  struct DXGDEVICE **v13; // rcx
  __int64 v14; // rsi
  const wchar_t *v15; // r9

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 1695LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1695LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 108) == 2 )
  {
    if ( this[7] == CurrentThread )
      goto LABEL_5;
    v14 = 1698LL;
    WdLogSingleEntry1(1LL, 1698LL);
    v15 = L"m_DeviceCreationLockCdd.IsExclusiveOwner()";
LABEL_23:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v15, v14, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v14 = 1702LL;
    WdLogSingleEntry1(1LL, 1702LL);
    v15 = L"m_DeviceCreationLock.IsExclusiveOwner()";
    goto LABEL_23;
  }
LABEL_5:
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(*((DXGPROCESS **)a2 + 5), *((_DWORD *)this[2] + 60));
    v8 = RenderAdapterInfo;
    if ( RenderAdapterInfo )
    {
      if ( *((struct DXGDEVICE **)RenderAdapterInfo + 5) == a2 )
      {
        DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(this[216], a2);
        *((_QWORD *)v8 + 5) = 0LL;
      }
    }
  }
  v9 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 349);
  if ( v9 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v9, a2) )
  {
    WdLogSingleEntry1(1LL, 1737LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!GetAdapter()->IsDisplayAdapter() || (!GetAdapter()->GetDisplayCore()->IsVidPnSourceOwner(pDevice))",
      1737LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry1(1LL, 1743LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1743LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  if ( v10[1] != (struct DXGDEVICE *)((char *)a2 + 24)
    || (v11 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4), *v11 != (struct DXGDEVICE *)((char *)a2 + 24))
    || (*v11 = (struct DXGDEVICE *)v10,
        v10[1] = (struct DXGDEVICE *)v11,
        DXGDEVICE::DestroyAllDeviceState(a2, a3),
        v12 = *(struct DXGDEVICE **)a2,
        *(struct DXGDEVICE **)(*(_QWORD *)a2 + 8LL) != a2)
    || (v13 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v13 != a2) )
  {
    __fastfail(3u);
  }
  *v13 = v12;
  *((_QWORD *)v12 + 1) = v13;
  DXGDEVICE::`scalar deleting destructor'(a2);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
