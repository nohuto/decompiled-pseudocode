/*
 * XREFs of ?GetExperienceId@UwpWindowWrapperBase@@UEAAPEBGXZ @ 0x180414AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall UwpWindowWrapperBase::GetExperienceId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[37], 0LL);
}
