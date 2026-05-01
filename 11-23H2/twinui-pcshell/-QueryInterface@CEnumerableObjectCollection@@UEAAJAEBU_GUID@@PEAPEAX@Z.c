/*
 * XREFs of ?QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180181F40
 * Callers:
 *     ?QueryInterface@CEnumerableObjectCollection@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028F4E0 (-QueryInterface@CEnumerableObjectCollection@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CEnumerableObjectCollection@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028F500 (-QueryInterface@CEnumerableObjectCollection@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CEnumerableObjectCollection::QueryInterface(
        CEnumerableObjectCollection *this,
        const struct _GUID *a2,
        void **a3)
{
  return QISearch(this, (LPCQITAB)&`CEnumerableObjectCollection::QueryInterface'::`2'::qit, a2, a3);
}
