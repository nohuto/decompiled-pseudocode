/*
 * XREFs of ?find_interface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D94D0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@45@@impl@winrt@@SAPEAXPEBUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9DB8 (--$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winr.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  if ( !winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
  {
    if ( winrt::operator==(v2, &winrt::impl::guid_v<IServiceProvider>) )
      return (v4 + 8) & -(__int64)(v4 != 0);
    else
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::impl::iid_finder>(
               v4,
               &v6);
  }
  return v3;
}
