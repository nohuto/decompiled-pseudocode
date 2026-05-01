/*
 * XREFs of ?GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z @ 0x18038BC04
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180510890 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     <none>
 */

PCWSTR __fastcall Microsoft::WRL::Wrappers::HString::GetRawBuffer(HSTRING *this, unsigned int *a2)
{
  return WindowsGetStringRawBuffer(*this, a2);
}
