/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180060D68
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x1800602B0 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180060834 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180060D28 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18006356C (--1CRegionShape@@UEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800E9914 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>'};
  *((_QWORD *)this + 12) = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 14) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 13) + 4LL) + 104) = &CGdiSpriteBitmap::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 13) + 4LL);
  *(_DWORD *)((char *)this + v2 + 100) = v2 - 360;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3);
  v4 = (void *)*((_QWORD *)this + 54);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>>(v4);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 54),
      (*((_QWORD *)this + 56) - *((_QWORD *)this + 54)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
  }
  v5 = *((_QWORD *)this + 53);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  CRegionShape::~CRegionShape((CGdiSpriteBitmap *)((char *)this + 240));
  FastRegion::CRegion::FreeMemory((CGdiSpriteBitmap *)((char *)this + 168));
  CResource::~CResource(this);
}
