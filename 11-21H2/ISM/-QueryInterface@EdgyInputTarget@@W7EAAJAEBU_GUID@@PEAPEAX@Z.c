/*
 * XREFs of ?QueryInterface@EdgyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall EdgyInputTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return EdgyInputTarget::QueryInterface((EdgyInputTarget *)(a1 - 8), a2, a3);
}
