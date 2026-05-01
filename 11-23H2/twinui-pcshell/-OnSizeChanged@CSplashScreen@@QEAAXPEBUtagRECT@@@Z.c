/*
 * XREFs of ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18004DB5C
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180024A4C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18004DC80 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnSizeChanged(CSplashScreen *this, const struct tagRECT *a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, GUID *, __int64 **); // rbx
  __int64 v7; // rax
  __int64 *v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF

  *((float *)this + 34) = (float)(a2->bottom - a2->top);
  *((float *)this + 33) = (float)(a2->right - a2->left);
  CSplashScreen::_get_ImageLocationInternal(this, &v11);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  while ( v3 != v4 )
  {
    v9 = *v3;
    v5 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v8 = 0LL;
    v6 = *(int (__fastcall **)(__int64, GUID *, __int64 **))(*(_QWORD *)v5 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    if ( v6(v5, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v8) >= 0 )
    {
      v7 = *v8;
      v10 = v11;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v7 + 48))(v8, &v10);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    ++v3;
  }
}
