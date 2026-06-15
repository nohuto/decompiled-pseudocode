/*
 * XREFs of IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x180061A28
 * Callers:
 *     ?OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z @ 0x1800EA100 (-OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180062060 (ApiSetQueryApiSetPresence_0.c)
 */

char IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801C2290 == 1 )
    return 1;
  if ( dword_1801C2290 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801C2290 = 2 - (v1 != 0);
  return result;
}
