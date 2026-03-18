/*
 * XREFs of ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180282544
 * Callers:
 *     ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180283240 (--_GCDDisplaySwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x18001C09C (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800E006C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x1802798FC (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180279984 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1802799C8 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802815E4 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$defau.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x180282874 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x1802828E4 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 */

void __fastcall CDDisplaySwapChain::~CDDisplaySwapChain(CDDisplaySwapChain *this)
{
  char *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  char **i; // rcx
  CD3DDevice *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  void *v10; // rdx
  wil::details *v11; // rcx
  CRegion **v12; // rcx
  DDisplayPrimaryBufferResources *v13; // rcx
  CD3DDevice *v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rcx

  v2 = (char *)this + 72;
  *(_QWORD *)this = &CDDisplaySwapChain::`vftable'{for `CMILCOMBaseT<IOverlaySwapChain>'};
  *((_QWORD *)this + 3) = &CDDisplaySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 8) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 9) = &CDDisplaySwapChain::`vftable'{for `IDDisplayEventListener'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CDDisplaySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 504;
  v4 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 520;
  v5 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v5 + 4) = v5 - 544;
  for ( i = (char **)xmmword_1803D39E8; i != *((char ***)&xmmword_1803D39E8 + 1) && *i != v2; ++i )
    ;
  memmove_0(i, i + 1, *((_QWORD *)&xmmword_1803D39E8 + 1) - (_QWORD)(i + 1));
  *((_QWORD *)&xmmword_1803D39E8 + 1) -= 8LL;
  if ( *((_BYTE *)this + 352) )
  {
    v7 = (CD3DDevice *)*((_QWORD *)this + 16);
    if ( v7 )
      CD3DDevice::AdvanceUnpin(v7, *(struct _LUID *)((char *)this + 324), *((unsigned int *)this + 66), 1u);
  }
  v8 = *((_QWORD *)this + 37);
  if ( v8 )
  {
    v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, (char *)this + 64);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 62);
  std::vector<unsigned char>::_Tidy((__int64)this + 472);
  v11 = (wil::details *)*((_QWORD *)this + 57);
  if ( v11 )
    wil::details::CloseHandle(v11, v10);
  v12 = (CRegion **)*((_QWORD *)this + 54);
  if ( v12 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(v12, *((CRegion ***)this + 55));
    std::_Deallocate<16,0>(
      *((void **)this + 54),
      (*((_QWORD *)this + 56) - *((_QWORD *)this + 54)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
  }
  FastRegion::CRegion::FreeMemory((void **)this + 45);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 296);
  v13 = (DDisplayPrimaryBufferResources *)*((_QWORD *)this + 34);
  if ( v13 )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
      v13,
      *((DDisplayPrimaryBufferResources **)this + 35));
    std::_Deallocate<16,0>(
      *((void **)this + 34),
      (*((_QWORD *)this + 36) - *((_QWORD *)this + 34)) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  DDisplayTargetResources::~DDisplayTargetResources((CDDisplaySwapChain *)((char *)this + 184));
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 21);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((CDDisplaySwapChain *)((char *)this + 136));
  v14 = (CD3DDevice *)*((_QWORD *)this + 16);
  if ( v14 )
    CD3DDevice::Release(v14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Free_non_head<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
    v15,
    *((_QWORD ***)this + 13));
  std::_Deallocate<16,0>(*((void **)this + 13), 0x18uLL);
  v16 = (__int64 *)*((_QWORD *)this + 10);
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v16, *((__int64 **)this + 11));
    std::_Deallocate<16,0>(
      *((void **)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  CDeviceResource::~CDeviceResource((CDDisplaySwapChain *)((char *)this + 24));
}
