/*
 * XREFs of ?AddRef@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@W7EAAKXZ @ 0x18028EDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::AddRef(
        __int64 a1)
{
  return CEnumerableObjectCollection::AddRef((CEnumerableObjectCollection *)(a1 - 8));
}
