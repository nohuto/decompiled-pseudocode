/*
 * XREFs of ??$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C83AC
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800C8140 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800C8450 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,enum DXGI_COLOR_SPACE_TYPE,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  unsigned __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx

  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*a3 - *a1) >> 3);
  v11 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
          a1,
          v9);
  *(_DWORD *)v11 = a4;
  *(_DWORD *)(v11 + 4) = a5;
  *(_DWORD *)(v11 + 8) = a6;
  v12 = *a7;
  *(_QWORD *)(v11 + 16) = *a7;
  if ( v12 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v12 + 8));
  *a2 = *a1 + 24 * v9;
  if ( *a7 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(*a7);
  return a2;
}
