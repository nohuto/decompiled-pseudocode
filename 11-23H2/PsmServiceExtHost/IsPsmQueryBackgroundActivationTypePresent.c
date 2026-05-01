/*
 * XREFs of IsPsmQueryBackgroundActivationTypePresent @ 0x180049CBC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180043960 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18004A210 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPsmQueryBackgroundActivationTypePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800DBEC0 == 1 )
    return 1;
  if ( dword_1800DBEC0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800DBEC0 = 2 - (v1 != 0);
  return result;
}
