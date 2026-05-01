/*
 * XREFs of _lambda_57ccf274084369bdcaf7e64bf986fb01_::_lambda_57ccf274084369bdcaf7e64bf986fb01__0 @ 0x180216D44
 * Callers:
 *     _lambda_52bfc6edea7729ed62f4f356328b854f_::operator() @ 0x1802173FC (_lambda_52bfc6edea7729ed62f4f356328b854f_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z @ 0x180555148 (--0-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z.c)
 *     ??0?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopGestureWindow@@@Z @ 0x18060A614 (--0-$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_57ccf274084369bdcaf7e64bf986fb01_::_lambda_57ccf274084369bdcaf7e64bf986fb01__0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        __int64 *a6,
        __int64 *a7,
        _QWORD *a8,
        _QWORD *a9,
        int a10,
        _QWORD *a11)
{
  __int64 v14; // rdx
  __int64 v15; // rcx

  wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
    a1,
    *a2);
  *(_QWORD *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 16) = *a4;
  *(_OWORD *)(a1 + 32) = *a5;
  v14 = *a6;
  *a6 = 0LL;
  *(_QWORD *)(a1 + 48) = v14;
  v15 = *a7;
  *(_QWORD *)(a1 + 56) = *a7;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>(
    a1 + 64,
    *a8);
  *(_QWORD *)(a1 + 72) = *a9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  *(_DWORD *)(a1 + 80) = a10;
  wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>(
    a1 + 88,
    *a11);
  return a1;
}
