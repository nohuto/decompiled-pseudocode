/*
 * XREFs of ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804A9AF4
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1804A95A0 (-VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDeskto.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804A9824 (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18010FDA8 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAV123@@Z @ 0x180232A34 (--4-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopItemCollection::_SetTitle(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktopItem *a2)
{
  _DWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 24);
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
              (__int64)v5,
              &_ImageBase,
              0x32D3u,
              (unsigned int)(*v3 + 1)) >= 0 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)a2 + 24LL))(a2);
    ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::operator=(
      v4,
      v5);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v5);
}
