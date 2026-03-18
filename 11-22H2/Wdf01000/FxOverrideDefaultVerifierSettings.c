/*
 * XREFs of FxOverrideDefaultVerifierSettings @ 0x1C004435C
 * Callers:
 *     FxRegistrySettingsInitialize @ 0x1C00443BC (FxRegistrySettingsInitialize.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00014A8 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall FxOverrideDefaultVerifierSettings(void *Key, wchar_t *Name, bool *OverrideValue)
{
  _UNICODE_STRING valueName; // [rsp+20h] [rbp-18h] BYREF
  unsigned int value; // [rsp+58h] [rbp+20h] BYREF

  value = 0;
  valueName = 0LL;
  RtlInitUnicodeString(&valueName, Name);
  if ( FxRegKey::_QueryULong(Key, &valueName, &value) >= 0 )
    *OverrideValue = value != 0;
}
