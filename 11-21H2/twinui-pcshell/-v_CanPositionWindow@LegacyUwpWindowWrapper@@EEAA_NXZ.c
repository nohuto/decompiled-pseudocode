/*
 * XREFs of ?v_CanPositionWindow@LegacyUwpWindowWrapper@@EEAA_NXZ @ 0x180404900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall LegacyUwpWindowWrapper::v_CanPositionWindow(LegacyUwpWindowWrapper *this)
{
  return (*((_DWORD *)this + 87) & 0x10) == 0;
}
