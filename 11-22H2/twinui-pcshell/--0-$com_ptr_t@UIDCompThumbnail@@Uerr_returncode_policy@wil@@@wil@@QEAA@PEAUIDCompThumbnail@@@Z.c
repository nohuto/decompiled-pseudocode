/*
 * XREFs of ??0?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z @ 0x180555148
 * Callers:
 *     _lambda_52bfc6edea7729ed62f4f356328b854f_::_lambda_52bfc6edea7729ed62f4f356328b854f__0 @ 0x180216BF8 (_lambda_52bfc6edea7729ed62f4f356328b854f_--_lambda_52bfc6edea7729ed62f4f356328b854f__0.c)
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::_lambda_57ccf274084369bdcaf7e64bf986fb01__0 @ 0x180216D44 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--_lambda_57ccf274084369bdcaf7e64bf986fb01__0.c)
 *     ??$_Emplace_reallocate@PEAUIDCompThumbnail@@@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAPEAUIDCompThumbnail@@@Z @ 0x180554C44 (--$_Emplace_reallocate@PEAUIDCompThumbnail@@@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_return.c)
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x180556914 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x18055779C (-CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV-$com_ptr_t@UIDCompThumbnail@@Uerr_retur.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x180557AF4 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x1806105A4 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
