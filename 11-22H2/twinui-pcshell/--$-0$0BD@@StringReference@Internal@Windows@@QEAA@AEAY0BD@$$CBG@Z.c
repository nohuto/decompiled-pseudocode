/*
 * XREFs of ??$?0$0BD@@StringReference@Internal@Windows@@QEAA@AEAY0BD@$$CBG@Z @ 0x1801B0A68
 * Callers:
 *     _dynamic_initializer_for__c_GameDVRConfigFolderName__ @ 0x180002EA0 (_dynamic_initializer_for__c_GameDVRConfigFolderName__.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        Windows::Internal::StringReference *this,
        const unsigned __int16 (*a2)[19])
{
  if ( WindowsCreateStringReference(L"\\Microsoft\\GameDVR", 0x12u, &hstringHeader, &string2) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return &string2;
}
