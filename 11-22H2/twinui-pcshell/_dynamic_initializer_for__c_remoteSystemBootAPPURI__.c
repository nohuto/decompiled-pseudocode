/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemBootAPPURI__ @ 0x18000AB70
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemBootAPPURI__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_remoteSystemBootAPPURI, L"ms-remotedesktop-launch:");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemBootAPPURI__);
}
