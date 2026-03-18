/*
 * XREFs of ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4
 * Callers:
 *     ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x180020CC0 (--_GCD3DDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800059FC (-clear_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDev.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x180021788 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800217BC (--1CD2DContext@@UEAA@XZ.c)
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180023F74 (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x18007F718 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800F3678 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1800F8098 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x180180BF8 (McTemplateU0p_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x18027CAB8 (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDevice::~CD3DDevice(CD3DDevice *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  void *v5; // rdi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  int v9; // edi
  void *v10; // rcx
  void *v11; // rcx
  int v12; // edi
  void *v13; // rcx
  __int64 v14; // rcx
  CD3DDevice **v15; // rdi
  CD3DDevice *v16; // rcx
  __int64 v17; // r8
  void *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CD3DDevice::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CD3DDevice::`vftable'{for `CD2DContext'};
  CD3DDevice::ProcessPendingUnpin(this, 1);
  CD3DDevice::DestroyAllResources(this);
  v2 = (char *)*((_QWORD *)this + 117);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 117) = 0LL;
  }
  v3 = *((_QWORD *)this + 70);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
    v4 = *((_QWORD *)this + 70);
    *((_QWORD *)this + 70) = 0LL;
    if ( *((_QWORD *)this + 57) )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    *((_QWORD *)this + 57) = v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p_EventWriteTransfer(v3, &EVTDESC_HWDEVICE_DESTROY, this);
  `vector destructor iterator'(
    (char *)this + 2272,
    8uLL,
    4uLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 2264,
    8uLL,
    1uLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1880,
    8uLL,
    0x30uLL,
    (void (*)(void *))wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1688,
    8uLL,
    0x18uLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1592,
    8uLL,
    0xCuLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  v5 = (void *)*((_QWORD *)this + 198);
  if ( v5 )
  {
    CSurfaceShaderComposer::~CSurfaceShaderComposer(*((CSurfaceShaderComposer **)this + 198));
    operator delete(v5, 0x80uLL);
  }
  v6 = (void *)*((_QWORD *)this + 195);
  if ( v6 )
  {
    v25 = 0;
    if ( *((int *)this + 394) > 0 )
    {
      do
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 196) + 8LL * v25++));
      while ( v25 < *((_DWORD *)this + 394) );
      v6 = (void *)*((_QWORD *)this + 195);
    }
    DefaultHeap::Free(v6);
    *((_QWORD *)this + 195) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 196);
  if ( v7 )
  {
    DefaultHeap::Free(v7);
    *((_QWORD *)this + 196) = 0LL;
  }
  *((_DWORD *)this + 394) = 0;
  v8 = (void *)*((_QWORD *)this + 192);
  if ( v8 )
  {
    v9 = 0;
    if ( *((int *)this + 388) > 0 )
    {
      do
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 193) + 16LL * v9++));
      while ( v9 < *((_DWORD *)this + 388) );
      v8 = (void *)*((_QWORD *)this + 192);
    }
    DefaultHeap::Free(v8);
    *((_QWORD *)this + 192) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 193);
  if ( v10 )
  {
    DefaultHeap::Free(v10);
    *((_QWORD *)this + 193) = 0LL;
  }
  *((_DWORD *)this + 388) = 0;
  v11 = (void *)*((_QWORD *)this + 189);
  if ( v11 )
  {
    v12 = 0;
    if ( *((int *)this + 382) > 0 )
    {
      do
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 190) + 8LL * v12++));
      while ( v12 < *((_DWORD *)this + 382) );
      v11 = (void *)*((_QWORD *)this + 189);
    }
    DefaultHeap::Free(v11);
    *((_QWORD *)this + 189) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 190);
  if ( v13 )
  {
    DefaultHeap::Free(v13);
    *((_QWORD *)this + 190) = 0LL;
  }
  *((_DWORD *)this + 382) = 0;
  v14 = *((_QWORD *)this + 181);
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(v14, *((_QWORD *)this + 182));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 181),
      (*((_QWORD *)this + 183) - *((_QWORD *)this + 181)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 181) = 0LL;
    *((_QWORD *)this + 182) = 0LL;
    *((_QWORD *)this + 183) = 0LL;
  }
  v15 = (CD3DDevice **)((char *)this + 1200);
  v16 = (CD3DDevice *)*((_QWORD *)this + 150);
  v17 = (__int64)(*((_QWORD *)this + 151) - (_QWORD)v16) >> 5;
  if ( v17 )
  {
    detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 150,
      0LL,
      v17);
    v16 = *v15;
  }
  *v15 = 0LL;
  if ( v16 == (CD3DDevice *)((char *)this + 1224) )
    v16 = 0LL;
  DefaultHeap::Free(v16);
  *((_QWORD *)this + 138) = &CD3DResourceManager::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 1080);
  v18 = (void *)*((_QWORD *)this + 129);
  if ( v18 )
  {
    CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>(*((_QWORD *)this + 129));
    operator delete(v18, 0x68uLL);
  }
  v19 = *((_QWORD *)this + 126);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *((_QWORD *)this + 125);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = *((_QWORD *)this + 124);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = *((_QWORD *)this + 123);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 72);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 71);
  v23 = *((_QWORD *)this + 70);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 69);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 68);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 67);
  v24 = *((_QWORD *)this + 64);
  if ( v24 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(v24, *((_QWORD *)this + 65));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 64),
      (*((_QWORD *)this + 66) - *((_QWORD *)this + 64)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 464);
  CD2DContext::~CD2DContext((CD3DDevice *)((char *)this + 16));
  CD3DResourceLeakChecker::~CD3DResourceLeakChecker((CD3DDevice *)((char *)this + 456));
}
