/*
 * XREFs of ?GetApplicationId@UwpWindowWrapperBase@@UEAAPEBGXZ @ 0x180414A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall UwpWindowWrapperBase::GetApplicationId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[36], 0LL);
}
