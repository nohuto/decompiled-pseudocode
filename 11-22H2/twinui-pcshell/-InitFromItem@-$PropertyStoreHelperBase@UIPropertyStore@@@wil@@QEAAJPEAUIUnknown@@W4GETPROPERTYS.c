/*
 * XREFs of ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1806A2E8C
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x18069F978 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A1FC4 (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1806A2560 (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1806A776C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x18079AEB0 (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v10 = v9(a2, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v14);
  if ( v10 >= 0 )
  {
    v11 = v14;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v14 + 80LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
    v10 = v12(v11, a4, a5, a3, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, a1);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return (unsigned int)v10;
}
