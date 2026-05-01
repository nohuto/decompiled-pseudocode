/*
 * XREFs of _dynamic_atexit_destructor_for__c_bootSystemId__ @ 0x1802C7FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_bootSystemId__()
{
  winrt::hstring::~hstring((void **)&c_bootSystemId);
}
