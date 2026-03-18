/*
 * XREFs of ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C034A588
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C034988C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1DXGFIXEDQUEUE@@QEAA@XZ @ 0x1C005AB6C (--1DXGFIXEDQUEUE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A370 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainGlobal(DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi
  void *v6; // rcx
  void *v7; // rdi
  void *v8; // rcx
  struct DXGPROCESS *Current; // rax

  if ( *((_QWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1778LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ProducerInfo.pNtProcess == nullptr",
      1778LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 14) )
  {
    WdLogSingleEntry1(1LL, 1779LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ConsumerInfo.pNtProcess == nullptr",
      1779LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 14); ++i )
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
      this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 8) + 112LL * i));
  v6 = (void *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    operator delete[](v6);
    *((_QWORD *)this + 8) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 27);
  if ( v7 )
  {
    DXGFIXEDQUEUE::~DXGFIXEDQUEUE(*((DXGFIXEDQUEUE **)this + 27));
    operator delete(v7);
    *((_QWORD *)this + 27) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 28);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 28) = 0LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)v8, a2, a3, a4);
  WdLogSingleEntry2(4LL, this, Current);
}
