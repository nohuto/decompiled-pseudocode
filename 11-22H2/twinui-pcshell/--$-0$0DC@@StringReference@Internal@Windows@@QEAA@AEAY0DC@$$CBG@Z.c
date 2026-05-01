/*
 * XREFs of ??$?0$0DC@@StringReference@Internal@Windows@@QEAA@AEAY0DC@$$CBG@Z @ 0x1800AC304
 * Callers:
 *     _dynamic_initializer_for__c_XboxGamesAppId__ @ 0x180002DE0 (_dynamic_initializer_for__c_XboxGamesAppId__.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 0x31u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
