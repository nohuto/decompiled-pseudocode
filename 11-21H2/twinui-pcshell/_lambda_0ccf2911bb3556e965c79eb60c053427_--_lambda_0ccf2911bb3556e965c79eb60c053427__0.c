/*
 * XREFs of _lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427__0 @ 0x1801B6564
 * Callers:
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator() @ 0x1801B6B30 (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z @ 0x18049BB9C (--0-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z.c)
 *     ??0?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18054EE80 (--0-$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427__0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 *a6,
        __int64 *a7,
        _QWORD *a8,
        _QWORD *a9,
        int a10,
        _QWORD *a11)
{
  _QWORD *v12; // r10
  _OWORD *v13; // r11
  __int64 v14; // rdx
  __int64 v15; // rcx

  wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>();
  *(_QWORD *)(a1 + 8) = *v12;
  *(_OWORD *)(a1 + 16) = *v13;
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
