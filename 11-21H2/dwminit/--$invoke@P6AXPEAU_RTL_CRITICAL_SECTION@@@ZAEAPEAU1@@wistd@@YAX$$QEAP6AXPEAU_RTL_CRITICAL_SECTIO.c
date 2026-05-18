/*
 * XREFs of ??$invoke@P6AXPEAU_RTL_CRITICAL_SECTION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_CRITICAL_SECTION@@@ZAEAPEAU1@@Z @ 0x180009990
 * Callers:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000B4D0 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000D570 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::invoke<void (*)(_RTL_CRITICAL_SECTION *),_RTL_CRITICAL_SECTION * &>(
        __int64 (__fastcall **a1)(_QWORD),
        _QWORD *a2)
{
  return (*a1)(*a2);
}
