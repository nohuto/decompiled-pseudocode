/*
 * XREFs of ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x1800DBEF0
 * Callers:
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x1800DC210 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 * Callees:
 *     <none>
 */

void __fastcall GameControllerRawInputProvider::FreeInputBuffer(
        GameControllerRawInputProvider *this,
        const struct GameInputRoutedInputBuffer *a2)
{
  operator delete((char *)a2 - 88);
}
