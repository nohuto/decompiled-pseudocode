/*
 * XREFs of ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18001EBEC
 * Callers:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18001E0E8 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x18001DEE0 (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001ED88 (--$_Emplace_reallocate@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18004DC80 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnViewAdded(CSplashScreen *this, struct ITaskWindow *a2)
{
  __int64 *v4; // rdx
  int (__fastcall *v5)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v8[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  if ( v4 == *((__int64 **)this + 14) )
  {
    std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
      (char *)this + 96,
      v4,
      v8);
  }
  else
  {
    *v4 = 0LL;
    if ( v4 != v8 )
    {
      *v4 = (__int64)a2;
      v8[0] = 0LL;
    }
    *((_QWORD *)this + 13) += 8LL;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
  if ( CSplashScreen::_CanSendDismissedEvent(this) )
  {
    v8[0] = 0LL;
    v5 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
    if ( v5(a2, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, v8) >= 0 )
    {
      CSplashScreen::_get_ImageLocationInternal(this, &v10);
      v6 = *(_QWORD *)v8[0];
      v9 = v10;
      (*(void (__fastcall **)(__int64, __int128 *))(v6 + 48))(v8[0], &v9);
      LOBYTE(v7) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8[0] + 56LL))(v8[0], v7);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  }
}
