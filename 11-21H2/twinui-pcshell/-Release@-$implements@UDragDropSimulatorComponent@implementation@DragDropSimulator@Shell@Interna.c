/*
 * XREFs of ?Release@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAKXZ @ 0x1800FA170
 * Callers:
 *     ?Release@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@W7EAAKXZ @ 0x18020DC50 (-Release@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@_ea_18020DC50.c)
 *     ?Release@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@WBA@EAAKXZ @ 0x18020DC70 (-Release@-$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@WBA@EAAK.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800FA2A4 (-subtract_reference@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::Release(
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
      (*(void (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v2;
}
