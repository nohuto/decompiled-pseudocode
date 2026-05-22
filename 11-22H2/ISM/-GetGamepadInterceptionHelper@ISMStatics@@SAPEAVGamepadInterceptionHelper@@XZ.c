/*
 * XREFs of ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004B18C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180071D10 (-OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 *     ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180071F40 (-OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800DBB24 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x1800DC210 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180151040 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801A361C (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x1801A6348 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005A954 (-InternalRelease@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAA.c)
 *     ?Create@GamepadInterceptionHelper@@SA?AV?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ @ 0x18006A864 (-Create@GamepadInterceptionHelper@@SA-AV-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ.c)
 */

struct GamepadInterceptionHelper *ISMStatics::GetGamepadInterceptionHelper(void)
{
  struct GamepadInterceptionHelper *result; // rax
  struct GamepadInterceptionHelper **v1; // rax
  struct GamepadInterceptionHelper *v2; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_gamepadInterceptionHelper;
  if ( !ISMStatics::s_gamepadInterceptionHelper )
  {
    v1 = (struct GamepadInterceptionHelper **)GamepadInterceptionHelper::Create(&v3);
    v2 = *v1;
    *v1 = 0LL;
    ISMStatics::s_gamepadInterceptionHelper = v2;
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v3);
    return ISMStatics::s_gamepadInterceptionHelper;
  }
  return result;
}
