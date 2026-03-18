/*
 * XREFs of ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0334828
 * Callers:
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0194440 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B7900 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C03347E4 (--1DXGOVERLAY@@QEAA@XZ.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1C0335364 (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C02C1A08 (-ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C02C6DA8 (-DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 (__fastcall **v2)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v3; // r8
  void *v4; // rdx
  unsigned int v5; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 188LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      188LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v2[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(1LL, 189LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 189LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 6) = 0LL;
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2928LL),
      v4,
      v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_DWORD *)this + 8);
  if ( v5 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2928LL),
      v5);
    *((_DWORD *)this + 8) = -1;
  }
}
