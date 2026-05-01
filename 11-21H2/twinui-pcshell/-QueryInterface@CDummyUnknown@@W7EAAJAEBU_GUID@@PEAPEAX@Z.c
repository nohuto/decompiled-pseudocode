/*
 * XREFs of ?QueryInterface@CDummyUnknown@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020D050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyUnknown::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDummyUnknown::QueryInterface((CDummyUnknown *)(a1 - 8), a2, a3);
}
