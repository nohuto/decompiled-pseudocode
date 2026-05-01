/*
 * XREFs of _lambda_52bfc6edea7729ed62f4f356328b854f_::_lambda_52bfc6edea7729ed62f4f356328b854f__0 @ 0x180216BF8
 * Callers:
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x1806105A4 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??0?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z @ 0x180555148 (--0-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z.c)
 *     ??0?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopGestureWindow@@@Z @ 0x18060A614 (--0-$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualD.c)
 */

__int64 __fastcall lambda_52bfc6edea7729ed62f4f356328b854f_::_lambda_52bfc6edea7729ed62f4f356328b854f__0(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        __int128 *a4,
        __int64 *a5,
        __int64 *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        int a11,
        _QWORD *a12)
{
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx

  wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
    a1,
    *a2);
  v15 = *a4;
  *(_OWORD *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 24) = v15;
  v16 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 40) = v16;
  v17 = *a6;
  *a6 = 0LL;
  *(_QWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a1 + 56) = *a7;
  *a7 = 0LL;
  wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>(
    a1 + 64,
    *a8);
  *(_QWORD *)(a1 + 72) = *a9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)(a1 + 80),
    a10);
  *(_DWORD *)(a1 + 96) = a11;
  wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>(
    a1 + 104,
    *a12);
  return a1;
}
