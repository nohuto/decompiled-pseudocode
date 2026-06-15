/*
 * XREFs of IsWTSQuerySessionInformationWPresent @ 0x180069C04
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800434F0 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18006A340 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWTSQuerySessionInformationWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801CF760 == 1 )
    return 1;
  if ( dword_1801CF760 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801CF760 = 2 - (v1 != 0);
  return result;
}
