/*
 * XREFs of ?AddRef@CEnumerableObjectCollection@@UEAAKXZ @ 0x1801BBD20
 * Callers:
 *     ?AddRef@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@W7EAAKXZ @ 0x18028EDE0 (-AddRef@-$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemo.c)
 *     ?AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x18028EE00 (-AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 *     sub_1802AC440 @ 0x1802AC440 (sub_1802AC440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::AddRef(CEnumerableObjectCollection *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
