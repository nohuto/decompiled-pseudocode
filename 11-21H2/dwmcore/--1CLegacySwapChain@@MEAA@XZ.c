/*
 * XREFs of ??1CLegacySwapChain@@MEAA@XZ @ 0x18001C360
 * Callers:
 *     ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x18001BD80 (--_GCLegacySwapChain@@MEAAPEAXI@Z.c)
 *     ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x180290710 (--_ECLegacyStereoSwapChain@@UEAAPEAXI@Z.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x180291338 (--1CConversionSwapChain@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x18001C09C (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800EE358 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::~CLegacySwapChain(CLegacySwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CD3DDevice *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  CD3DDevice *v11; // rcx

  *(_QWORD *)this = &CLegacySwapChain::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 312;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 328;
  v4 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 352;
  v5 = *(int *)(*((_QWORD *)this + 3) + 16LL);
  *(_DWORD *)((char *)this + v5 + 20) = v5 - 376;
  v6 = *((_QWORD *)this + 40);
  *((_QWORD *)this + 40) = 0LL;
  if ( v6 )
    CMILRefCountBaseT<IUnknown>::InternalRelease();
  v7 = (CD3DDevice *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    CD3DDevice::AdvanceUnpin(v7, *(struct _LUID *)((char *)this + 168), *((unsigned int *)this + 52), 1u);
    *(_BYTE *)(*((_QWORD *)this + 8) + 1508LL) = 1;
  }
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
  {
    v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, (char *)this + 56);
  }
  if ( *((_QWORD *)this + 40) )
    CMILRefCountBaseT<IUnknown>::InternalRelease();
  FastRegion::CRegion::FreeMemory((CLegacySwapChain *)((char *)this + 240));
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(v10, *((_QWORD *)this + 14));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 13),
      (*((_QWORD *)this + 15) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 96);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 88);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 80);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 72);
  v11 = (CD3DDevice *)*((_QWORD *)this + 8);
  if ( v11 )
    CD3DDevice::Release(v11);
  CDeviceResource::~CDeviceResource((CLegacySwapChain *)((char *)this + 16));
}
