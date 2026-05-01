/*
 * XREFs of ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAKXZ @ 0x1803B5B70
 * Callers:
 *     ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@W7EAAKXZ @ 0x1801F6F60 (-Release@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UII.c)
 *     ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAKXZ @ 0x1801F6F70 (-Release@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService_ea_1801F6F70.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800FA2A4 (-subtract_reference@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServ.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(
        __int64 a1)
{
  volatile __int64 *v1; // rbx
  unsigned int v2; // edi

  v1 = (volatile __int64 *)(a1 + 32);
  v2 = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::subtract_reference(a1 + 32);
  if ( !v2 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile __int64 *, _QWORD))(*v1 + 8))(v1, v2 + 1);
  }
  return v2;
}
