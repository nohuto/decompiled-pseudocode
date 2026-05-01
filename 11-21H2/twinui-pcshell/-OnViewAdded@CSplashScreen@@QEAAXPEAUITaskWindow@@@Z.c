/*
 * XREFs of ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18009CDF4
 * Callers:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18009CF2C (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18006B5E8 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18009CC4C (--$_Emplace_reallocate@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x18009CF0C (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnViewAdded(CSplashScreen *this, struct ITaskWindow *a2)
{
  __int64 *v4; // rdx
  int (__fastcall *v5)(struct ITaskWindow *, GUID *, struct ITaskWindow **); // rbx
  __int64 v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  struct ITaskWindow *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  if ( v4 == *((__int64 **)this + 14) )
  {
    std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
      (__int64 *)this + 12,
      (__int64)v4,
      (char *)&v8);
  }
  else
  {
    *v4 = 0LL;
    if ( v4 != (__int64 *)&v8 )
    {
      *v4 = (__int64)a2;
      v8 = 0LL;
    }
    *((_QWORD *)this + 13) += 8LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  if ( CSplashScreen::_CanSendDismissedEvent(this) )
  {
    v8 = 0LL;
    v5 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, struct ITaskWindow **))(*(_QWORD *)a2 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    if ( v5(a2, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v8) >= 0 )
    {
      CSplashScreen::_get_ImageLocationInternal((__int64)this, (__int64)&v7);
      (*(void (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(struct ITaskWindow *, __int64))(*(_QWORD *)v8 + 56LL))(v8, v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
}
