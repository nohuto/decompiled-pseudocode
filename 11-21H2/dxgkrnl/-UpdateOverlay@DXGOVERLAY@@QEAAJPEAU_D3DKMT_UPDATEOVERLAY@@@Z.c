/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C0329C80
 * Callers:
 *     DxgkUpdateOverlay @ 0x1C032BB70 (DxgkUpdateOverlay.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C02CDBAC (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(struct _EX_RUNDOWN_REF *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 (__fastcall **v4)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  struct _EX_RUNDOWN_REF *Count; // rdx
  ULONG_PTR v7; // r10
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  UINT PrivateDriverDataSize; // eax
  void *v13; // rcx
  __int64 hAllocation; // r8
  size_t v15; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v17; // r9
  struct _EX_RUNDOWN_REF *v18[2]; // [rsp+50h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v19; // [rsp+60h] [rbp-68h] BYREF

  v18[1] = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 274LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      274LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL))
    || v4[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(1LL, 275LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 275LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( LODWORD(this[4].Count) == -1 )
    return 0LL;
  memset(&v19, 0, sizeof(v19));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(this[2].Count + 40),
    (DXGALLOCATIONREFERENCE *)v18,
    a2->OverlayInfo.hAllocation);
  if ( !v18[0] )
  {
    Count = (struct _EX_RUNDOWN_REF *)this[2].Count;
    goto LABEL_30;
  }
  v7 = this[2].Count;
  if ( *(_QWORD *)(*(_QWORD *)(v18[0][1].Count + 16) + 16LL) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) )
  {
    v9 = v18[0][6].Count;
    if ( (*(_DWORD *)(v9 + 4) & 8) != 0 && (v18[0][9].Count & 0x800) != 0 )
    {
      v19.OverlayInfo.hAllocation = *(HANDLE *)(v9 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 2800LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 648) + 8LL)
                                                                              + 224LL))(
        *(_QWORD *)(v10 + 656),
        *(_QWORD *)(v18[0][6].Count + 8),
        &v19.OverlayInfo.SegmentId,
        &v19.OverlayInfo.PhysicalAddress,
        0LL);
      v19.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v19.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
      {
        v19.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
        v13 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 256LL, v11);
        v19.OverlayInfo.pPrivateDriverData = v13;
        if ( !v13 )
        {
          hAllocation = v19.OverlayInfo.PrivateDriverDataSize;
          v8 = -1073741801LL;
          Count = this;
LABEL_31:
          WdLogSingleEntry3(3LL, Count, hAllocation, v8);
          goto LABEL_32;
        }
        v15 = v19.OverlayInfo.PrivateDriverDataSize;
        pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
        v17 = (ULONG64)pPrivateDriverData + v19.OverlayInfo.PrivateDriverDataSize;
        if ( v17 < (unsigned __int64)pPrivateDriverData || v17 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, pPrivateDriverData, v15);
      }
      else
      {
        a2->OverlayInfo.PrivateDriverDataSize = 0;
        a2->OverlayInfo.pPrivateDriverData = 0LL;
      }
      LODWORD(v8) = ADAPTER_RENDER::DdiUpdateOverlay(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2800LL),
                      this[5].Ptr,
                      &v19);
      if ( (int)v8 >= 0 )
        this[6].Count = (ULONG_PTR)v18[0];
      operator delete[](v19.OverlayInfo.pPrivateDriverData);
      goto LABEL_32;
    }
    Count = (struct _EX_RUNDOWN_REF *)this[2].Count;
LABEL_30:
    hAllocation = a2->OverlayInfo.hAllocation;
    v8 = -1073741811LL;
    goto LABEL_31;
  }
  LODWORD(v8) = -1073741811;
  WdLogSingleEntry3(2LL, this[2].Count, v18[0], -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    this[2].Count,
    (__int64)v18[0],
    -1073741811LL,
    0LL,
    0LL);
LABEL_32:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v18);
  return (unsigned int)v8;
}
