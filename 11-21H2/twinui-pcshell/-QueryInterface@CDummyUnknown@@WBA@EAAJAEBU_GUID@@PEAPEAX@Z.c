/*
 * XREFs of ?QueryInterface@CDummyUnknown@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020D070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyUnknown::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDummyUnknown::QueryInterface((CDummyUnknown *)(a1 - 16), a2, a3);
}
