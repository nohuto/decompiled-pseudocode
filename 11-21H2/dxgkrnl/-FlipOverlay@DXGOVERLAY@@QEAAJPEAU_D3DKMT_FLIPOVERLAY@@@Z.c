/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C03291E0
 * Callers:
 *     DxgkFlipOverlay @ 0x1C032AE90 (DxgkFlipOverlay.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1C02C9858 (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
{
  __int64 (__fastcall **v4)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  DXGOVERLAY *v6; // rdx
  __int64 v7; // rdi
  ULONG_PTR Count; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  UINT PrivateDriverDataSize; // eax
  void *v12; // rcx
  __int64 hSource; // r8
  size_t v14; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v16; // r9
  _DXGKARG_FLIPOVERLAY v17; // [rsp+50h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+A0h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 402LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      402LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v4[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(1LL, 403LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 403LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 8) == -1 )
    return 0LL;
  memset(&v17.SrcPhysicalAddress, 0, 32);
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (DXGALLOCATIONREFERENCE *)&v18, a2->hSource);
  v6 = (DXGOVERLAY *)*((_QWORD *)this + 2);
  if ( !v18 )
    goto LABEL_28;
  if ( *(_QWORD *)(*(_QWORD *)(v18[1].Count + 16) + 16LL) == *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) )
  {
    Count = v18[6].Count;
    if ( (*(_DWORD *)(Count + 4) & 8) != 0 && (v18[9].Count & 0x800) != 0 )
    {
      v17.hSource = *(HANDLE *)(Count + 16);
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 2800LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v9 + 648) + 8LL)
                                                                              + 224LL))(
        *(_QWORD *)(v9 + 656),
        *(_QWORD *)(v18[6].Count + 8),
        &v17.SrcSegmentId,
        &v17.SrcPhysicalAddress,
        0LL);
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      if ( PrivateDriverDataSize && a2->pPrivateDriverData )
      {
        v17.PrivateDriverDataSize = a2->PrivateDriverDataSize;
        v12 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 256LL, v10);
        v17.pPrivateDriverData = v12;
        if ( !v12 )
        {
          hSource = v17.PrivateDriverDataSize;
          v7 = -1073741801LL;
          v6 = this;
LABEL_29:
          WdLogSingleEntry3(3LL, v6, hSource, v7);
          goto LABEL_30;
        }
        v14 = v17.PrivateDriverDataSize;
        pPrivateDriverData = a2->pPrivateDriverData;
        v16 = (ULONG64)pPrivateDriverData + v17.PrivateDriverDataSize;
        if ( v16 < (unsigned __int64)pPrivateDriverData || v16 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, pPrivateDriverData, v14);
      }
      else
      {
        a2->PrivateDriverDataSize = 0;
        a2->pPrivateDriverData = 0LL;
      }
      LODWORD(v7) = ADAPTER_RENDER::DdiFlipOverlay(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2800LL),
                      *((void **)this + 5),
                      &v17);
      if ( (int)v7 >= 0 )
        *((_QWORD *)this + 6) = v18;
      operator delete[](v17.pPrivateDriverData);
      goto LABEL_30;
    }
LABEL_28:
    hSource = a2->hSource;
    v7 = -1073741811LL;
    goto LABEL_29;
  }
  LODWORD(v7) = -1073741811;
  WdLogSingleEntry3(2LL, v6, v18, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    *((_QWORD *)this + 2),
    (__int64)v18,
    -1073741811LL,
    0LL,
    0LL);
LABEL_30:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18);
  return (unsigned int)v7;
}
