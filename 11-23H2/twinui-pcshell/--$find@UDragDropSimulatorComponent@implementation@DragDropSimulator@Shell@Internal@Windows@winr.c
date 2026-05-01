/*
 * XREFs of ??$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@45@@impl@winrt@@SAPEAXPEBUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9DB8
 * Callers:
 *     ?find_interface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D94D0 (-find_interface@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax

  if ( !winrt::operator==(*a2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
  {
    if ( winrt::operator==(v2, &winrt::impl::guid_v<IInspectable>) )
    {
      v8 = v5 + 24;
    }
    else
    {
      if ( !winrt::operator==(
              v4,
              winrt::impl::guid_v<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>) )
        return v6;
      v8 = v5 + 88;
    }
    return v8 & -(__int64)(v5 != 0);
  }
  return (v3 + 16) & -(__int64)(v3 != 0);
}
