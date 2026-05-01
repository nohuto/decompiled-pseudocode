/*
 * XREFs of ?OpenPropertyStoreInternal@CImmersiveApp@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180049070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall CImmersiveApp::OpenPropertyStoreInternal(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void **v6; // rbx
  HRESULT result; // eax

  *a4 = 0LL;
  v6 = (void **)(a1 + 608);
  if ( *(_QWORD *)(a1 + 608) )
    return (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))*v6)(*v6, a3, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 608));
  result = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, v6);
  if ( result >= 0 )
    return (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))*v6)(*v6, a3, a4);
  return result;
}
