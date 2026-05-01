/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemSettingsUri__ @ 0x18000ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemSettingsUri__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_remoteSystemSettingsUri, L"ms-remotedesktop:settings");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemSettingsUri__);
}
