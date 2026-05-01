/*
 * XREFs of ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1805A9C28
 * Callers:
 *     ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1805A867C (-HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicationView___IImmersiveMonitor___::_Do_call @ 0x1805A9F30 (std--_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicatio_ea_1805A9F30.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA?AV?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@AEAUCRect@Geometry@@@Z @ 0x1805A6BEC (--$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA-AV-$Co.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1805A7BDC (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 *     ?SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1805A9B84 (-SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall KioskPositioner::SetUwpViewFullScreen(
        KioskPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IImmersiveApplication **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-29h] BYREF
  __int64 v13; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v14[8]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v15; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  KioskPositioner::SetPositionerMonitor(this, a2, a3);
  v15 = 0LL;
  v6 = (*((__int64 (__fastcall **)(struct IImmersiveApplication **, __int128 *))*a3 + 11))(a3, &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x417,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v6,
      v12);
  wil::MakeAndInitializeOrThrow<CCommonApplicationViewPosition,Geometry::CRect &>(&v13, &v15);
  v14[0] = off_1807EA610;
  v14[1] = this;
  v14[7] = v14;
  KioskPositioner::CreateApplicationViewOperation(v7, &v12, 0, (__int64)v14);
  v8 = v12;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 80LL))(v12, v13);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v9);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 96LL))(v8, 1LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41D,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v10);
  v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64))(*a2)[40])(
          a2,
          v8);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41E,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(&v13);
}
