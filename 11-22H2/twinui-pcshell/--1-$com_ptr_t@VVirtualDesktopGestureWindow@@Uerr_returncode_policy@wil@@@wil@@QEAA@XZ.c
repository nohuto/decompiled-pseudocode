/*
 * XREFs of ??1?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18060ABC4
 * Callers:
 *     _lambda_52bfc6edea7729ed62f4f356328b854f_::__lambda_52bfc6edea7729ed62f4f356328b854f_ @ 0x180216FE4 (_lambda_52bfc6edea7729ed62f4f356328b854f_--__lambda_52bfc6edea7729ed62f4f356328b854f_.c)
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::__lambda_57ccf274084369bdcaf7e64bf986fb01_ @ 0x180217040 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--__lambda_57ccf274084369bdcaf7e64bf986fb01_.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x1806105A4 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 16LL))(v1 + 16);
  return result;
}
