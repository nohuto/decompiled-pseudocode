/*
 * XREFs of ?QueryInterface@ButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006AE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ButtonProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return ButtonProcessor::QueryInterface((ButtonProcessor *)(a1 - 8), a2, a3);
}
