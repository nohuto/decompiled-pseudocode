/*
 * XREFs of ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1805A7BDC
 * Callers:
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1805A9028 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1805A9C28 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074D98 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1805A6B6C (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 *     ??R?$_Func_class@V?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@$$V@std@@QEBA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805A7524 (--R-$_Func_class@V-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall KioskPositioner::CreateApplicationViewOperation(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v16[24]; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 *v18; // [rsp+98h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h]

  v19 = a4;
  v18 = a2;
  v17 = a1;
  wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>((__int64 *)&v18);
  v7 = (__int64)v18;
  *((_DWORD *)v18 + 29) = 255;
  *(_DWORD *)(v7 + 120) = a3;
  *((_DWORD *)v18 + 31) = 0;
  *((_DWORD *)v18 + 45) = 1;
  *((_DWORD *)v18 + 50) = 0;
  v8 = (__int64)v18;
  *(__int64 *)((char *)v18 + 220) = 0LL;
  *(_QWORD *)(v8 + 228) = 0LL;
  v9 = (__int64)v18;
  *(__int64 *)((char *)v18 + 204) = 0LL;
  *(_QWORD *)(v9 + 212) = 0LL;
  v10 = (__int64)v18;
  *((_BYTE *)v18 + 236) = 1;
  *(_QWORD *)(v10 + 240) = 0LL;
  *(_QWORD *)v16 = 0LL;
  *(__m128i *)&v16[8] = _mm_load_si128((const __m128i *)&_xmm);
  v11 = (__int64)v18;
  *(_OWORD *)((char *)v18 + 132) = 0LL;
  *(_OWORD *)(v11 + 148) = *(_OWORD *)v16;
  *(_OWORD *)(v11 + 164) = *(unsigned __int64 *)&v16[16];
  *(_BYTE *)(v11 + 128) = 1;
  std::_Func_class<wil::com_ptr_t<IApplicationViewTitlebarConfiguration,wil::err_exception_policy>,>::operator()(
    a4,
    (__int64)&v17);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=(v18 + 24, v17);
  v12 = (__int64)v18;
  v18 = 0LL;
  *a2 = v12;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v18);
  v14 = *(_QWORD *)(a4 + 56);
  if ( v14 )
  {
    LOBYTE(v13) = v14 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a2;
}
