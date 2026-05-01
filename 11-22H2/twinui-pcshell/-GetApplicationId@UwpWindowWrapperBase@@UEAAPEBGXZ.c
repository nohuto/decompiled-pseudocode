/*
 * XREFs of ?GetApplicationId@UwpWindowWrapperBase@@UEAAPEBGXZ @ 0x1801AF160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall UwpWindowWrapperBase::GetApplicationId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[37], 0LL);
}
