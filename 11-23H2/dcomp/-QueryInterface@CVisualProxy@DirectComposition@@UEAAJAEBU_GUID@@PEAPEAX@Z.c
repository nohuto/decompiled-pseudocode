/*
 * XREFs of ?QueryInterface@CVisualProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DirectComposition::CVisualProxy::QueryInterface(
        DirectComposition::CVisualProxy *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  return DirectComposition::CResorceProxy_QueryInterface(this, a2, a3, a4);
}
