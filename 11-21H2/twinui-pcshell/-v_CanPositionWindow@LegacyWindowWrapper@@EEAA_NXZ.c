/*
 * XREFs of ?v_CanPositionWindow@LegacyWindowWrapper@@EEAA_NXZ @ 0x1803FBA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall LegacyWindowWrapper::v_CanPositionWindow(LegacyWindowWrapper *this)
{
  return (*((_DWORD *)this + 89) & 0x10) == 0;
}
