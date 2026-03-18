/*
 * XREFs of ??1CLegacySwapChain@@MEAA@XZ @ 0x1800FD374
 * Callers:
 *     ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x1800FBFBC (--_GCLegacySwapChain@@MEAAPEAXI@Z.c)
 *     ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x18029FAAC (--_ECLegacyStereoSwapChain@@UEAAPEAXI@Z.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x1802A05B4 (--1CConversionSwapChain@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007769C (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800E7A20 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuf.c)
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x1800FCB04 (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::~CLegacySwapChain(CLegacySwapChain *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  CD3DDevice *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rcx
  CSwapChainBuffer **v12; // rcx

  v2 = (char *)this + 216;
  *(_QWORD *)this = &CLegacySwapChain::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &CLegacySwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 27) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 8) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 360;
  v4 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 376;
  v5 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v5 + 4) = v5 - 400;
  v6 = *(int *)(*((_QWORD *)this + 1) + 16LL);
  *(_DWORD *)((char *)this + v6 + 4) = v6 - 424;
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v7 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v7);
  v8 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v8 )
  {
    CD3DDevice::AdvanceUnpin(v8, *(struct _LUID *)((char *)this + 116), *((_DWORD *)this + 28), 1u);
    *(_BYTE *)(*((_QWORD *)this + 10) + 1508LL) = 1;
  }
  v9 = *((_QWORD *)this + 16);
  if ( v9 )
  {
    v10 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 48LL))(v10, v2);
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  if ( v11 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v11);
  v12 = (CSwapChainBuffer **)*((_QWORD *)this + 31);
  if ( v12 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(v12, *((CSwapChainBuffer ***)this + 32));
    std::_Deallocate<16,0>(
      *((void **)this + 31),
      (*((_QWORD *)this + 33) - *((_QWORD *)this + 31)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 28);
  COverlaySwapChainBase::~COverlaySwapChainBase(this);
}
