/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemAvailabilityPath__ @ 0x18000AA20
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemAvailabilityPath__()
{
  winrt::hstring::hstring(
    (winrt::hstring *)&c_remoteSystemAvailabilityPath,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RemoteSystemProviders\\");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemAvailabilityPath__);
}
