/*
 * XREFs of ?IsModeActive@HotkeyHandler@@UEAA_NXZ @ 0x1801C4770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall HotkeyHandler::IsModeActive(HotkeyHandler *this)
{
  return *((_BYTE *)this + 80);
}
