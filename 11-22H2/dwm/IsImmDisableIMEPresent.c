/*
 * XREFs of IsImmDisableIMEPresent @ 0x1400068E8
 * Callers:
 *     wWinMain @ 0x140003430 (wWinMain.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1400069D0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsImmDisableIMEPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140016890 == 1 )
    return 1;
  if ( dword_140016890 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"*,", &v1) < 0 )
    return 0;
  result = v1;
  dword_140016890 = 2 - (v1 != 0);
  return result;
}
